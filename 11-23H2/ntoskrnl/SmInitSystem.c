/*
 * XREFs of SmInitSystem @ 0x140B4D6E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     SmpSystemStoreCreate @ 0x14085BEC0 (SmpSystemStoreCreate.c)
 *     SmGlobalsStart @ 0x140B4D7D4 (SmGlobalsStart.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *((_QWORD *)PspSystemPartition + 3);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140C6B320) >= 0 )
      {
        dword_140C6B328 |= 1u;
        dword_140C6B32C = 64;
      }
    }
    else if ( a1 == 2 && (*(_DWORD *)(v2 + 2064) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3));
    }
    goto LABEL_6;
  }
  memset(&SmGlobals, 0, 0x50uLL);
  qword_140C6B318 = 0LL;
  qword_140C6B310 = (__int64)&qword_140C6B308;
  qword_140C6B308 = (__int64)&qword_140C6B308;
  SmKmGlobals = PsInitialSystemProcess;
  dword_140C6B344 = 4;
  result = SmGlobalsStart(&SmGlobals);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v2 + 2064) = SmGlobals;
LABEL_6:
    dword_140C6B340 = a1 + 1;
    return 0LL;
  }
  return result;
}
