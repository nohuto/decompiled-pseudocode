/*
 * XREFs of sub_140262F20 @ 0x140262F20
 * Callers:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 * Callees:
 *     sub_140262FAC @ 0x140262FAC (sub_140262FAC.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 */

__int64 __fastcall sub_140262F20(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi

  v2 = 0;
  v5 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)sub_1402821F4(&StartContext, a1, 0LL) )
      return v2;
    v5 = 2;
  }
  if ( (a2 & 1) != 0 && !(unsigned int)sub_14032A4B0(&StartContext, a1, 1LL) )
  {
    if ( v5 )
      sub_140262FAC(a1, v5, 0LL);
  }
  else
  {
    return 1;
  }
  return v2;
}
