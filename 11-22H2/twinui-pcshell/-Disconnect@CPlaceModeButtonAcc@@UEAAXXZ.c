/*
 * XREFs of ?Disconnect@CPlaceModeButtonAcc@@UEAAXXZ @ 0x1805F5EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPlaceModeButtonAcc::Disconnect(CPlaceModeButtonAcc *this)
{
  *((_BYTE *)this + 16) = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
}
