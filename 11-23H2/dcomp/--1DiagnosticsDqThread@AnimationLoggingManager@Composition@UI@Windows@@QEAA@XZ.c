/*
 * XREFs of ??1DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@QEAA@XZ @ 0x1800957EC
 * Callers:
 *     _Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::Get_::_2_::_dynamic_atexit_destructor_for____dqThread__ @ 0x1800B2280 (_Windows--UI--Composition--AnimationLoggingManager--DiagnosticsDqThread--Get_--_2_--_dynamic_ate.c)
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDiagCallbackClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18016C9E0 (-InternalRelease@-$ComPtr@VDiagCallbackClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::~DiagnosticsDqThread(
        Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<DiagCallbackClientConnection>::InternalRelease((char *)this + 16);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this);
}
