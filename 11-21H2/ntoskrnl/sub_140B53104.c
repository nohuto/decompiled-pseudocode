/*
 * XREFs of sub_140B53104 @ 0x140B53104
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1406E66AC @ 0x1406E66AC (sub_1406E66AC.c)
 *     sub_140766F60 @ 0x140766F60 (sub_140766F60.c)
 */

__int64 sub_140B53104()
{
  int v0; // edx
  int v1; // eax

  if ( sub_140766F60() )
  {
    v1 = sub_1406E66AC();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140C2080C = v0;
  return 0LL;
}
