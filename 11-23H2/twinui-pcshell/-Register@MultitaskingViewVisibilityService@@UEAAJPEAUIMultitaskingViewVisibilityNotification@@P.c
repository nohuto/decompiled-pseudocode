/*
 * XREFs of ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x180131280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewVisibilityService::Register(
        MultitaskingViewVisibilityService *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  return CGITRegistrationList::Register((MultitaskingViewVisibilityService *)((char *)this + 72), a2, a3);
}
