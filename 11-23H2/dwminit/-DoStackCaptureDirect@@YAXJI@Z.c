/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000CD8C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000A454 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000A7C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000AE1C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000BBE4 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x18000BD94 (-WaitForLsa@@YAJXZ.c)
 *     DwmpCreateSessionProcess @ 0x18000C160 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogoff @ 0x18000C370 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x18000C3E0 (DwmpNotifyUserLogon.c)
 *     DwmpSignalSessionShutdown @ 0x18000D0CC (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
