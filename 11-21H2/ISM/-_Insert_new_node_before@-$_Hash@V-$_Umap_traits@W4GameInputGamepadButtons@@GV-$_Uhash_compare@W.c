/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@2@_KQEAU32@1@Z @ 0x180048A38
 * Callers:
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x18000A8D0 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_new_node_before(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_180243050;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_180243058;
  v6 = 2 * (a2 & qword_180243070);
  v7 = *(_QWORD *)(qword_180243058 + 16 * (a2 & qword_180243070));
  if ( v7 == qword_180243048 )
  {
    *(_QWORD *)(qword_180243058 + 8 * v6) = a4;
  }
  else
  {
    if ( v7 == a3 )
    {
      *(_QWORD *)(qword_180243058 + 8 * v6) = a4;
      return a4;
    }
    if ( *(_QWORD **)(qword_180243058 + 8 * v6 + 8) != v4 )
      return a4;
  }
  *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
  return a4;
}
