/*
 * XREFs of ??$?0AEBGUActiveKeyProperties@ControllerProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@std@@@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x1801A25EC
 * Callers:
 *     ??$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x1801A2720 (--$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@-$unordered_map@GUActiveKeyP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003A654 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        _BYTE *a4)
{
  size_t size_of; // rax
  _WORD *v8; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  v8[8] = *a3;
  *((_BYTE *)v8 + 18) = *a4;
  return a1;
}
