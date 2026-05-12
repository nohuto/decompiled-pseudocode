/*
 * XREFs of RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x1C0035FB0
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeExtraIoResourceForAdapter @ 0x1C00590AC (StorFreeExtraIoResourceForAdapter.c)
 *     StorGetOutstandingIoCount @ 0x1C0059304 (StorGetOutstandingIoCount.c)
 */

void __fastcall RaidAdapterReclaimIoResourceTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  _DWORD *v7; // rax
  unsigned int v8; // ecx

  v4 = DeferredContext[8];
  v5 = *(_DWORD *)(v4 + 840);
  if ( v5 > 1 )
  {
    v6 = v5;
    v7 = (_DWORD *)(*(_QWORD *)(v4 + 832) + 136LL);
    v8 = 0;
    do
    {
      v8 += *v7;
      v7 += 80;
      --v6;
    }
    while ( v6 );
    if ( v8 > *(_DWORD *)(v4 + 548) && !(unsigned int)StorGetOutstandingIoCount(v4, 0LL, SystemArgument1) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 852)) != 2 )
        return;
      StorFreeExtraIoResourceForAdapter(v4);
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 852), 0);
  }
}
