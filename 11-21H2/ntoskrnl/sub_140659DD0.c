/*
 * XREFs of sub_140659DD0 @ 0x140659DD0
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     <none>
 */

__int64 sub_140659DD0()
{
  if ( qword_140D68190 )
  {
    _InterlockedExchange64(&qword_140D32A50, qword_140D68190 + 4);
    _InterlockedExchange64(&qword_140D32A58, qword_140D68190 + 2 * (*(unsigned __int16 *)(qword_140D68190 + 2) + 2LL));
    qword_140D32A48 = qword_140D68190;
  }
  return 0LL;
}
