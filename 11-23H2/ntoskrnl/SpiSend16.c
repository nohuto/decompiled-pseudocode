/*
 * XREFs of SpiSend16 @ 0x14067D5AC
 * Callers:
 *     SpiMax311GetByte @ 0x14067D260 (SpiMax311GetByte.c)
 *     SpiMax311PutByte @ 0x14067D330 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14067D3C0 (SpiMax311RxReady.c)
 *     SpiMax311SetBaud @ 0x14067D420 (SpiMax311SetBaud.c)
 *     SpiMax311TxEmpty @ 0x14067D574 (SpiMax311TxEmpty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     SpiInit @ 0x14067D108 (SpiInit.c)
 */

__int64 __fastcall SpiSend16(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx

  v3 = *a1;
  v4 = (unsigned __int16)a2;
  SpiInit(*a1, a2, a3, word_140D1B168);
  ((void (__fastcall *)(__int64, __int64))off_140C06B48[0])(v3 + 16, 2LL);
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(v3 + 96, v4);
  while ( (((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v3 + 40) & 0xD) != 0xC )
    ;
  return ((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v3 + 96);
}
