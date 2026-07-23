/*
 * XREFs of HvlUnregisterWheaErrorNotification @ 0x140931030
 * Callers:
 *     <none>
 * Callees:
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A08F00 (WheaUnregisterInUsePageOfflineNotification.c)
 */

NTSTATUS __stdcall HvlUnregisterWheaErrorNotification(PHVL_WHEA_ERROR_NOTIFICATION Callback)
{
  if ( Callback == (PHVL_WHEA_ERROR_NOTIFICATION)_InterlockedCompareExchange64(
                                                   &qword_140D01860,
                                                   0LL,
                                                   (signed __int64)Callback) )
    return WheaUnregisterInUsePageOfflineNotification((PFN_IN_USE_PAGE_OFFLINE_NOTIFY)sub_140543870);
  else
    return -1073741823;
}
