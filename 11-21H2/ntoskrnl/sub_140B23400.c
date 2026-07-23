/*
 * XREFs of sub_140B23400 @ 0x140B23400
 * Callers:
 *     sub_140B233CC @ 0x140B233CC (sub_140B233CC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_14084ED1C @ 0x14084ED1C (sub_14084ED1C.c)
 *     sub_14084F044 @ 0x14084F044 (sub_14084F044.c)
 */

void sub_140B23400()
{
  char *v0; // rax
  __int64 v1; // rbx
  _RTL_RUN_ONCE *v2; // rcx
  _RTL_RUN_ONCE *v3; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&v4.Length = 1572886LL;
  v4.Buffer = L"DebugObject";
  memset(v5, 0, 0x78uLL);
  stru_140C48CC0.Owner = 0LL;
  stru_140C48CC0.Contention = 0;
  stru_140C48CC0.Event.Header.SignalState = 0;
  stru_140C48CC0.Event.Header.WaitListHead.Blink = &stru_140C48CC0.Event.Header.WaitListHead;
  stru_140C48CC0.Event.Header.WaitListHead.Flink = &stru_140C48CC0.Event.Header.WaitListHead;
  stru_140C48CC0.Count = 1;
  LOWORD(stru_140C48CC0.Event.Header.Lock) = 1;
  stru_140C48CC0.Event.Header.Size = 6;
  v0 = sub_14084F044(0LL);
  if ( (int)sub_14084ED1C(v0) >= 0 )
  {
    v5[1] = 0x2000100000000LL;
    v5[5] = 0LL;
    v5[9] = FsRtlInitializeOplock;
    LOWORD(v5[0]) = 120;
    v5[8] = sub_1409276D0;
    v1 = 8LL;
    BYTE2(v5[0]) |= 8u;
    v5[3] = 0x1F000F001F000FLL;
    HIDWORD(v5[4]) = 512;
    v5[2] = 0x12000000020002LL;
    if ( (int)ObCreateObjectType(&v4, (__int64)v5, 0LL, (__int64)&qword_140D05120) >= 0 )
    {
      if ( !dword_140D05100 )
        dword_140D05100 = 500;
      v2 = &stru_140C5A870;
      do
      {
        RtlRunOnceInitialize(v2);
        v2 = v3 + 2;
        --v1;
      }
      while ( v1 );
    }
  }
}
