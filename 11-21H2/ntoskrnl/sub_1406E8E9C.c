/*
 * XREFs of sub_1406E8E9C @ 0x1406E8E9C
 * Callers:
 *     sub_140752B6C @ 0x140752B6C (sub_140752B6C.c)
 *     sub_140752F30 @ 0x140752F30 (sub_140752F30.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_140B302E4 @ 0x140B302E4 (sub_140B302E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E8E9C(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    *((_QWORD *)&unk_140C09610 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
