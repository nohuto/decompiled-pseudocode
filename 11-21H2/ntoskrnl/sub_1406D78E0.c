/*
 * XREFs of sub_1406D78E0 @ 0x1406D78E0
 * Callers:
 *     sub_1406D7770 @ 0x1406D7770 (sub_1406D7770.c)
 *     sub_1406D77F0 @ 0x1406D77F0 (sub_1406D77F0.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 * Callees:
 *     sub_140683DF0 @ 0x140683DF0 (sub_140683DF0.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1409E21EC @ 0x1409E21EC (sub_1409E21EC.c)
 */

char __fastcall sub_1406D78E0(PRKEVENT Event, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(&Event[63].Header.Lock, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  sub_1406FF880(Event, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    sub_140683DF0(Event, 0, 0);
    v6 = BYTE4(v8);
  }
  if ( (xmmword_140D06900[0] & 0x80000) != 0 )
    sub_1409E21EC(Event, v6, a2, 1825LL);
  return v3;
}
