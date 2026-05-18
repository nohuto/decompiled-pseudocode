/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800075AC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000411C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800044C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180005410 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800062D4 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x180006484 (-WaitForLsa@@YAJXZ.c)
 *     DwmpCreateSessionProcess @ 0x180006980 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogoff @ 0x180006B90 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x180006C00 (DwmpNotifyUserLogon.c)
 *     DwmpSignalSessionShutdown @ 0x1800078DC (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
