/*
 * XREFs of sub_1403B0D74 @ 0x1403B0D74
 * Callers:
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403B0C40 @ 0x1403B0C40 (sub_1403B0C40.c)
 *     sub_1403B0CB0 @ 0x1403B0CB0 (sub_1403B0CB0.c)
 *     sub_1403D59D4 @ 0x1403D59D4 (sub_1403D59D4.c)
 *     sub_14051DB60 @ 0x14051DB60 (sub_14051DB60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B0D74(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // ecx

  v2 = a2 >> 4;
  if ( v2 <= 2u )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 236);
  if ( 15 - (unsigned int)v2 > v3 )
    return 0LL;
  else
    return v2 + v3 - 15;
}
