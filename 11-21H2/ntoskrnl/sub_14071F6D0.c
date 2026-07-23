/*
 * XREFs of sub_14071F6D0 @ 0x14071F6D0
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 */

__int64 __fastcall sub_14071F6D0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // di
  __int64 v4; // rax
  __int64 v6; // rax

  v1 = (unsigned int)*(__int16 *)(a1 + 2);
  v2 = 0;
  if ( (int)v1 - 1 >= 0 )
  {
    do
    {
      v6 = sub_140721CE0(a1, v2);
      sub_140AB42D0(v6);
      v1 = (unsigned int)*(__int16 *)(a1 + 2);
      ++v2;
    }
    while ( (__int16)v2 <= *(__int16 *)(a1 + 2) - 1 );
  }
  v4 = sub_140721CE0(a1, v1);
  return sub_1407C0854(v4);
}
