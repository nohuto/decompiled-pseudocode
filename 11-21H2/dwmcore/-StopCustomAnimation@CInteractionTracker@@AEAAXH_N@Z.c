/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18021E010
 * Callers:
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x18021A3AC (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18021B850 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021CF40 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021E0BC (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021E190 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18021A120 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802212B4 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, unsigned int a2, char a3)
{
  __int64 v5; // rdi
  struct CResource *v6; // rdi

  if ( a2 < 2 )
  {
    v5 = *((_QWORD *)this + (int)a2 + 44);
    if ( v5 )
    {
      v6 = *(struct CResource **)(v5 + 16);
      if ( v6 )
      {
        if ( *((_QWORD *)this + 80) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 90LL) )
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(*((_QWORD *)this + 80), this, v6, a2);
        }
        *((_BYTE *)v6 + 216) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v6);
      }
      CInteractionTracker::ClearCustomAnimation(this, a2);
    }
  }
}
