/*
 * XREFs of sub_140358884 @ 0x140358884
 * Callers:
 *     ntoskrnl_4 @ 0x1402D5B80 (ntoskrnl_4.c)
 *     sub_1407D53D0 @ 0x1407D53D0 (sub_1407D53D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140358884(int a1)
{
  return (a1 & 0x8000000E) == a1 && ((a1 & 6) == 0 || (a1 & 8) == 0);
}
