/*
 * XREFs of ?get_Window@CImmersiveApp@@UEAAJPEAI@Z @ 0x1803C5DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::get_Window(CImmersiveApp *this, unsigned int *a2)
{
  __int64 (__fastcall *v4)(char *, __int64 *); // rbx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 496LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  v5 = v4((char *)this - 8, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, &v8);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = v8;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return (unsigned int)v5;
}
