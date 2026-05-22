/*
 * XREFs of ?AddGamepadInterceptionListener@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionListener@@@Z @ 0x18006A650
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004B18C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@?$vector@PEAUIGamepadInterceptionListener@@V?$allocator@PEAUIGamepadInterceptionListener@@@std@@@std@@QEAAPEAPEAUIGamepadInterceptionListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x180068E8C (--$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@-$vector@PEAUIGamepadInterceptionLi.c)
 */

void __fastcall GamepadInterceptionHelper::AddGamepadInterceptionListener(
        GamepadInterceptionHelper *this,
        struct IGamepadInterceptionListener *a2,
        __int64 a3,
        const char *a4)
{
  struct IGamepadInterceptionListener **v4; // r8
  char *v5; // rcx
  struct IGamepadInterceptionListener **i; // rax
  _QWORD *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IGamepadInterceptionListener *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x63,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
      a4);
  v4 = (struct IGamepadInterceptionListener **)*((_QWORD *)this + 7);
  v5 = (char *)this + 48;
  for ( i = *(struct IGamepadInterceptionListener ***)v5; i != v4; ++i )
  {
    if ( *i == a2 )
      return;
  }
  v7 = (_QWORD *)*((_QWORD *)v5 + 1);
  if ( v7 == *((_QWORD **)v5 + 2) )
  {
    std::vector<IGamepadInterceptionListener *>::_Emplace_reallocate<IGamepadInterceptionListener * const &>(
      (const void **)v5,
      *((_BYTE **)v5 + 1),
      &v9);
  }
  else
  {
    *v7 = a2;
    *((_QWORD *)v5 + 1) += 8LL;
  }
}
