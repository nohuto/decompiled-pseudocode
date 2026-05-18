/*
 * XREFs of DwmpResetPortConnection @ 0x180007894
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800062D4 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DwmpResetPortConnection(CApiPortClient *a1)
{
  CApiPortClient::ResetConnection(a1);
}
