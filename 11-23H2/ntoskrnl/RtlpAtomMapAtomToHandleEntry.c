/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x14073F848
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x14069EA50 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407150C0 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140717E10 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140717F70 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1407D0A90 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     ExGetHandlePointer @ 0x14022F740 (ExGetHandlePointer.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x140412160 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x14073FC10 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  volatile signed __int64 *v5; // rdi
  unsigned __int64 HandlePointer; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (__int64 *)ExMapHandleToPointer(*(_QWORD *)(a1 + 16), (unsigned int)(4 * a2));
  v5 = v4;
  if ( v4 )
  {
    HandlePointer = ExGetHandlePointer(v4);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = HandlePointer;
    _InterlockedExchangeAdd64(v5, 1uLL);
    _InterlockedOr(v10, 0);
    if ( *(_QWORD *)(v7 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  }
  else
  {
    v8 = 0LL;
  }
  KeLeaveCriticalRegion();
  return v8;
}
