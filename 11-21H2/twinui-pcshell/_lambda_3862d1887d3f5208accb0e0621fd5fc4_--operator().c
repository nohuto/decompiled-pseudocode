/*
 * XREFs of _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x180311510
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180313640 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(v3 + 776);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v3 + 776));
  v5 = *a1;
  v8 = 0LL;
  v7 = *v5;
  *v5 = v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
}
