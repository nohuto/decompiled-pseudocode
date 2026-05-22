/*
 * XREFs of ?DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x1800FF9B0
 * Callers:
 *     DCompositionCreateDwmDevice @ 0x1800FF660 (DCompositionCreateDwmDevice.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDwmChannel@CDevice@DirectComposition@@QEAAPEAUIDwmChannel@@XZ @ 0x1800F1E74 (-GetDwmChannel@CDevice@DirectComposition@@QEAAPEAUIDwmChannel@@XZ.c)
 *     ?CreateDwmChannel@CDevice@DirectComposition@@QEAAJPEAUIDwmChannelProvider@@@Z @ 0x1800FF8B8 (-CreateDwmChannel@CDevice@DirectComposition@@QEAAJPEAUIDwmChannelProvider@@@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::DCompositionCreateDwmDevice(
        const struct _GUID *a1,
        void **a2,
        struct IDwmChannel **a3)
{
  int DwmChannel; // edi
  DirectComposition::CDevice *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  struct IDwmChannel *v11; // rbx
  DirectComposition::CDevice *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( a2 && a3 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    DwmChannel = DirectComposition::CDevice::Create(0LL, 3u, 0LL, (unsigned int **)&v13);
    if ( DwmChannel >= 0 )
    {
      v7 = v13;
      DwmChannel = DirectComposition::CDevice::CreateDwmChannel(
                     v13,
                     (struct IDwmChannelProvider *)(((unsigned __int64)v13 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)));
      if ( DwmChannel >= 0 )
      {
        DwmChannel = (**(__int64 (__fastcall ***)(DirectComposition::CDevice *, const struct _GUID *, void **))v7)(
                       v7,
                       a1,
                       a2);
        if ( DwmChannel >= 0 )
        {
          v11 = DirectComposition::CDevice::GetDwmChannel(v7, v8, v9, v10);
          (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v11 + 8LL))(v11);
          *a3 = v11;
        }
      }
    }
  }
  else
  {
    DwmChannel = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)DwmChannel;
}
