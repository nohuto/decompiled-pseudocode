/*
 * XREFs of WheaProcessWaitingETWEvents @ 0x140645F50
 * Callers:
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 * Callees:
 *     sub_140645DC0 @ 0x140645DC0 (sub_140645DC0.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 */

void WheaProcessWaitingETWEvents()
{
  if ( KeGetCurrentIrql() )
  {
    if ( byte_140CE1AD2 )
      sub_140645DC0();
  }
  else
  {
    sub_140860F60();
  }
}
