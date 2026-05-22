/*
 * XREFs of ??$?0AEBW4GameInputGamepadButtons@@AEAG@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x180039528
 * Callers:
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x180015294 (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003A654 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum GameInputGamepadButtons const,unsigned short>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum GameInputGamepadButtons const,unsigned short>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _WORD *a4)
{
  size_t size_of; // rax
  _DWORD *v8; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<24>(1LL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v8[4] = *a3;
  *((_WORD *)v8 + 10) = *a4;
  return a1;
}
