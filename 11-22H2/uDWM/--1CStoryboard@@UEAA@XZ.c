/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x1800161E0
 * Callers:
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180016190 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800D9908 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800D9A34 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800D9B10 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800D9C40 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017C7C (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 96);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((char *)this + 80);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
