/*
 * XREFs of CmpLazyFlushDpcRoutine @ 0x140365F90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F3408 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine5 @ 0x14042BCA0 (KiCustomAccessRoutine5.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall CmpLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _WORD v8[47]; // [rsp+120h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v8[43] = SystemArgument1;
    *(_QWORD *)&v8[23] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v8[19] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine5(DeferredContext);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 152));
  if ( CmpHoldLazyFlush )
    *(_QWORD *)(DeferredContext + 168) = 0LL;
  else
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  KxReleaseSpinLock((volatile signed __int64 *)(DeferredContext + 152));
}
