/*
 * XREFs of ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180042C50
 * Callers:
 *     <none>
 * Callees:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180042CD8 (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ServicePowerEvent @ 0x180042E00 (ServicePowerEvent.c)
 *     ReportStatusToSCMgr @ 0x1800555D8 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall ServiceCtrl(
        DWORD dwControl,
        __int64 dwEventType,
        struct tagWTSSESSION_NOTIFICATION *lpEventData,
        LPVOID lpContext)
{
  unsigned int v4; // edi
  DWORD v6; // ecx
  DWORD v7; // ecx
  DWORD v8; // ecx
  __int64 v9; // rcx

  v4 = dwEventType;
  v6 = dwControl - 1;
  if ( !v6 )
    goto LABEL_12;
  v7 = v6 - 3;
  if ( !v7 )
  {
    ReportStatusToSCMgr((unsigned int)dword_1801C2594, 0LL, 0LL, lpContext);
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_12:
    dwServiceError = 0;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, lpContext);
    SetEvent(hEventShutdown);
    return 0LL;
  }
  v9 = v8 - 8;
  if ( !(_DWORD)v9 )
    return ServicePowerEvent((unsigned int)dwEventType, lpEventData, lpEventData, lpContext);
  if ( (_DWORD)v9 == 1 )
  {
    if ( (unsigned int)IsTSServiceSessionChangeSupported(v9, dwEventType, lpEventData, lpContext) )
    {
      TS_SessionChanged(v4, lpEventData);
      PostSessionEvent(v4, lpEventData);
    }
    return 0LL;
  }
  return 120LL;
}
