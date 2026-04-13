/*
 * XREFs of ?AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ @ 0x180048E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(a1 - 40, a2);
}
