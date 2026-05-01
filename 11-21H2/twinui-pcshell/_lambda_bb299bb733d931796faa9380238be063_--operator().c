/*
 * XREFs of _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x1802E0B28
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x1802E1040 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003AC08 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1802DD5E8 (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x1802DD9D8 (CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bb299bb733d931796faa9380238be063_::operator()(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HWND *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
    &v8);
  ForegroundWindow = GetForegroundWindow();
  v3 = (HWND *)(a1 + 8);
  if ( !ForegroundWindow
    || ForegroundWindow == *v3
    && ForegroundWindow == *(HWND *)(a1 + 16)
    && *(HWND *)(*(_QWORD *)a1 + 768LL) != *v3
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 416LL))(v8) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
    CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(v4, &v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    IamTraceLogging::PendingActivation<HWND__ * const &>((HWND *)(a1 + 8), v5);
  }
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
}
