/*
 * XREFs of ??$?0AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14006BDE0
 * Callers:
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14006C38C (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  a1[1] = v5;
  v6 = *a3;
  v5[2] = *a3;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a1;
}
