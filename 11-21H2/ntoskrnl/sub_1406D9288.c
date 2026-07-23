/*
 * XREFs of sub_1406D9288 @ 0x1406D9288
 * Callers:
 *     sub_140673010 @ 0x140673010 (sub_140673010.c)
 *     sub_1406D8E14 @ 0x1406D8E14 (sub_1406D8E14.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 */

__int64 __fastcall sub_1406D9288(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  bool *v3; // r8

  v1 = *(_QWORD *)(a1 + 1304);
  if ( !v1 )
    return 3221225477LL;
  v2 = sub_140287970(v1);
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    return 3221225477LL;
  *v3 = *(_QWORD *)(v2 + 144) != 0LL;
  return 0LL;
}
