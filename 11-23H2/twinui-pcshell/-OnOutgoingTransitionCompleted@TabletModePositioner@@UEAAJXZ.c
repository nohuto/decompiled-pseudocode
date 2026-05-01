/*
 * XREFs of ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x1805BDDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1805B858C (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1805B872C (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805C1FA4 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::OnOutgoingTransitionCompleted(struct IAppTransitionManager **this)
{
  unsigned int v2; // ebx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v3; // r9
  struct IAppTransitionManager *v4; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  ppvOut = 0LL;
  if ( this[16]
    && (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut),
        IUnknown_QueryService(
          (IUnknown *)*(this - 23),
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &ppvOut) >= 0) )
  {
    CAutoAppTransitionRequest::CAutoAppTransitionRequest((CAutoAppTransitionRequest *)v6, this[24]);
    CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
      (CAutoAppTransitionRequest *)v6,
      this[16],
      (struct IImmersiveMonitor *)ppvOut,
      v3);
    (*(void (__fastcall **)(struct IAppTransitionManager *))(*(_QWORD *)this[29] + 64LL))(this[29]);
    v4 = this[16];
    if ( v4 )
    {
      this[16] = 0LL;
      (*(void (__fastcall **)(struct IAppTransitionManager *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)v6);
  }
  else
  {
    v2 = -2147418113;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return v2;
}
