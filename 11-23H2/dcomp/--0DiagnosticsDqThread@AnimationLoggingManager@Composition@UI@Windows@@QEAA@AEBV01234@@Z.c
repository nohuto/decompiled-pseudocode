/*
 * XREFs of ??0DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@QEAA@AEBV01234@@Z @ 0x18016A7FC
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016B2B0 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ @ 0x18016C9B0 (-InternalAddRef@-$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ.c)
 */

Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *__fastcall Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::DiagnosticsDqThread(
        Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *this,
        const struct Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *a2)
{
  __int64 v4; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rax

  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 1);
  v4 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 2) = v4;
  if ( v4 )
  {
    v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v5);
  }
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  Microsoft::WRL::ComPtr<CompObjectDiagnosticsPrincipal>::InternalAddRef();
  return this;
}
