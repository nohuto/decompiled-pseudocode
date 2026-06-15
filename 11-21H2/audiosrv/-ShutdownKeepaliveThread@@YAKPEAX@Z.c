/*
 * XREFs of ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801509D0
 * Callers:
 *     <none>
 * Callees:
 *     ReportStatusToSCMgr @ 0x1800555D8 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall ShutdownKeepaliveThread(PVOID Parameter)
{
  DWORD v1; // eax

  do
  {
    ReportStatusToSCMgr(3, 0, 5000);
    v1 = WaitForSingleObject(hEventShutdownComplete, 0x1388u);
  }
  while ( v1 && v1 != -1 );
  return 0LL;
}
