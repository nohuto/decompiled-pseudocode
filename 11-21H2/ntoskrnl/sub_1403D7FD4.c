/*
 * XREFs of sub_1403D7FD4 @ 0x1403D7FD4
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     sub_1403D7ED0 @ 0x1403D7ED0 (sub_1403D7ED0.c)
 *     sub_1403D9A34 @ 0x1403D9A34 (sub_1403D9A34.c)
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     sub_1405528FC @ 0x1405528FC (sub_1405528FC.c)
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 *     sub_140555698 @ 0x140555698 (sub_140555698.c)
 *     sub_14055C354 @ 0x14055C354 (sub_14055C354.c)
 *     sub_14055C3BC @ 0x14055C3BC (sub_14055C3BC.c)
 *     sub_14055C464 @ 0x14055C464 (sub_14055C464.c)
 *     sub_14055C600 @ 0x14055C600 (sub_14055C600.c)
 *     sub_14055C6BC @ 0x14055C6BC (sub_14055C6BC.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 *     sub_14055C8B4 @ 0x14055C8B4 (sub_14055C8B4.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_14055CB14 @ 0x14055CB14 (sub_14055CB14.c)
 *     sub_14055CBA8 @ 0x14055CBA8 (sub_14055CBA8.c)
 *     sub_14055D50C @ 0x14055D50C (sub_14055D50C.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_1405C6710 @ 0x1405C6710 (sub_1405C6710.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

char __fastcall sub_1403D7FD4(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && sub_14028FBF0(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
