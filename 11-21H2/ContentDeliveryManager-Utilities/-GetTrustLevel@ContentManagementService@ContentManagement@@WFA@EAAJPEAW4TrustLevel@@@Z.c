/*
 * XREFs of ?GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x18004ED50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetTrustLevel(
           (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)(a1 - 80),
           a2);
}
