/*
 * XREFs of ?Release@CViewPositionChangedEventArgs@@UEAAKXZ @ 0x180035940
 * Callers:
 *     ?Release@CViewPositionChangedEventArgs@@W7EAAKXZ @ 0x1801F2A50 (-Release@CViewPositionChangedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CViewPositionChangedEventArgs@@WBA@EAAKXZ @ 0x1801F2A70 (-Release@CViewPositionChangedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CViewPositionChangedEventArgs::Release(CViewPositionChangedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
