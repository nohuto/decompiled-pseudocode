/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DDevice@Internal@Composition@UI@Windows@@UISharedD3DDeviceInterop@6789@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A1254
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800A12E0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIInteractionTrackerReque.c)
 *     ??1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ @ 0x1800A275C (--1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ.c)
 *     ??_EInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800B6C20 (--_EInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180136840 (--_EInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)(a1 + 32));
}
