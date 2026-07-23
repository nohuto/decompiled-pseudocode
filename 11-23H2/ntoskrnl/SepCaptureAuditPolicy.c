/*
 * XREFs of SepCaptureAuditPolicy @ 0x1409CD8C0
 * Callers:
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCaptureAuditPolicy(
        unsigned __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *PoolWithTag; // rax

  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 31 > 0x7FFFFFFF0000LL || a1 + 31 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, 0x1FuLL, 0x61506553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  PoolWithTag[2] = *(_QWORD *)(a1 + 16);
  *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(a1 + 24);
  *((_WORD *)PoolWithTag + 14) = *(_WORD *)(a1 + 28);
  *((_BYTE *)PoolWithTag + 30) = *(_BYTE *)(a1 + 30);
  return 0LL;
}
