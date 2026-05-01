/*
 * XREFs of ?Release@CCortanaShownEventArgs@@UEAAKXZ @ 0x18002D900
 * Callers:
 *     sub_1801F2F90 @ 0x1801F2F90 (sub_1801F2F90.c)
 *     ?Release@CCortanaShownEventArgs@@W7EAAKXZ @ 0x1801F5C50 (-Release@CCortanaShownEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCortanaShownEventArgs::Release(CCortanaShownEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(this);
}
