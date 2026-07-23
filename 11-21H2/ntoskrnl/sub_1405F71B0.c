/*
 * XREFs of sub_1405F71B0 @ 0x1405F71B0
 * Callers:
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 * Callees:
 *     sub_1402376C4 @ 0x1402376C4 (sub_1402376C4.c)
 *     sub_140258C54 @ 0x140258C54 (sub_140258C54.c)
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 *     sub_1405F64CC @ 0x1405F64CC (sub_1405F64CC.c)
 *     sub_1405F6B54 @ 0x1405F6B54 (sub_1405F6B54.c)
 *     sub_1409D5498 @ 0x1409D5498 (sub_1409D5498.c)
 */

__int64 (__fastcall *__fastcall sub_1405F71B0(__int64 a1, __int64 a2))()
{
  char *v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_OWORD *)(a1 + 1840);
  sub_1409D5498(a1, a2);
  v3 = *(char **)(a1 + 448);
  if ( v3 )
    sub_1405F64CC(a1 + 448, v3);
  sub_1402376C4(a1 + 1424);
  sub_1402376C4(a1 + 1536);
  sub_140258C54((_SLIST_HEADER *)(a1 + 1248), 1);
  sub_1405F6B54((PEX_SPIN_LOCK)(a1 + 1264));
  sub_140258C54((_SLIST_HEADER *)(a1 + 1408), 1);
  return sub_1403D6F40(a1, &v5);
}
