/*
 * XREFs of sub_14097CAE8 @ 0x14097CAE8
 * Callers:
 *     sub_14097BBE0 @ 0x14097BBE0 (sub_14097BBE0.c)
 *     sub_14097D688 @ 0x14097D688 (sub_14097D688.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_1405AAEC8 @ 0x1405AAEC8 (sub_1405AAEC8.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097CAE8(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int16 v4; // ax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  PVOID v7; // rbp
  __int64 result; // rax
  int v9; // esi

  v2 = *((_QWORD *)KeGetCurrentThread() + 23);
  v3 = *(_QWORD *)(sub_1405AAEC8(a1) + 16712);
  if ( *(_QWORD *)(v2 + 1408) )
  {
    v4 = *(_WORD *)(v2 + 2412);
    if ( (v4 == 332 || v4 == 452) && (unsigned __int64)(v3 + 1) > 0x100000000LL )
      v3 = 0xFFFFFFFFLL;
  }
  v5 = sub_1405AAF90(a1);
  if ( v5 == 1 )
    v6 = v3 + 1;
  else
    v6 = (~(v5 - 1) & (v3 + v5 - 1)) / v5;
  v7 = sub_1402828F0(64, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0)), 0x4C646156u);
  if ( !v7 )
    return 3221225626LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0
    && (v9 = PsChargeProcessNonPagedPoolQuota(v2, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0))), v9 < 0) )
  {
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)v9;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v6;
    result = 0LL;
    *(_QWORD *)(a1 + 32) = v7;
  }
  return result;
}
