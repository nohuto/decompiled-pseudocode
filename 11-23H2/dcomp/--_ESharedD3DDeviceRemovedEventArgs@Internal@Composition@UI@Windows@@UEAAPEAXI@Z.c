/*
 * XREFs of ??_ESharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800A5380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A4E80 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIEdgyDetect.c)
 */

Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *__fastcall Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::`vector deleting destructor'(
        Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
