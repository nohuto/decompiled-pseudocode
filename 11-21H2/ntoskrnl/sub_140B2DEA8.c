/*
 * XREFs of sub_140B2DEA8 @ 0x140B2DEA8
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B2DEA8()
{
  int v0; // eax
  int ObjectType; // ebx
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+67h] BYREF

  v0 = dword_140C0C870;
  ThreadHandle = 0LL;
  if ( dword_140C0C870 )
  {
    if ( (unsigned int)dword_140C0C870 > 0x258 )
    {
      v0 = 600;
      dword_140C0C870 = 600;
    }
  }
  else
  {
    v0 = 1;
    dword_140C0C870 = 1;
  }
  if ( dword_140C0C65C )
  {
    if ( (unsigned int)dword_140C0C65C > 0x258 )
      dword_140C0C65C = 600;
  }
  else
  {
    dword_140C0C65C = 1;
  }
  qword_140C11450 = -1200000LL;
  qword_140C11448 = -10000000LL * v0;
  stru_140C11458.QuadPart = -300000LL;
  if ( ((unsigned __int8)&stru_140CF5F40 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140CF5F40 = 0LL;
  KeInitializeQueue(&Queue, 0);
  *(_QWORD *)&stru_140C11380.Header.Lock = 9LL;
  stru_140C11380.Header.WaitListHead.Blink = &stru_140C11380.Header.WaitListHead;
  stru_140C11380.Header.WaitListHead.Flink = &stru_140C11380.Header.WaitListHead;
  stru_140C11380.DueTime.QuadPart = 0LL;
  stru_140C11380.Period = 0;
  LOWORD(stru_140C11380.Processor) = 0;
  sub_1402F0D90((__int64)&stru_140C11380, (__int64)&Queue, (__int64)&unk_140C113C0);
  dword_140C11440 = 0;
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  v3[8] = sub_14074F4B0;
  LODWORD(v3[1]) = 256;
  v3[9] = sub_1402D53C0;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 672;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57900;
  HIDWORD(v3[3]) = 983295;
  ObjectType = ObCreateObjectType((const UNICODE_STRING *)&qword_140B57910, (__int64)v3, 0LL, (__int64)&qword_140D051A0);
  if ( ObjectType >= 0 )
  {
    ObjectType = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)sub_1403C6970, 0LL);
    if ( ObjectType >= 0 )
      ZwClose(ThreadHandle);
  }
  return (unsigned int)ObjectType;
}
