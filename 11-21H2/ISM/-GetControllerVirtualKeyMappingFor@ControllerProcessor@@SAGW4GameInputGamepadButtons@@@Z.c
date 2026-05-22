/*
 * XREFs of ?GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z @ 0x180176E64
 * Callers:
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x1801789D8 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ??$_Find_last@W4GameInputGamepadButtons@@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@_K@Z @ 0x18000AA90 (--$_Find_last@W4GameInputGamepadButtons@@@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall ControllerProcessor::GetControllerVirtualKeyMappingFor(__int64 a1)
{
  __int64 appended; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned __int8 v7[8]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  *(_DWORD *)v7 = 8;
  appended = std::_Fnv1a_append_bytes(a1, v7, 4uLL);
  v3 = std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
         v2,
         v8,
         v7,
         appended);
  v5 = qword_180243048;
  if ( v3[1] != v4 )
    v5 = v3[1];
  if ( v5 != qword_180243048 )
    LOWORD(v4) = *(_WORD *)(v5 + 20);
  return (unsigned __int16)v4;
}
