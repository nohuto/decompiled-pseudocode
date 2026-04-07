/*
 * XREFs of ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?InitializeInteropCompositor@CCompositor@@AEAAJXZ @ 0x180052B14 (-InitializeInteropCompositor@CCompositor@@AEAAJXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180056214 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$0 @ 0x1800655B8 (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$1 @ 0x1800655CA (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$1.c)
 *     _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$2 @ 0x1800655DC (_CGraphicsDeviceManager--CheckDXGIAdapter_--_1_--dtor$2.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$0 @ 0x18006605E (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$0.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$1 @ 0x180066070 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$1.c)
 *     _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$2 @ 0x180066082 (_CGraphicsDeviceManager--InitializeGraphicsDevice_--_1_--dtor$2.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800A9804 (--1CCompositor@@MEAA@XZ.c)
 *     ??1CDDisplayManager@@EEAA@XZ @ 0x1800AECBC (--1CDDisplayManager@@EEAA@XZ.c)
 *     ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x1800AEE68 (-Initialize@CDDisplayManager@@AEAAJXZ.c)
 *     _CDDisplayManager::Initialize_::_1_::dtor$0 @ 0x1800AF0B1 (_CDDisplayManager--Initialize_--_1_--dtor$0.c)
 *     _CDDisplayManager::Initialize_::_1_::dtor$1 @ 0x1800AF0BD (_CDDisplayManager--Initialize_--_1_--dtor$1.c)
 *     _CDDisplayManager::Initialize_::_1_::dtor$2 @ 0x1800AF0C9 (_CDDisplayManager--Initialize_--_1_--dtor$2.c)
 *     _CDDisplayManager::Initialize_::_1_::dtor$3 @ 0x1800AF0D5 (_CDDisplayManager--Initialize_--_1_--dtor$3.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x1800AF0E8 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$0 @ 0x1800AF5AE (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$0.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$1 @ 0x1800AF5BA (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$1.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$3 @ 0x1800AF5D2 (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$3.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$4 @ 0x1800AF5DE (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$4.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$5 @ 0x1800AF5EA (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$5.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$6 @ 0x1800AF5F6 (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$6.c)
 *     _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$7 @ 0x1800AF602 (_CDDisplayManager--MakeSourceHandleForTarget_--_1_--dtor$7.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800BD774 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800BD858 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     _CGraphicsDeviceManager::ReleaseGraphicsDevice_::_1_::dtor$0 @ 0x1800BD98D (_CGraphicsDeviceManager--ReleaseGraphicsDevice_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
