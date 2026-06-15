/*
 * XREFs of ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x18004BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ReportStatusToSCMgr @ 0x180058CE4 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall ServiceCtrl(
        DWORD dwControl,
        DWORD dwEventType,
        struct tagWTSSESSION_NOTIFICATION *lpEventData,
        LPVOID lpContext)
{
  DWORD v4; // ecx
  DWORD v5; // ecx
  DWORD v6; // ecx
  int v7; // ecx

  v4 = dwControl - 1;
  if ( !v4 )
    goto LABEL_10;
  v5 = v4 - 3;
  if ( !v5 )
    return 0LL;
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_10:
    dwServiceError = 0;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, lpContext);
    SetEvent(hEventShutdown);
    return 0LL;
  }
  v7 = v6 - 8;
  if ( !v7 )
    return ServicePowerEvent(dwEventType, lpEventData);
  if ( v7 == 1 )
    return ServiceSessionChange(dwEventType, lpEventData);
  return 120LL;
}
