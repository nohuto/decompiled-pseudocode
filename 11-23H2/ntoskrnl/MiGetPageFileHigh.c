/*
 * XREFs of MiGetPageFileHigh @ 0x140201DB0
 * Callers:
 *     MiFreeReservationRun @ 0x1407B7424 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C65B40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C65B40;
  return HIDWORD(a1);
}
