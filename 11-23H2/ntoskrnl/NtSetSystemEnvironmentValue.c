/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x140A00210
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     HalSetEnvironmentVariable @ 0x140504ED0 (HalSetEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToOemSize @ 0x140755ED0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758870 (RtlUnicodeStringToAnsiString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r8
  unsigned __int16 v5; // ax
  wchar_t *v6; // rdx
  ULONG v7; // eax
  unsigned __int16 v8; // bx
  int v9; // ebx
  ULONG v10; // eax
  unsigned __int16 v11; // bx
  int v12; // ebx
  struct _KTHREAD *v13; // rax
  int v14; // ebx
  _STRING DestinationString; // [rsp+28h] [rbp-70h] BYREF
  _STRING v16; // [rsp+38h] [rbp-60h] BYREF
  ULONG v17; // [rsp+48h] [rbp-50h]
  ULONG v18; // [rsp+4Ch] [rbp-4Ch]
  int v19; // [rsp+50h] [rbp-48h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+68h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-18h]
  KPROCESSOR_MODE PreviousMode; // [rsp+B0h] [rbp+18h]

  v17 = 0;
  v18 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&v16.Length = 0LL;
  UnicodeString = 0LL;
  SourceString = 0LL;
  DestinationString.Buffer = 0LL;
  v16.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      goto LABEL_20;
    UnicodeString = *VariableName;
    v2 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v2 )
      return -1073741670;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (wchar_t *)((char *)UnicodeString.Buffer + v2);
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)VariableValue & 3) != 0 )
LABEL_20:
      ExRaiseDatatypeMisalignment();
    SourceString = *VariableValue;
    v5 = _mm_cvtsi128_si32((__m128i)SourceString);
    if ( !v5 )
      return -1073741670;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + v5);
    if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < SourceString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *VariableName;
    SourceString = *VariableValue;
  }
  v7 = RtlxUnicodeStringToOemSize(&UnicodeString);
  v8 = v7;
  v17 = v7;
  DestinationString.Buffer = (char *)ExAllocatePool2(64LL, v7, 1920364101LL);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v8;
  v9 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v19 = v9;
  if ( v9 >= 0 )
  {
    v10 = RtlxUnicodeStringToOemSize(&SourceString);
    v11 = v10;
    v18 = v10;
    v16.Buffer = (char *)ExAllocatePool2(64LL, v10, 1920364101LL);
    if ( v16.Buffer )
    {
      v16.MaximumLength = v11;
      v12 = RtlUnicodeStringToAnsiString(&v16, &SourceString, 0);
      v19 = v12;
      if ( v12 >= 0 )
      {
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v14 = HalSetEnvironmentVariable(DestinationString.Buffer, v16.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v16.Buffer, 0);
        return v14 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v16.Buffer, 0);
        return v12;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v9;
  }
}
