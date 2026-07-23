/*
 * XREFs of sub_140683DF0 @ 0x140683DF0
 * Callers:
 *     sub_140683DA4 @ 0x140683DA4 (sub_140683DA4.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 * Callees:
 *     sub_14020B10C @ 0x14020B10C (sub_14020B10C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1406A2200 @ 0x1406A2200 (sub_1406A2200.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

__int64 __fastcall sub_140683DF0(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  sub_1406FFED4(Event, CurrentThread);
  if ( a2 )
    --Event[59].Header.LockNV;
  if ( !Event[59].Header.LockNV )
  {
    if ( _interlockedbittestandreset(&Event[63].Header.Lock, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset(&Event[63].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[23].Header.Lock && (HIDWORD(Event[44].Header.WaitListHead.Flink) & 0x10) != 0 )
        sub_1406A2200(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Event[63].Header.Lock, 0x1Du)
        && (Event[63].Header.LockNV & 0x40000000) != 0 )
      {
        sub_14020B10C((__int64)Event);
      }
    }
  }
  return sub_1406FFE90(Event, CurrentThread);
}
