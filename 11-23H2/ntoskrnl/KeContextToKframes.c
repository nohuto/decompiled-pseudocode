/*
 * XREFs of KeContextToKframes @ 0x14041EF10
 * Callers:
 *     KiRestoreProcessorState @ 0x14020E950 (KiRestoreProcessorState.c)
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     KiContinueEx @ 0x14030D1A0 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x14030D474 (KiContinuePreviousModeUser.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KyRaiseException @ 0x140578FE0 (KyRaiseException.c)
 * Callees:
 *     KxContextToKframes @ 0x14033FAD0 (KxContextToKframes.c)
 */

char __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char result; // al
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0;
    __writecr8(0LL);
  }
  return result;
}
