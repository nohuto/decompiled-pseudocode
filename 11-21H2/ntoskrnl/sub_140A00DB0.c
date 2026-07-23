/*
 * XREFs of sub_140A00DB0 @ 0x140A00DB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     HalGetEnvironmentVariable @ 0x140508580 (HalGetEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A00DB0(UNICODE_STRING *a1, volatile void *a2, unsigned __int16 a3, unsigned __int16 *a4)
{
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  wchar_t *v10; // rdx
  ULONG v11; // eax
  unsigned __int16 v12; // bx
  NTSTATUS v13; // ebx
  PVOID PoolWithTag; // rdi
  struct _KTHREAD *v15; // rax
  int EnvironmentVariable; // ebx
  unsigned int v17; // ebx
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  ULONG v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+58h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-20h]

  v21 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  UnicodeString = 0LL;
  DestinationString.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = *((_BYTE *)CurrentThread + 562);
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    UnicodeString = *a1;
    v8 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v8 )
      return 3221225477LL;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (wchar_t *)((char *)UnicodeString.Buffer + v8);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    ProbeForWrite(a2, a3, 2u);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a4;
      *(_WORD *)v7 = *(_WORD *)v7;
    }
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    UnicodeString = *a1;
  }
  v11 = RtlxUnicodeStringToOemSize(&UnicodeString);
  v12 = v11;
  v21 = v11;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return 3221225626LL;
  DestinationString.MaximumLength = v12;
  v13 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v22 = v13;
  if ( v13 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72766E45u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = KeGetCurrentThread();
      --*((_WORD *)v15 + 242);
      ExAcquireFastMutexUnsafe(&stru_140C11680);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)PoolWithTag);
      ExReleaseFastMutexUnsafe(&stru_140C11680);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return 3221225473LL;
      }
      else
      {
        RtlInitString(&DestinationString, (PCSZ)PoolWithTag);
        UnicodeString.Buffer = (wchar_t *)a2;
        UnicodeString.MaximumLength = a3;
        UnicodeString.Length = 0;
        v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v22 = v17;
        if ( a4 )
          *a4 = UnicodeString.Length;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v17;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return 3221225626LL;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return (unsigned int)v13;
  }
}
