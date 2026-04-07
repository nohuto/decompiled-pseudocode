/*
 * XREFs of ??1?$ComPtr@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerDisabledEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18009707C
 * Callers:
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$0 @ 0x180065F4C (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$0.c)
 *     _CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush_::_1_::dtor$0 @ 0x18006604C (_CAccentAcrylicBlurBehind--EnsureNoiseSurfaceBrush_--_1_--dtor$0.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$2 @ 0x18009D2D5 (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$2.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$3 @ 0x18009D2E1 (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$3.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$4 @ 0x18009D2ED (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$4.c)
 *     _CAnalogCompositorManager::InitializeDisplayManager_::_1_::dtor$5 @ 0x18009D2F9 (_CAnalogCompositorManager--InitializeDisplayManager_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
