/*
 * XREFs of RaidAdapterCancelWaitWakeIrp @ 0x1C004892C
 * Callers:
 *     StorPortAdapterPoFxD0Completion @ 0x1C001E4E0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C004AAD0 (StorPortAdapterDirectedPowerUpCompletion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterCancelWaitWakeIrp(__int64 a1)
{
  __int64 v1; // rdx
  BOOLEAN result; // al
  IRP *v4; // rcx

  v1 = *(_QWORD *)(a1 + 4832);
  result = 1;
  if ( v1 )
  {
    v4 = *(IRP **)(v1 + 72);
    if ( v4 )
    {
      result = IoCancelIrp(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 4832) + 72LL) = 0LL;
    }
  }
  return result;
}
