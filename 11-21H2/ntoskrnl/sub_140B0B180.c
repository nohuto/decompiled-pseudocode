/*
 * XREFs of sub_140B0B180 @ 0x140B0B180
 * Callers:
 *     sub_140B0AA3C @ 0x140B0AA3C (sub_140B0AA3C.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1403C44EC @ 0x1403C44EC (sub_1403C44EC.c)
 *     sub_14082CDB4 @ 0x14082CDB4 (sub_14082CDB4.c)
 */

char sub_140B0B180()
{
  int v0; // ecx
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int128 v4; // [rsp+20h] [rbp-18h]

  qword_140C10E38 = -40000000LL;
  MEMORY[0xFFFFF780000002D6] = 10;
  stru_140C11680.Owner = 0LL;
  stru_140C11680.Contention = 0;
  stru_140C11680.Event.Header.SignalState = 0;
  qword_140C116D0 = 0LL;
  qword_140C116F0 = 0LL;
  qword_140C11758 = (__int64)&qword_140C11750;
  qword_140C11750 = (__int64)&qword_140C11750;
  stru_140C11680.Event.Header.WaitListHead.Blink = &stru_140C11680.Event.Header.WaitListHead;
  stru_140C11680.Event.Header.WaitListHead.Flink = &stru_140C11680.Event.Header.WaitListHead;
  qword_140C116E8 = (__int64)&qword_140C116E0;
  qword_140C116E0 = (__int64)&qword_140C116E0;
  qword_140C11708 = (__int64)&qword_140C11700;
  qword_140C11700 = (__int64)&qword_140C11700;
  qword_140C15BD8 = (__int64)&qword_140C15BD0;
  qword_140C15BD0 = (__int64)&qword_140C15BD0;
  stru_140C11680.Count = 1;
  LOWORD(stru_140C11680.Event.Header.Lock) = 1;
  stru_140C11680.Event.Header.Size = 6;
  ExInitializeResourceLite(&stru_140C15BE0);
  v0 = *(_DWORD *)(qword_140D068D0 + 264);
  qword_140D3B228 = 0LL;
  byte_140C15C48 = (v0 & 4) != 0;
  if ( dword_140D68164 == 7 )
    MEMORY[0xFFFFF780000002D0] = sub_14082CDB4((__int64)qword_140D689E0, byte_140D686C0);
  v1 = (unsigned __int64)(unsigned int)sub_140363220(1) << 32;
  qword_140C5AE40 = v1 | (unsigned int)sub_140363220(1);
  sub_1403C44EC();
  v4 = 0LL;
  LOBYTE(v4) = 2;
  v2 = *(_QWORD *)(qword_140D068D0 + 240);
  xmmword_140C1BC00 = v4;
  if ( *(_QWORD *)(v2 + 3760) )
    qword_140C0DA70 = *(_QWORD *)(v2 + 3760);
  return 1;
}
