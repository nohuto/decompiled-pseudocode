/*
 * XREFs of ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801916B0
 * Callers:
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801914F0 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ @ 0x18019167C (--1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180191708 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1804B0EBC (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        __int64 a1)
{
  *(_BYTE *)(a1 + 64) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 60), 0xFFFFFFFF) > 1 )
    wil::slim_event_t<1>::wait((volatile void *)(a1 + 56));
  wil::operation_guard::~operation_guard((wil::operation_guard *)(a1 + 56));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 48));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 40));
  return Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)a1);
}
