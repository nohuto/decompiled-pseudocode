/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A4E80
 * Callers:
 *     ??_ESharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800A5380 (--_ESharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E60 (--1EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)(a1 + 32));
}
