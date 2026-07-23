/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x1409FF6C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     HalGetEnvironmentVariable @ 0x1405048F0 (HalGetEnvironmentVariable.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407561F0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  wchar_t *v10; // rdx
  ULONG v11; // eax
  unsigned __int16 v12; // bx
  int v13; // ebx
  void *Pool2; // rdi
  struct _KTHREAD *v15; // rax
  int EnvironmentVariable; // ebx
  NTSTATUS v17; // ebx
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  ULONG v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+58h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-20h]

  v21 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  UnicodeString = 0LL;
  DestinationString.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    UnicodeString = *VariableName;
    v8 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v8 )
      return -1073741819;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (wchar_t *)((char *)UnicodeString.Buffer + v8);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    ProbeForWrite(VariableValue, ValueLength, 2u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v7 = (__int64)ReturnLength;
      *(_WORD *)v7 = *(_WORD *)v7;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *VariableName;
  }
  v11 = RtlxUnicodeStringToOemSize(&UnicodeString);
  v12 = v11;
  v21 = v11;
  DestinationString.Buffer = (char *)ExAllocatePool2(64LL, v11, 1920364101LL);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v12;
  v13 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v22 = v13;
  if ( v13 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 1024LL, 1920364101LL);
    P = Pool2;
    if ( Pool2 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)Pool2);
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741823;
      }
      else
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)Pool2);
        UnicodeString.Buffer = VariableValue;
        UnicodeString.MaximumLength = ValueLength;
        UnicodeString.Length = 0;
        v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v22 = v17;
        if ( ReturnLength )
          *ReturnLength = UnicodeString.Length;
        ExFreePoolWithTag(Pool2, 0);
        return v17;
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
    return v13;
  }
}
