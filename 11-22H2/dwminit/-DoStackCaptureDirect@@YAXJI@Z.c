/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800090AC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180006774 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180006AE0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000713C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180007F04 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x1800080B4 (-WaitForLsa@@YAJXZ.c)
 *     DwmpCreateSessionProcess @ 0x180008480 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogoff @ 0x180008690 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x180008700 (DwmpNotifyUserLogon.c)
 *     DwmpSignalSessionShutdown @ 0x1800093DC (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
