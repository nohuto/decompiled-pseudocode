/*
 * XREFs of sub_140B30D14 @ 0x140B30D14
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B30D14()
{
  __int64 result; // rax

  LOWORD(stru_140C15820.Header.Lock) = 1;
  dword_140C157D8 = 0;
  qword_140C157F8 = (__int64)&qword_140C157F0;
  qword_140C157F0 = (__int64)&qword_140C157F0;
  stru_140C15820.Header.WaitListHead.Blink = &stru_140C15820.Header.WaitListHead;
  stru_140C15820.Header.WaitListHead.Flink = &stru_140C15820.Header.WaitListHead;
  stru_140C15840.Header.WaitListHead.Blink = &stru_140C15840.Header.WaitListHead;
  stru_140C15840.Header.WaitListHead.Flink = &stru_140C15840.Header.WaitListHead;
  result = 0LL;
  qword_140C157E0 = 0LL;
  qword_140C15800 = 0LL;
  stru_140C15820.Header.Size = 6;
  stru_140C15820.Header.SignalState = 0;
  LOWORD(stru_140C15840.Header.Lock) = 1;
  stru_140C15840.Header.Size = 6;
  stru_140C15840.Header.SignalState = 1;
  return result;
}
