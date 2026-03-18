/*
 * XREFs of NtQueryBootOptions @ 0x140A00770
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x14093E520 (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtQueryBootOptions(_DWORD *Address, _DWORD *a2)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  struct _KTHREAD *v8; // rax
  unsigned int EnvironmentVariable; // eax
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-44h] BYREF
  int v15; // [rsp+3Ch] [rbp-3Ch] BYREF
  int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-34h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  KPROCESSOR_MODE PreviousMode; // [rsp+90h] [rbp+18h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v13 = 0;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = Address != 0LL ? *a2 : 0;
    v17 = v6;
    if ( v6 )
      ProbeForWrite(Address, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v6 = Address != 0LL ? *a2 : 0;
    v17 = v6;
  }
  if ( v6 >= 0x16 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v13 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)&v14,
                            (int *)&v13,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v14 = -2;
LABEL_24:
      v13 = 4;
      v11 = IoGetEnvironmentVariableEx(L"BootCurrent", (__int64)&EfiBootVariablesGuid, (__int64)&v15, (int *)&v13, 0LL);
      v7 = v11;
      if ( v11 == -1073741789 || v11 == -1073741568 )
      {
        v15 = -2;
LABEL_30:
        v13 = 2;
        v12 = IoGetEnvironmentVariableEx(L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)&v16, (int *)&v13, 0LL);
        v7 = v12;
        if ( v12 == -1073741789 || v12 == -1073741568 )
        {
          v16 = -2;
          v7 = 0;
        }
        else if ( !v12 && v13 > 2 )
        {
          v16 = (unsigned __int16)v16;
        }
        goto LABEL_36;
      }
      if ( !v11 )
      {
        if ( v13 > 2 )
          v15 = (unsigned __int16)v15;
        goto LABEL_30;
      }
LABEL_36:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_37;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_36;
      if ( v13 <= 2 )
      {
LABEL_21:
        if ( v14 != 0xFFFF )
          goto LABEL_24;
        goto LABEL_22;
      }
      v10 = v14;
      if ( v14 != -1 )
      {
        if ( v14 > 0xFFFE )
          v10 = 65534;
        v14 = v10;
        goto LABEL_21;
      }
    }
LABEL_22:
    v14 = -1;
    goto LABEL_24;
  }
  v7 = -1073741789;
LABEL_37:
  if ( !v7 )
  {
    if ( Address )
    {
      *Address = 1;
      Address[1] = 22;
      Address[2] = v14;
      Address[3] = v15;
      Address[4] = v16;
      *((_WORD *)Address + 10) = 0;
    }
  }
  *a2 = 22;
  return v7;
}
