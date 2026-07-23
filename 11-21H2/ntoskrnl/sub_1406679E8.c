/*
 * XREFs of sub_1406679E8 @ 0x1406679E8
 * Callers:
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406679E8(int a1, int a2, void **a3)
{
  int v4; // ebx

  v4 = sub_14072B3B0(a1, (_DWORD)qword_140D069D8, a2, a1);
  if ( v4 >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)v4;
}
