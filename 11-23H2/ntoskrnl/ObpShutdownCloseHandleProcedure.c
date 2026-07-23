/*
 * XREFs of ObpShutdownCloseHandleProcedure @ 0x14097B440
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     DbgPrint @ 0x14032A980 (DbgPrint.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 */

char __fastcall ObpShutdownCloseHandleProcedure(__int64 a1, __int64 *a2, int a3, _DWORD *a4)
{
  unsigned __int64 HandlePointer; // r14
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  DbgPrint("\tFound object %p(handle %08lx)\n", (const void *)(HandlePointer + 48), a3);
  ++*a4;
  return 0;
}
