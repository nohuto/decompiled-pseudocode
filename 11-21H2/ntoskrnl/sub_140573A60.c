/*
 * XREFs of sub_140573A60 @ 0x140573A60
 * Callers:
 *     sub_140568D20 @ 0x140568D20 (sub_140568D20.c)
 *     sub_14095FD08 @ 0x14095FD08 (sub_14095FD08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140573A60(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( a2 )
    return (a1 << 8) / (unsigned int)a2;
  else
    return 256LL;
}
