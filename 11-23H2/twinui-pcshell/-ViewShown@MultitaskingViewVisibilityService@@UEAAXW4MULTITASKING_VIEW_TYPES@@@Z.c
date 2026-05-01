/*
 * XREFs of ?ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180055E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewVisibilityService::ViewShown(__int64 a1, __int64 a2)
{
  return MultitaskingViewVisibilityService::UpdateVisibility(a1 - 8, a2, (unsigned int)a2);
}
