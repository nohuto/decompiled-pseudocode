/*
 * XREFs of sub_14028ECC8 @ 0x14028ECC8
 * Callers:
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1406BF94C @ 0x1406BF94C (sub_1406BF94C.c)
 *     sub_140700F70 @ 0x140700F70 (sub_140700F70.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14028ECC8(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = qword_1400161D0[(v1 >> 19) & 3];
  if ( result < 0x200 && (v1 & 0x800000) == 0 )
    return 1LL;
  return result;
}
