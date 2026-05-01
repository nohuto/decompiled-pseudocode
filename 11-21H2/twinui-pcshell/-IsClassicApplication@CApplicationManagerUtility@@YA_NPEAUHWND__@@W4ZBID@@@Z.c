/*
 * XREFs of ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x1801059A0
 * Callers:
 *     RecoverWindowsProc @ 0x1801058D0 (RecoverWindowsProc.c)
 * Callees:
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x180042E04 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsClassicApplication(ShellManagedWindowHelper *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  HWND v5; // rdx
  HANDLE PropW; // rax

  v3 = 0;
  if ( (unsigned int)(a2 - 1) <= 1 || (_DWORD)a2 == 16 || (PropW = GetPropW((HWND)a1, (LPCWSTR)0xA920)) != 0LL )
  {
    if ( !(unsigned int)IsShellManagedWindow(a1, a2, a3)
      || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a1, v5) )
    {
      v3 = 1;
    }
    LOBYTE(PropW) = v3;
  }
  return (char)PropW;
}
