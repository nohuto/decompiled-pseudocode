/*
 * XREFs of sub_140A01700 @ 0x140A01700
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     HalSetEnvironmentVariable @ 0x140508720 (HalSetEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A01700(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  unsigned __int16 v2; // ax
  wchar_t *v4; // r8
  unsigned __int16 v5; // ax
  wchar_t *v6; // rdx
  ULONG v7; // eax
  unsigned __int16 v8; // bx
  NTSTATUS v9; // ebx
  ULONG v10; // eax
  unsigned __int16 v11; // bx
  NTSTATUS v12; // ebx
  struct _KTHREAD *v13; // rax
  int v14; // ebx
  _STRING DestinationString; // [rsp+28h] [rbp-70h] BYREF
  _STRING v16; // [rsp+38h] [rbp-60h] BYREF
  ULONG v17; // [rsp+48h] [rbp-50h]
  ULONG v18; // [rsp+4Ch] [rbp-4Ch]
  NTSTATUS v19; // [rsp+50h] [rbp-48h]
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
  PreviousMode = *((_BYTE *)CurrentThread + 562);
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      goto LABEL_20;
    UnicodeString = *a1;
    v2 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v2 )
      return 3221225626LL;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (wchar_t *)((char *)UnicodeString.Buffer + v2);
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_20:
      ExRaiseDatatypeMisalignment();
    SourceString = *a2;
    v5 = _mm_cvtsi128_si32((__m128i)SourceString);
    if ( !v5 )
      return 3221225626LL;
    if ( ((__int64)SourceString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (wchar_t *)((char *)SourceString.Buffer + v5);
    if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < SourceString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    UnicodeString = *a1;
    SourceString = *a2;
  }
  v7 = RtlxUnicodeStringToOemSize(&UnicodeString);
  v8 = v7;
  v17 = v7;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return 3221225626LL;
  DestinationString.MaximumLength = v8;
  v9 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v19 = v9;
  if ( v9 >= 0 )
  {
    v10 = RtlxUnicodeStringToOemSize(&SourceString);
    v11 = v10;
    v18 = v10;
    v16.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    if ( v16.Buffer )
    {
      v16.MaximumLength = v11;
      v12 = RtlUnicodeStringToAnsiString(&v16, &SourceString, 0);
      v19 = v12;
      if ( v12 >= 0 )
      {
        v13 = KeGetCurrentThread();
        --*((_WORD *)v13 + 242);
        ExAcquireFastMutexUnsafe(&stru_140C11680);
        v14 = HalSetEnvironmentVariable(DestinationString.Buffer, v16.Buffer);
        ExReleaseFastMutexUnsafe(&stru_140C11680);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v16.Buffer, 0);
        return v14 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v16.Buffer, 0);
        return (unsigned int)v12;
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
    return (unsigned int)v9;
  }
}
