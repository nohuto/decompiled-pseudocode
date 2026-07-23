/*
 * XREFs of sub_14071A784 @ 0x14071A784
 * Callers:
 *     sub_140718CA8 @ 0x140718CA8 (sub_140718CA8.c)
 *     sub_140917930 @ 0x140917930 (sub_140917930.c)
 * Callees:
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 */

void __fastcall sub_14071A784(volatile signed __int32 *P, volatile signed __int32 *a2)
{
  if ( P )
    sub_140AB41E0(P);
  if ( a2 )
    sub_140AB41E0(a2);
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    sub_1406BBAD8(P);
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd(a2 + 1058, 0xFFFFFFFF) == 1 )
      sub_1406BBAD8(a2);
  }
}
