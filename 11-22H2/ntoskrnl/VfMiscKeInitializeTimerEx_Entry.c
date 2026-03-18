/*
 * XREFs of VfMiscKeInitializeTimerEx_Entry @ 0x140AE0EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckForTimer @ 0x140570B8C (KeCheckForTimer.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE2700 (ViMiscValidateSynchronizationObject.c)
 */

ULONG __fastcall VfMiscKeInitializeTimerEx_Entry(__int64 a1)
{
  ULONG result; // eax

  result = ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 16));
  if ( (VfRuleClasses & 0x400000) == 0 )
    return KeCheckForTimer(*(_QWORD *)(a1 + 16), 64LL);
  return result;
}
