/*
 * XREFs of ?RemoveGamepadInterceptionListener@GamepadInterceptionHelper@@QEAAXPEBUIGamepadInterceptionListener@@@Z @ 0x18006AB04
 * Callers:
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800DBB24 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 */

void __fastcall GamepadInterceptionHelper::RemoveGamepadInterceptionListener(
        GamepadInterceptionHelper *this,
        const struct IGamepadInterceptionListener *a2,
        __int64 a3,
        const char *a4)
{
  const struct IGamepadInterceptionListener **v5; // r8
  const struct IGamepadInterceptionListener **v6; // rcx
  const struct IGamepadInterceptionListener **v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
      a4);
  v5 = (const struct IGamepadInterceptionListener **)*((_QWORD *)this + 7);
  v6 = (const struct IGamepadInterceptionListener **)*((_QWORD *)this + 6);
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = v6 + 1;
      if ( *v6 == a2 )
        break;
      ++v6;
      if ( v7 == v5 )
        return;
    }
    memmove_0(v6, v6 + 1, (char *)v5 - (char *)v7);
    *((_QWORD *)this + 7) -= 8LL;
  }
}
