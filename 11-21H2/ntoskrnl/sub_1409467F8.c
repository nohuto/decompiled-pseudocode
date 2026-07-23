/*
 * XREFs of sub_1409467F8 @ 0x1409467F8
 * Callers:
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 * Callees:
 *     sub_140560880 @ 0x140560880 (sub_140560880.c)
 *     sub_1405609F8 @ 0x1405609F8 (sub_1405609F8.c)
 */

void __fastcall sub_1409467F8(int a1)
{
  volatile signed __int32 *v1; // rax

  v1 = (volatile signed __int32 *)sub_1405609F8(a1);
  if ( v1 )
  {
    _InterlockedDecrement(v1 + 48);
    sub_140560880((PVOID)v1);
  }
}
