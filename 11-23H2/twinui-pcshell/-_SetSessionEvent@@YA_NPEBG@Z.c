/*
 * XREFs of ?_SetSessionEvent@@YA_NPEBG@Z @ 0x18074B324
 * Callers:
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180522364 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall _SetSessionEvent(LPCWSTR lpName)
{
  HANDLE v2; // rsi
  HANDLE v3; // rax
  bool v4; // di
  void *v5; // rbx

  v2 = OpenEventW(2u, 0, L"Global\\{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-server");
  v3 = OpenEventW(2u, 0, lpName);
  v4 = 0;
  v5 = v3;
  if ( v2 )
  {
    if ( v3 && SetEvent(v3) )
      v4 = SetEvent(v2);
    CloseHandle(v2);
  }
  if ( v5 )
    CloseHandle(v5);
  return v4;
}
