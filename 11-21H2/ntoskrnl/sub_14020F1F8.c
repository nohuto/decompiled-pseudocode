/*
 * XREFs of sub_14020F1F8 @ 0x14020F1F8
 * Callers:
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 *     sub_1403A493C @ 0x1403A493C (sub_1403A493C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14020F1F8(unsigned __int64 a1)
{
  unsigned __int128 v1; // rax
  unsigned __int64 v2; // r8

  *((_QWORD *)&v1 + 1) = 0LL;
  if ( a1 > MEMORY[0xFFFFF78000000348] )
  {
    v2 = a1 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v2 <<= MEMORY[0xFFFFF78000000368];
    v1 = v2 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    qword_140C548C8 += v1;
    if ( qword_140C548C8 < (unsigned __int64)v1 )
      ++*((_QWORD *)&v1 + 1);
  }
  return *((_QWORD *)&v1 + 1) + MEMORY[0xFFFFF78000000014];
}
