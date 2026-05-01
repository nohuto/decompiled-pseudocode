/*
 * XREFs of ?Release@CCortanaShownEventArgs@@UEAAKXZ @ 0x1800527A0
 * Callers:
 *     sub_180296AF0 @ 0x180296AF0 (sub_180296AF0.c)
 *     ?Release@CCortanaShownEventArgs@@W7EAAKXZ @ 0x180299470 (-Release@CCortanaShownEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCortanaShownEventArgs::Release(CCortanaShownEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(this);
}
