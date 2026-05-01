/*
 * XREFs of ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1805B858C
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x1805BDDA0 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

CAutoAppTransitionRequest *__fastcall CAutoAppTransitionRequest::CAutoAppTransitionRequest(
        CAutoAppTransitionRequest *this,
        struct IAppTransitionManager *a2)
{
  *(_QWORD *)this = &CAutoAppTransitionRequest::`vftable';
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAppTransitionManager *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 16) = 0;
  return this;
}
