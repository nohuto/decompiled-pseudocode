/*
 * XREFs of ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180509AE4
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x180505810 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
        CAutoAppTransitionRequest *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 16) )
    return 2147500037LL;
  result = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutOperation *, struct IImmersiveMonitor *, _QWORD))(**((_QWORD **)this + 1) + 32LL))(
             *((_QWORD *)this + 1),
             a2,
             a3,
             0LL);
  *((_BYTE *)this + 16) = (int)result >= 0;
  return result;
}
