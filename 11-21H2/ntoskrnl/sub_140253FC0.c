/*
 * XREFs of sub_140253FC0 @ 0x140253FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042BC10 @ 0x14042BC10 (sub_14042BC10.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140253FC0(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _WORD v8[47]; // [rsp+130h] [rbp-68h] BYREF

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
    sub_14042BC10(DeferredContext);
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(DeferredContext + 152));
  if ( dword_140C0B8C0 )
    *(_QWORD *)(DeferredContext + 168) = 0LL;
  else
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(DeferredContext + 152));
}
