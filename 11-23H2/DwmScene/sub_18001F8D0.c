/*
 * XREFs of sub_18001F8D0 @ 0x18001F8D0
 * Callers:
 *     sub_1800911D8 @ 0x1800911D8 (sub_1800911D8.c)
 * Callees:
 *     sub_18001EE50 @ 0x18001EE50 (sub_18001EE50.c)
 */

__int64 __fastcall sub_18001F8D0(char *a1, char *a2)
{
  size_t Size; // r8
  size_t v3; // rax

  Size = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    a2 = *(char **)a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 0x10uLL )
    a1 = *(char **)a1;
  return sub_18001EE50(a1, v3, Size, a2, Size);
}
