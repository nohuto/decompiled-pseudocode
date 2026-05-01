/*
 * XREFs of ?ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180055E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewVisibilityService::ViewDismissed(__int64 a1, unsigned int a2)
{
  return MultitaskingViewVisibilityService::UpdateVisibility(a1 - 8, ~a2, a2);
}
