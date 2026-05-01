/*
 * XREFs of ?Release@CVisibilityChangedEventArgs@@UEAAKXZ @ 0x180035D10
 * Callers:
 *     ?Release@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x1801F21B0 (-Release@CVisibilityChangedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CVisibilityChangedEventArgs@@WBA@EAAKXZ @ 0x1801F21D0 (-Release@CVisibilityChangedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CVisibilityChangedEventArgs::Release(CVisibilityChangedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
