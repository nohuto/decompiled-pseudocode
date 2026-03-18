/*
 * XREFs of ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C0092F94
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x1C0092D80 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x1C0155E90 (EditionHandleHungWindow.c)
 *     NtUserShellMigrateWindow @ 0x1C01DDCB0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DE090 (NtUserShellSetWindowPos.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3C68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3E38 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F5128 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1C0200990 (PsW32ScreenSaver_Show.c)
 * Callees:
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x1C0092FD4 (-IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHungTimeCheck(a1[2], gdwHungAppTimeout) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
