/*
 * XREFs of ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x18006A9E0
 * Callers:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801A6348 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x18006915C (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 */

bool __fastcall GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(
        GamepadInterceptionHelper *this,
        unsigned int a2)
{
  _QWORD *v2; // r10
  unsigned int v3; // r11d
  bool result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 9,
    (__int64)v5,
    &v7);
  result = 0;
  if ( !*(_BYTE *)(v6 + 25) && v3 >= *(_DWORD *)(v6 + 28) )
    return *v2 != v6;
  return result;
}
