/*
 * XREFs of ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180231D60
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18023847C (-RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::DetachFromChannel(CInteractionTracker *this, struct CChannelContext *a2)
{
  CInteractionTrackerBindingManager *v3; // rcx

  v3 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 80);
  if ( v3 )
    CInteractionTrackerBindingManager::RemoveTrackerBindings(v3, this);
  CNotificationResource::DetachFromChannel(this, a2);
}
