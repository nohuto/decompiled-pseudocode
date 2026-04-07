/*
 * XREFs of ?find@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@AEBQEAVCWindowData@@@Z @ 0x1800B8E80
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x18005524C (--$_Find_lower_bound@PEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWin.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::find(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
    a1,
    (__int64)v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
