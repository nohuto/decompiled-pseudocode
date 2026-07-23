/*
 * XREFs of sub_140B1B2C0 @ 0x140B1B2C0
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_140B1B59C @ 0x140B1B59C (sub_140B1B59C.c)
 *     sub_140B50C78 @ 0x140B50C78 (sub_140B50C78.c)
 */

__int64 __fastcall sub_140B1B2C0(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( dword_140C2BD68 )
    sub_140B50C78();
  v2 = 1024LL;
  LODWORD(xmmword_140E018F0) = 0;
  qword_140C2BD28 = (__int64)&qword_140C2BD20;
  qword_140C2BD20 = (__int64)&qword_140C2BD20;
  qword_140C2B818 = (__int64)&qword_140C2B810;
  qword_140C2B810 = &qword_140C2B810;
  qword_140C2B808 = (__int64)&qword_140C2B800;
  qword_140C2B800 = (__int64)&qword_140C2B800;
  qword_140C2B828 = (__int64)&qword_140C2B820;
  qword_140C2B820 = (__int64)&qword_140C2B820;
  qword_140C2BB88 = (__int64)&qword_140C2BB80;
  qword_140C2BB80 = (__int64)&qword_140C2BB80;
  qword_140C2BB98 = (__int64)&qword_140C2BB90;
  qword_140C2BB90 = (__int64)&qword_140C2BB90;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  *(_QWORD *)&xmmword_140E018C0 = qword_1400C9460;
  LODWORD(xmmword_140E018D0) = 482;
  *((_QWORD *)&xmmword_140E018D0 + 1) = &dword_1400C9BEC;
  qword_140C2BCD8 = (__int64)sub_1402470D0;
  qword_140C2BCE0 = (__int64)&word_140C2BC20;
  qword_140C2BC30 = (__int64)&qword_140C2BC28;
  qword_140C2BC28 = (__int64)&qword_140C2BC28;
  stru_140C2BC40.Header.WaitListHead.Blink = &stru_140C2BC40.Header.WaitListHead;
  stru_140C2BC40.Header.WaitListHead.Flink = &stru_140C2BC40.Header.WaitListHead;
  v3 = &unk_140CE5A00;
  qword_140C2BD10 = 0LL;
  LOWORD(Event.Header.Lock) = 1;
  Event.Header.Size = 6;
  Event.Header.SignalState = 0;
  qword_140C2BBB8 = 0LL;
  qword_140C2BB68 = 0LL;
  qword_140C2BB70 = 0LL;
  xmmword_140D06F80[0] = xmmword_140E018C0;
  xmmword_140D06F90 = xmmword_140E018D0;
  xmmword_140D06FA0 = xmmword_140E018E0;
  xmmword_140D06FB0 = xmmword_140E018F0;
  xmmword_140D07100[0] = xmmword_140E018C0;
  xmmword_140D07110 = xmmword_140E018D0;
  xmmword_140D07120 = xmmword_140E018E0;
  xmmword_140D07130 = xmmword_140E018F0;
  LODWORD(dword_140C2BCC0) = 275;
  qword_140C2BCF8 = 0LL;
  qword_140C2BCD0 = 0LL;
  word_140C2BC20 = 1;
  byte_140C2BC22 = 6;
  dword_140C2BC24 = 0;
  LOWORD(stru_140C2BC40.Header.Lock) = 0;
  stru_140C2BC40.Header.Size = 6;
  stru_140C2BC40.Header.SignalState = 0;
  do
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3 += 8;
    --v2;
  }
  while ( v2 );
  stru_140C2B9A0.Count = 1;
  stru_140C2B9A0.Event.Header.WaitListHead.Blink = &stru_140C2B9A0.Event.Header.WaitListHead;
  stru_140C2B9A0.Event.Header.WaitListHead.Flink = &stru_140C2B9A0.Event.Header.WaitListHead;
  qword_140C2BBD8 = (__int64)sub_14045B6F0;
  qword_140C2BC08 = (__int64)&qword_140C2BC00;
  qword_140C2BC00 = (__int64)&qword_140C2BC00;
  stru_140C2B9A0.Owner = 0LL;
  stru_140C2B9A0.Contention = 0;
  LOWORD(stru_140C2B9A0.Event.Header.Lock) = 1;
  stru_140C2B9A0.Event.Header.Size = 6;
  stru_140C2B9A0.Event.Header.SignalState = 0;
  LODWORD(unk_140C2BBC0) = 531;
  qword_140C2BBE0 = 0LL;
  qword_140C2BBF8 = 0LL;
  qword_140C2BBD0 = 0LL;
  return sub_140B1B59C(a1);
}
