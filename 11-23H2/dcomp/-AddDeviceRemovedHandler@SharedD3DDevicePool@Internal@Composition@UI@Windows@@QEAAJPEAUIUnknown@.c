/*
 * XREFs of ?AddDeviceRemovedHandler@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800A54F0
 * Callers:
 *     ?add_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800A2BC0 (-add_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAU-$IEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800A4194 (--$CreateAgileHelper@U-$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@U.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800A5590 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::AddDeviceRemovedHandler(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  __int64 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  if ( a3 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v9);
    v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>>(
           a3,
           &v9);
    if ( v7 >= 0 )
    {
      if ( v9 )
        v7 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               a2 + 32,
               v9,
               *(_QWORD *)(*(_QWORD *)a3 + 24LL),
               a4);
      else
        v7 = -2147024809;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
