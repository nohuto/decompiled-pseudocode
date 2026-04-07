/*
 * XREFs of ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180041C18
 * Callers:
 *     ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180013760 (-ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ.c)
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x180018750 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180023EB0 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003E734 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x18004ACE8 (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004AED8 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x18004B5EC (-CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@C.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$2 @ 0x180067322 (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$2.c)
 *     _CTopLevelWindow::UpdateCaptionAccentColor_::_1_::dtor$0 @ 0x1800675B0 (_CTopLevelWindow--UpdateCaptionAccentColor_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$0 @ 0x180067E0E (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$0.c)
 *     _CWindowBackgroundTreatmentVisual::ValidateVisual_::_1_::dtor$0 @ 0x180067E20 (_CWindowBackgroundTreatmentVisual--ValidateVisual_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$0 @ 0x18006835A (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$1 @ 0x18006836C (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$1.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$2 @ 0x18006837E (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$2.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800AE86C (--1CCompositor@@MEAA@XZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C1AA8 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C1B98 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     _CGraphicsDeviceManager::ReleaseGraphicsDevice_::_1_::dtor$0 @ 0x1800C1CD7 (_CGraphicsDeviceManager--ReleaseGraphicsDevice_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
