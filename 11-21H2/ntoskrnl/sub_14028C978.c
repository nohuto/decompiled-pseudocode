/*
 * XREFs of sub_14028C978 @ 0x14028C978
 * Callers:
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_14058DC5C @ 0x14058DC5C (sub_14058DC5C.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 * Callees:
 *     sub_14028C9B4 @ 0x14028C9B4 (sub_14028C9B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14028C978(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return sub_14028C9B4(v2, 1LL, a2);
}
