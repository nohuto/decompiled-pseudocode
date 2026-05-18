/*
 * XREFs of sub_18003BFD0 @ 0x18003BFD0
 * Callers:
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

char __fastcall sub_18003BFD0(__int64 a1)
{
  sub_18003E330(a1);
  return HIWORD(*(_DWORD *)(a1 + 448)) & 1;
}
