/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021E190
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021CF40 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802194C8 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18021A558 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18021C594 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18021E010 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(
        CInteractionTracker *a1,
        struct CResource *a2,
        unsigned int a3)
{
  __int64 v3; // r14
  char v4; // bl
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = (int)a3;
  v4 = 0;
  if ( a3 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v7 = *((_DWORD *)a1 + 44);
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *((_BYTE *)a2 + 216) &= ~1u;
        return v4;
      }
      CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    }
    else
    {
      CInteractionTracker::DestroyInteractionAnimations(a1);
      CInteractionTracker::DestroyDefaultAnimations(a1, 0);
    }
  }
  CInteractionTracker::BoostCompositorClock(a1, 1);
  v16 = 0LL;
  v9 = CWeakResourceReference::Get(a2, &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x94u);
    if ( v16 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v16 + 8LL))(v16);
    ModuleFailFastForHRESULT(v11, retaddr);
  }
  *((_QWORD *)a1 + v3 + 44) = v16;
  v12 = CResource::RegisterNotifier(a1, a2);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
  CInteractionTracker::SetState((__int64)a1, 3, 0);
  v13 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
          (__int64)a1,
          (__int64)a2,
          (unsigned int)((_DWORD)v3 != 0) + 1);
  if ( v13 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
  return 1;
}
