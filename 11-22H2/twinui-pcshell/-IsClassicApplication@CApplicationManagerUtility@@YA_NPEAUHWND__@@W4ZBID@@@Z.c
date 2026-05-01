/*
 * XREFs of ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180161C20
 * Callers:
 *     ShouldWindowBeConsideredForRecovery @ 0x180161B60 (ShouldWindowBeConsideredForRecovery.c)
 * Callees:
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x180071E64 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsClassicApplication(ShellManagedWindowHelper *a1, int a2)
{
  char v2; // bl
  HWND v4; // rdx
  HANDLE PropW; // rax

  v2 = 0;
  if ( (unsigned int)(a2 - 1) <= 1 || a2 == 16 || (PropW = GetPropW((HWND)a1, (LPCWSTR)0xA920)) != 0LL )
  {
    if ( !(unsigned int)IsShellManagedWindow(a1)
      || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a1, v4) )
    {
      v2 = 1;
    }
    LOBYTE(PropW) = v2;
  }
  return (char)PropW;
}
