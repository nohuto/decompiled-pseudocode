/*
 * XREFs of sub_1408651F0 @ 0x1408651F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140819BD0 @ 0x140819BD0 (sub_140819BD0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1408651F0(int *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  sub_140A48330((_DWORD)a1);
  sub_140819BD0(a1, a2);
  return sub_140A47CF8(v5, v4);
}
