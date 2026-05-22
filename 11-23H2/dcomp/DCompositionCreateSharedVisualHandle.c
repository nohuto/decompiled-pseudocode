/*
 * XREFs of DCompositionCreateSharedVisualHandle @ 0x180023FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionCreateSharedVisualHandle(__int64 a1)
{
  int SharedResourceHandle; // eax

  SharedResourceHandle = NtDCompositionCreateSharedResourceHandle(196LL, a1);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(SharedResourceHandle);
}
