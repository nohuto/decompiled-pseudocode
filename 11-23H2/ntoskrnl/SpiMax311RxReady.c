/*
 * XREFs of SpiMax311RxReady @ 0x14067D910
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311BufferRxData @ 0x14067D774 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x14067DAFC (SpiSend16.c)
 */

bool __fastcall SpiMax311RxReady(_QWORD *a1)
{
  __int16 v2; // ax

  if ( !a1 || !*a1 )
    return 0;
  while ( 1 )
  {
    v2 = SpiSend16(a1, 0LL);
    if ( v2 >= 0 )
      break;
    SpiMax311BufferRxData(v2);
  }
  return (_DWORD)qword_140D1B160 != HIDWORD(qword_140D1B160);
}
