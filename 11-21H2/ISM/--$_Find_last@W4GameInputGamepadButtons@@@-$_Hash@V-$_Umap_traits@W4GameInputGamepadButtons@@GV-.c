/*
 * XREFs of ??$_Find_last@W4GameInputGamepadButtons@@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@_K@Z @ 0x18000AA90
 * Callers:
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x18000A8D0 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 *     ?GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z @ 0x180176E64 (-GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(qword_180243058 + 16 * (a4 & qword_180243070) + 8);
  if ( v4 == qword_180243048 )
  {
    *a2 = qword_180243048;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *(_DWORD *)(v4 + 16) )
      {
        *a2 = *(_QWORD *)v4;
        a2[1] = v4;
        return a2;
      }
      if ( v4 == *(_QWORD *)(qword_180243058 + 16 * (a4 & qword_180243070)) )
        break;
      v4 = *(_QWORD *)(v4 + 8);
    }
    *a2 = v4;
  }
  a2[1] = 0LL;
  return a2;
}
