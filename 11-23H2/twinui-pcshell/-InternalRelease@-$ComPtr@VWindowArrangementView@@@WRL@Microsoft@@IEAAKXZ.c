/*
 * XREFs of ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D2EF4
 * Callers:
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x1805D00B0 (CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x1805D0150 (CDCompBatchAnimationCallback_CreateInstance__lambda_d996df4ae651642ba189a9f5cbef4ddb___.c)
 *     ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x1805D0A6C (--1-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x1805D0A78 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_CDCompBatchAnimationC.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x1805D0AA8 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CDCompBatchAnimationC.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::_scalar_deleting_destructor_ @ 0x1805D0EF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--_scala.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1805D14F0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1805D2410 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x1805D3BEC (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1805D3D68 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D4060 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D43BC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1805D4E14 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805D5D78 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1805D60F0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIWindowArrangementView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@UIDragVisualHost@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1805D3B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1805D3B80.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IWindowArrangementView,ITabletModeInputCallback,IApplicationViewChangeListener,IDragVisualHost,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v1);
  }
  return result;
}
