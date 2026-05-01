/*
 * XREFs of ?StartTextInputManagementService@@YA_NXZ @ 0x18074B25C
 * Callers:
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180522364 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool StartTextInputManagementService(void)
{
  bool v0; // bl
  SC_HANDLE v1; // rax
  SC_HANDLE v2; // rdi
  SC_HANDLE v3; // rax
  SC_HANDLE v4; // rsi

  v0 = 0;
  v1 = OpenSCManagerW(0LL, 0LL, 1u);
  v2 = v1;
  if ( v1 )
  {
    v3 = OpenServiceW(v1, L"TextInputManagementService", 0x10u);
    v4 = v3;
    if ( v3 )
    {
      v0 = StartServiceW(v3, 0, 0LL) || GetLastError() == 1056;
      CloseServiceHandle(v4);
    }
    CloseServiceHandle(v2);
  }
  return v0;
}
