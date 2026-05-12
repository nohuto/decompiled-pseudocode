/*
 * XREFs of sub_1C00238A0 @ 0x1C00238A0
 * Callers:
 *     sub_1C0023090 @ 0x1C0023090 (sub_1C0023090.c)
 *     sub_1C00230E4 @ 0x1C00230E4 (sub_1C00230E4.c)
 *     sub_1C0023EFC @ 0x1C0023EFC (sub_1C0023EFC.c)
 * Callees:
 *     sub_1C0023478 @ 0x1C0023478 (sub_1C0023478.c)
 *     sub_1C00235F0 @ 0x1C00235F0 (sub_1C00235F0.c)
 *     sub_1C00236F0 @ 0x1C00236F0 (sub_1C00236F0.c)
 */

__int64 __fastcall sub_1C00238A0(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = sub_1C00235F0(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    sub_1C0023478((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      sub_1C00236F0(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
