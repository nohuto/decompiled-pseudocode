/*
 * XREFs of sub_14077DE44 @ 0x14077DE44
 * Callers:
 *     sub_1406989E4 @ 0x1406989E4 (sub_1406989E4.c)
 *     sub_140699CF0 @ 0x140699CF0 (sub_140699CF0.c)
 *     sub_140699D9C @ 0x140699D9C (sub_140699D9C.c)
 *     sub_140771F34 @ 0x140771F34 (sub_140771F34.c)
 *     sub_14077CA18 @ 0x14077CA18 (sub_14077CA18.c)
 *     sub_14077DD78 @ 0x14077DD78 (sub_14077DD78.c)
 *     sub_14078A0E8 @ 0x14078A0E8 (sub_14078A0E8.c)
 *     sub_140A26D58 @ 0x140A26D58 (sub_140A26D58.c)
 *     sub_140A26F84 @ 0x140A26F84 (sub_140A26F84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14077DE44(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
