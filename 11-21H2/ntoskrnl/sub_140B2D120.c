/*
 * XREFs of sub_140B2D120 @ 0x140B2D120
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     sub_1403B5088 @ 0x1403B5088 (sub_1403B5088.c)
 */

NTSTATUS sub_140B2D120()
{
  NTSTATUS result; // eax
  int v1; // ebx

  byte_140C1FB3C = 1;
  qword_140C1FB58 = (__int64)&qword_140C1FB50;
  qword_140C1FB50 = (__int64)&qword_140C1FB50;
  qword_140C22768 = (__int64)&qword_140C22760;
  qword_140C22760 = (__int64)&qword_140C22760;
  qword_140C22790 = (__int64)&qword_140C22788;
  qword_140C22788 = (__int64)&qword_140C22788;
  stru_140C1FAE0.Header.WaitListHead.Blink = &stru_140C1FAE0.Header.WaitListHead;
  stru_140C1FAE0.Header.WaitListHead.Flink = &stru_140C1FAE0.Header.WaitListHead;
  stru_140C1FB00.Event.Header.WaitListHead.Blink = &stru_140C1FB00.Event.Header.WaitListHead;
  stru_140C1FB00.Event.Header.WaitListHead.Flink = &stru_140C1FB00.Event.Header.WaitListHead;
  dword_140C1FAC4 = 0;
  dword_140C1FB38 = 0;
  dword_140C1FB40 = 0;
  byte_140C1FB3D = 0;
  byte_140C22780 = 5;
  byte_140C22782 = 8;
  dword_140C22784 = 0;
  dword_140C22798 = 0x7FFFFFFF;
  LOWORD(stru_140C1FAE0.Header.Lock) = 1;
  stru_140C1FAE0.Header.Size = 6;
  stru_140C1FAE0.Header.SignalState = 0;
  stru_140C1FB00.Count = 1;
  stru_140C1FB00.Owner = 0LL;
  stru_140C1FB00.Contention = 0;
  LOWORD(stru_140C1FB00.Event.Header.Lock) = 1;
  stru_140C1FB00.Event.Header.Size = 6;
  stru_140C1FB00.Event.Header.SignalState = 0;
  sub_140250C50((__int64)&unk_140CF7340, 0LL, 0LL, 512, 8, 1917415248, 0, 0);
  result = sub_1403B5088((KSTART_ROUTINE *)sub_1403DEE60, 0LL);
  if ( result >= 0 )
  {
    dword_140C1FB40 = 2;
    v1 = 0;
    while ( 1 )
    {
      result = sub_1403B5088((KSTART_ROUTINE *)sub_1403B1270, 0LL);
      if ( result < 0 )
        break;
      if ( (unsigned int)++v1 >= 2 )
        return 0;
    }
  }
  return result;
}
