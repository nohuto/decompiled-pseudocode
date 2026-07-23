/*
 * XREFs of sub_14026FA0C @ 0x14026FA0C
 * Callers:
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 * Callees:
 *     sub_1402708F4 @ 0x1402708F4 (sub_1402708F4.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 */

__int64 __fastcall sub_14026FA0C(unsigned __int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  char v12; // cl

  *a3 = 0LL;
  v7 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*v7 & 1) == 0 )
    return 3221435187LL;
  v8 = (*v7 >> 12) & 0xFFFFFFFFFFLL;
  if ( v8 > qword_140C50840 )
    return 3221225557LL;
  if ( ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 3221225557LL;
  v9 = 0;
  v10 = 48 * v8 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0
    || (v11 = *v7, (*v7 & 1) == 0)
    || (v11 & 0x200) != 0
    || v8 != ((v11 >> 12) & 0xFFFFFFFFFFLL)
    || (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
  {
    v9 = -1073741739;
  }
  else
  {
    if ( (v11 & 0x20) == 0 )
      sub_14033A510(v7, 1LL);
    if ( !a4 || (v9 = sub_1402708F4(a1, 1LL, a4), v9 >= 0) )
    {
      sub_140274508(v10, 1LL);
      v12 = *(_BYTE *)(v10 + 34) | 0x20;
      *a3 = v10;
      *(_BYTE *)(v10 + 34) = v12;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v9;
}
