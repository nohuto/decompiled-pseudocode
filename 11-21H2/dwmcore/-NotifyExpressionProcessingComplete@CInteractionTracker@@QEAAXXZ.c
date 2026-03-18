/*
 * XREFs of ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18021B724
 * Callers:
 *     ?NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ @ 0x180050824 (-NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180219E28 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18021A7F4 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18021A884 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18021A914 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18021A950 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18026644C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::NotifyExpressionProcessingComplete(CInteractionTracker *this)
{
  bool v1; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  CChainingHelper *ActiveChainingHelper; // rax

  v1 = 1;
  if ( (*((_BYTE *)this + 541) & 1) == 0 )
    v1 = *((_QWORD *)this + 80) == 0LL;
  if ( !*((_DWORD *)this + 44) )
  {
    if ( v1 )
      goto LABEL_8;
LABEL_7:
    if ( (*((_BYTE *)this + 541) & 8) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !v1 )
    goto LABEL_7;
  CInteractionTracker::CheckForIdle(this);
LABEL_8:
  CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, 7);
  CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax((__int64)this, 7);
  CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this, v3);
  CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this, v4);
LABEL_9:
  *((_BYTE *)this + 541) &= ~8u;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker *)((char *)this + 200));
  if ( ActiveChainingHelper )
    CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
  CInteractionTracker::SendPendingCallbacks(this);
}
