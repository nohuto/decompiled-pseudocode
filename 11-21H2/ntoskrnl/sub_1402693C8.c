/*
 * XREFs of sub_1402693C8 @ 0x1402693C8
 * Callers:
 *     sub_140266430 @ 0x140266430 (sub_140266430.c)
 *     sub_1406F2420 @ 0x1406F2420 (sub_1406F2420.c)
 *     sub_140B078E4 @ 0x140B078E4 (sub_140B078E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402693C8(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4F048;
    v2 = qword_140C4F040[0];
  }
  else
  {
    v1 = qword_140C534A8;
    v2 = qword_140C534B8;
  }
  return v2 - v1;
}
