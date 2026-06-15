/*
 * XREFs of ReportStatusToSCMgr @ 0x180058CF4
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x18004BEB0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180057F30 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180057FD0 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ServiceStart @ 0x1800587EC (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180157C60 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x180157DC0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801CFC04 = a1;
  dword_1801CFC0C = a2;
  dword_1801CFC18 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801CFC08 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801CFC14 = 0;
  else
    dword_1801CFC14 = dword_1801CEC50++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
