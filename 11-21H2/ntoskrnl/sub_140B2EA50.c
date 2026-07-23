/*
 * XREFs of sub_140B2EA50 @ 0x140B2EA50
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

const WNF_STATE_NAME *sub_140B2EA50()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  const WNF_STATE_NAME *result; // rax

  v0 = &unk_140C223E0;
  v1 = 2LL;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  qword_140C22410 = 0LL;
  stru_140C237C0.Event.Header.WaitListHead.Blink = &stru_140C237C0.Event.Header.WaitListHead;
  stru_140C237C0.Event.Header.WaitListHead.Flink = &stru_140C237C0.Event.Header.WaitListHead;
  qword_140C22408 = (__int64)&qword_140C22400;
  qword_140C22400 = (__int64)&qword_140C22400;
  qword_140C22428 = (__int64)&qword_140C22420;
  qword_140C22420 = &qword_140C22420;
  result = &stru_1400133C0;
  qword_140C23800 = (__int64)&stru_1400133C0;
  stru_140C237C0.Count = 1;
  stru_140C237C0.Owner = 0LL;
  stru_140C237C0.Contention = 0;
  LOWORD(stru_140C237C0.Event.Header.Lock) = 1;
  stru_140C237C0.Event.Header.Size = 6;
  stru_140C237C0.Event.Header.SignalState = 0;
  xmmword_140C23808 = 0LL;
  qword_140C23818 = 0LL;
  return result;
}
