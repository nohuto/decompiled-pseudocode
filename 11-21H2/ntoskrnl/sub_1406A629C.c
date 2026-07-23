/*
 * XREFs of sub_1406A629C @ 0x1406A629C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x14022EB30 (RtlCreateAtomTableEx.c)
 * Callees:
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 */

bool __fastcall sub_1406A629C(__int64 a1)
{
  __int64 v2; // rax

  v2 = sub_1406A6378(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = v2;
  return v2 != 0;
}
