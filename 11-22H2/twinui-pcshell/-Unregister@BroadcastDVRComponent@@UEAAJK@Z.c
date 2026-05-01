/*
 * XREFs of ?Unregister@BroadcastDVRComponent@@UEAAJK@Z @ 0x18017D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BroadcastDVRComponent::Unregister(BroadcastDVRComponent *this, unsigned int a2)
{
  return CGITRegistrationList::Unregister((BroadcastDVRComponent *)((char *)this + 352), a2);
}
