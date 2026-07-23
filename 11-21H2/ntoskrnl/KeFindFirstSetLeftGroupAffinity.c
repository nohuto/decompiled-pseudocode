/*
 * XREFs of KeFindFirstSetLeftGroupAffinity @ 0x14024C330
 * Callers:
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 *     sub_1406CD16C @ 0x1406CD16C (sub_1406CD16C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanReverse64(&v2, v2);
  return (unsigned int)dword_140D105E0[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
