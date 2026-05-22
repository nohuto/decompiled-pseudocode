/*
 * XREFs of ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800DCAA0
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800BC548 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180026DB0 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall SetGameControllerMpcFocusOverride(int a1)
{
  GameControllerRawInputProvider *v1; // rbx
  RTL_SRWLOCK *v3; // rsi
  int updated; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = GameControllerRawInputProvider::s_instance;
  v3 = (RTL_SRWLOCK *)((char *)GameControllerRawInputProvider::s_instance + 72);
  AcquireSRWLockExclusive((PSRWLOCK)GameControllerRawInputProvider::s_instance + 9);
  *((_DWORD *)v1 + 40) = a1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(v1);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)updated,
      v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
