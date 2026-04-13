/*
 * XREFs of ?GetRuntimeClassName@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004E970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::GetRuntimeClassName(
           (ContentManagement::ContentDeliveryManagerConfigurationStatics *)(a1 - 40),
           a2);
}
