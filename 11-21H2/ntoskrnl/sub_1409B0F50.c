/*
 * XREFs of sub_1409B0F50 @ 0x1409B0F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409B07A8 @ 0x1409B07A8 (sub_1409B07A8.c)
 */

void __fastcall sub_1409B0F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8

  sub_1409B07A8(a1, *(_QWORD *)(a2 + 24));
  if ( *v3 )
    sub_14042A5E0(v2, v3[2]);
}
