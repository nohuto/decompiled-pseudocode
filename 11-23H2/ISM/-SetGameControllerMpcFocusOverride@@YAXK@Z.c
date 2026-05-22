/*
 * XREFs of ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800CD770
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800A9D58 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180025840 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall SetGameControllerMpcFocusOverride(int a1)
{
  GameControllerRawInputProvider *v1; // rbx
  RTL_SRWLOCK *v3; // rsi
  int updated; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = GameControllerRawInputProvider::s_instance;
  v3 = (RTL_SRWLOCK *)((char *)GameControllerRawInputProvider::s_instance + 64);
  AcquireSRWLockExclusive((PSRWLOCK)GameControllerRawInputProvider::s_instance + 8);
  *((_DWORD *)v1 + 38) = a1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(v1);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)updated,
      v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
