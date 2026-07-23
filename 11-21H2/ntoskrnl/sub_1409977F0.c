/*
 * XREFs of sub_1409977F0 @ 0x1409977F0
 * Callers:
 *     sub_14038BB00 @ 0x14038BB00 (sub_14038BB00.c)
 *     sub_14038BCE0 @ 0x14038BCE0 (sub_14038BCE0.c)
 * Callees:
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_1405CCCFC @ 0x1405CCCFC (sub_1405CCCFC.c)
 *     sub_1405D6DC4 @ 0x1405D6DC4 (sub_1405D6DC4.c)
 *     sub_14098C04C @ 0x14098C04C (sub_14098C04C.c)
 */

__int64 __fastcall sub_1409977F0(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  char v4; // si

  v3 = *(_QWORD *)(a2 - 160 + 80);
  if ( *(_BYTE *)a1 == 3 )
    return sub_1405D6DC4(v3, a1, 0);
  v4 = 0;
  if ( sub_14098C04C(a2 - 160) )
    return sub_1405D6DC4(v3, a1, 0);
  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    v4 = 1;
    sub_1402D2848(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL));
  }
  return sub_1405CCCFC(v3, v4, a1);
}
