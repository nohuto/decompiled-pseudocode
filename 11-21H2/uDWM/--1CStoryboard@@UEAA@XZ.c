/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x1800D499C
 * Callers:
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800D4870 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800D49D0 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800D4AB0 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800D4BE0 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x1800D4CA0 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 12);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)this + 10);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
