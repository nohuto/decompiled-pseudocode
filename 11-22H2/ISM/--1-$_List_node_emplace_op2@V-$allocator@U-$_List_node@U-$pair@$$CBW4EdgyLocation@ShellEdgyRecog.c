/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18017CC40
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_ShellEdgyRecognizer::EdgyLocation_std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____std::_Uhash_compare_enum_ShellEdgyRecognizer::EdgyLocation_std::hash_enum_ShellEdgyRecognizer::EdgyLocation__std::equal_to_enum_ShellEdgyRecognizer::EdgyLocation____std::allocator_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration________0___::_Try_emplace_enum_ShellEdgyRecognizer::EdgyLocation_const_&__::_1_::dtor$0 @ 0x18007F9DA (_std--_Hash_std--_Umap_traits_enum_ShellEdgyRecognizer--EdgyLocation_std--vector_ShellGesturesPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = v2[3];
    if ( v3 )
    {
      v4 = v2[4];
      while ( v3 != v4 )
      {
        v5 = *(_QWORD *)(v3 + 16);
        if ( v5 )
        {
          *(_QWORD *)(v3 + 16) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        }
        v3 += 32LL;
      }
      v6 = (void *)v2[3];
      v9 = (v2[5] - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL;
      v8 = v6;
      if ( v9 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v8, &v9);
        v6 = v8;
      }
      operator delete(v6);
      v2[3] = 0LL;
      v2[4] = 0LL;
      v2[5] = 0LL;
    }
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    std::_Deallocate<16,0>(v7, 0x30uLL);
}
