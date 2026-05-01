/*
 * XREFs of ?GetMonitorInternal@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180130670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetMonitorInternal(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  struct IImmersiveMonitor **v4; // rbx
  struct IImmersiveMonitor *v5; // rcx

  v4 = (struct IImmersiveMonitor **)((char *)this + 664);
  if ( *((_QWORD *)this + 83) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 83);
    v5 = *v4;
  }
  else
  {
    v5 = (struct IImmersiveMonitor *)*((_QWORD *)this + 82);
    if ( v5 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v5 + 8LL))(v5);
      v5 = (struct IImmersiveMonitor *)*((_QWORD *)this + 82);
    }
  }
  *a2 = v5;
  return 0LL;
}
