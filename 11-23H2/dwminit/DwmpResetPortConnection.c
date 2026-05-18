/*
 * XREFs of DwmpResetPortConnection @ 0x18000D084
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000BBE4 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DwmpResetPortConnection(CApiPortClient *a1)
{
  CApiPortClient::ResetConnection(a1);
}
