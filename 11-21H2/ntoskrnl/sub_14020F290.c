/*
 * XREFs of sub_14020F290 @ 0x14020F290
 * Callers:
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14020F290(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r8

  LOBYTE(v4) = MEMORY[0xFFFFF78000000369];
  *((_QWORD *)&v4 + 1) = 0LL;
  v5 = MEMORY[0xFFFFF78000000350];
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = MEMORY[0xFFFFF78000000360];
  *a2 = 0LL;
  if ( a1 > v5 )
  {
    v8 = a1 - v5;
    if ( (_BYTE)v4 )
      v8 <<= v4;
    v4 = v8 * (unsigned __int128)v7;
    qword_140C547E8 += v4;
    if ( qword_140C547E8 < (unsigned __int64)v4 )
      ++*((_QWORD *)&v4 + 1);
    *a2 = *((_QWORD *)&v4 + 1);
  }
  return *((_QWORD *)&v4 + 1) + v6;
}
