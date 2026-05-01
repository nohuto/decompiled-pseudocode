/*
 * XREFs of ?SetTempAppVisuals@CAppLayoutOperation@@UEAAXPEAUITemporaryAppVisualArray@@@Z @ 0x1805B67F0
 * Callers:
 *     ?SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z @ 0x1802A6BD0 (-SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppLayoutOperation::SetTempAppVisuals(CAppLayoutOperation *this, struct ITemporaryAppVisualArray *a2)
{
  __int64 v4; // rcx
  struct ITemporaryAppVisualArray *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITemporaryAppVisualArray **)this + 7) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v5);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
