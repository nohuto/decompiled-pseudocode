/*
 * XREFs of sub_140B0E114 @ 0x140B0E114
 * Callers:
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     KeQueryTimeIncrement @ 0x1402F1D40 (KeQueryTimeIncrement.c)
 */

unsigned __int64 sub_140B0E114()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  sub_140261ADC((__int64)&stru_140C0E920, 0, 0, 0);
  stru_140C0E900.Header.Size = 6;
  LOWORD(stru_140C0E900.Header.Lock) = 0;
  stru_140C0E900.Header.SignalState = 0;
  stru_140C0E900.Header.WaitListHead.Blink = &stru_140C0E900.Header.WaitListHead;
  stru_140C0E900.Header.WaitListHead.Flink = &stru_140C0E900.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140D3B130 = v1 / 10000;
  qword_140D3B1E0 = v1 / 10000;
  return result;
}
