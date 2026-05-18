/*
 * XREFs of sub_1800679C0 @ 0x1800679C0
 * Callers:
 *     sub_180067AD4 @ 0x180067AD4 (sub_180067AD4.c)
 *     sub_180067BFC @ 0x180067BFC (sub_180067BFC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180032BB8 @ 0x180032BB8 (sub_180032BB8.c)
 *     sub_180067140 @ 0x180067140 (sub_180067140.c)
 */

__int64 __fastcall sub_1800679C0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // r14
  __int64 *v4; // rdi

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180067140((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      sub_180029C94(v4 + 7);
      sub_180032BB8((char **)v4 + 5);
      sub_180010884((char *)v4, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x48uLL);
}
