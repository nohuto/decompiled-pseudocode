/*
 * XREFs of sub_1800989E0 @ 0x1800989E0
 * Callers:
 *     sub_1800986C8 @ 0x1800986C8 (sub_1800986C8.c)
 *     sub_1800EAD9D @ 0x1800EAD9D (sub_1800EAD9D.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_1800989E0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B24(v2 + 16);
  return sub_180027FB0(a1);
}
