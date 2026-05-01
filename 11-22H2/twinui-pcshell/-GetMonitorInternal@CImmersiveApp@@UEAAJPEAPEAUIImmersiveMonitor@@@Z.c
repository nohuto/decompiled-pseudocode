/*
 * XREFs of ?GetMonitorInternal@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18003F460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetMonitorInternal(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  struct IImmersiveMonitor **v4; // rbx
  __int64 v5; // rcx
  struct IImmersiveMonitor *v6; // rax

  v4 = (struct IImmersiveMonitor **)((char *)this + 664);
  if ( *((_QWORD *)this + 83) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 83);
    v6 = *v4;
  }
  else
  {
    v5 = *((_QWORD *)this + 82);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (struct IImmersiveMonitor *)*((_QWORD *)this + 82);
  }
  *a2 = v6;
  return 0LL;
}
