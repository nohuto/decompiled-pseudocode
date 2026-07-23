/*
 * XREFs of sub_14070F37C @ 0x14070F37C
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

void __fastcall sub_14070F37C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx

  if ( dword_140D05010 )
  {
    v4 = a1 - 48;
    sub_1405C5EC8(a1 - 48, 0, 1u, 0x746C6644u);
    sub_1405C5EC8(v4, 1, 1u, a3);
  }
}
