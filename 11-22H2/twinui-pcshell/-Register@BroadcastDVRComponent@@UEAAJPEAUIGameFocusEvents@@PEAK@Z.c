/*
 * XREFs of ?Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z @ 0x1801311E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BroadcastDVRComponent::Register(BroadcastDVRComponent *this, struct IUnknown *a2, unsigned int *a3)
{
  return CGITRegistrationList::Register((BroadcastDVRComponent *)((char *)this + 352), a2, a3);
}
