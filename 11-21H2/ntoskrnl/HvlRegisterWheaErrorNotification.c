/*
 * XREFs of HvlRegisterWheaErrorNotification @ 0x140930FF0
 * Callers:
 *     <none>
 * Callees:
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A08D90 (WheaRegisterInUsePageOfflineNotification.c)
 */

NTSTATUS __stdcall HvlRegisterWheaErrorNotification(PHVL_WHEA_ERROR_NOTIFICATION Callback)
{
  NTSTATUS result; // eax

  if ( _InterlockedCompareExchange64(&qword_140D01860, (signed __int64)Callback, 0LL) )
    return -1073741823;
  result = WheaRegisterInUsePageOfflineNotification((PFN_IN_USE_PAGE_OFFLINE_NOTIFY)sub_140543870, 0LL);
  if ( result < 0 )
    _InterlockedExchange64(&qword_140D01860, 0LL);
  return result;
}
