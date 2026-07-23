/*
 * XREFs of NtQueryBootOptions @ 0x14083F5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  ULONG v4; // ebx
  __int64 v5; // rcx
  NTSTATUS v7; // ebx
  struct _KTHREAD *v8; // rax
  NTSTATUS EnvironmentVariable; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  ULONG v14[2]; // [rsp+34h] [rbp-44h] BYREF
  ULONG v15; // [rsp+3Ch] [rbp-3Ch] BYREF
  ULONG v16; // [rsp+40h] [rbp-38h] BYREF
  ULONG v17; // [rsp+44h] [rbp-34h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  KPROCESSOR_MODE PreviousMode; // [rsp+90h] [rbp+18h]

  v14[0] = 0;
  v15 = 0;
  v16 = 0;
  v13 = 0;
  if ( dword_140C31AF0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BootOptionsLength < 0x7FFFFFFF0000LL )
      v5 = (__int64)BootOptionsLength;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v4 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v17 = v4;
    if ( v4 )
      ProbeForWrite(BootOptions, v4, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v4 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v17 = v4;
  }
  if ( v4 >= 0x16 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v13 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (const size_t *)L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)v14,
                            (int *)&v13,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v14[0] = -2;
LABEL_21:
      v13 = 4;
      v10 = IoGetEnvironmentVariableEx(
              (const size_t *)L"BootCurrent",
              (__int64)&EfiBootVariablesGuid,
              (__int64)&v15,
              (int *)&v13,
              0LL);
      v7 = v10;
      if ( v10 == -1073741789 || v10 == -1073741568 )
      {
        v15 = -2;
LABEL_26:
        v13 = 2;
        v11 = IoGetEnvironmentVariableEx(
                (const size_t *)L"BootNext",
                (__int64)&EfiBootVariablesGuid,
                (__int64)&v16,
                (int *)&v13,
                0LL);
        v7 = v11;
        if ( v11 == -1073741568 || v11 == -1073741789 )
        {
          v16 = -2;
          v7 = 0;
        }
        else if ( !v11 && v13 > 2 )
        {
          v16 = (unsigned __int16)v16;
        }
        goto LABEL_28;
      }
      if ( !v10 )
      {
        if ( v13 > 2 )
          v15 = (unsigned __int16)v15;
        goto LABEL_26;
      }
LABEL_28:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_12;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_28;
      if ( v13 <= 2 )
      {
LABEL_20:
        if ( v14[0] != 0xFFFF )
          goto LABEL_21;
        goto LABEL_35;
      }
      v12 = v14[0];
      if ( v14[0] != -1 )
      {
        if ( v14[0] > 0xFFFE )
          v12 = 65534;
        v14[0] = v12;
        goto LABEL_20;
      }
    }
LABEL_35:
    v14[0] = -1;
    goto LABEL_21;
  }
  v7 = -1073741789;
LABEL_12:
  if ( !v7 )
  {
    if ( BootOptions )
    {
      BootOptions->Version = 1;
      BootOptions->Length = 22;
      BootOptions->Timeout = v14[0];
      BootOptions->CurrentBootEntryId = v15;
      BootOptions->NextBootEntryId = v16;
      BootOptions->HeadlessRedirection[0] = 0;
    }
  }
  *BootOptionsLength = 22;
  return v7;
}
