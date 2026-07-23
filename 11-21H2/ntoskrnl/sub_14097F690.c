/*
 * XREFs of sub_14097F690 @ 0x14097F690
 * Callers:
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 * Callees:
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14097F660 @ 0x14097F660 (sub_14097F660.c)
 *     sub_14097F8F8 @ 0x14097F8F8 (sub_14097F8F8.c)
 */

__int64 __fastcall sub_14097F690(__int64 a1, int a2, int a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi

  if ( !a3 )
    sub_14097F660();
  sub_140313C70(qword_140C4F3F0 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  v7 = sub_140313C70(v6);
  v9 = 0;
  if ( !(unsigned int)sub_1402DBF90(v7, v8, 1, 9) )
    v9 = -1073741670;
  if ( !a3 )
    sub_14097F8F8();
  return v9;
}
