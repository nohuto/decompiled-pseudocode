/*
 * XREFs of sub_1403531F0 @ 0x1403531F0
 * Callers:
 *     sub_140200D20 @ 0x140200D20 (sub_140200D20.c)
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_140274818 @ 0x140274818 (sub_140274818.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402B2E40 @ 0x1402B2E40 (sub_1402B2E40.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402CFF00 @ 0x1402CFF00 (sub_1402CFF00.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 *     sub_14058C874 @ 0x14058C874 (sub_14058C874.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_1405941C0 @ 0x1405941C0 (sub_1405941C0.c)
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405A8748 @ 0x1405A8748 (sub_1405A8748.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1405C4FB8 @ 0x1405C4FB8 (sub_1405C4FB8.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1403531F0(__int64 a1)
{
  _DWORD *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &unk_140C53D00;
  else
    v1 = (_DWORD *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
