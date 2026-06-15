/*
 * XREFs of ReportStatusToSCMgr @ 0x1800555D8
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180042C50 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ServiceStart @ 0x180055528 (ServiceStart.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180055770 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180056B20 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180150870 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801509D0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801C2594 = a1;
  dword_1801C259C = a2;
  dword_1801C25A8 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801C2598 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801C25A4 = 0;
  else
    dword_1801C25A4 = dword_1801C1774++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
