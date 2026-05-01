/*
 * XREFs of ?QueryInterface@CCortanaShownEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802967B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCortanaShownEventArgs::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::QueryInterface(a1 - 8);
}
