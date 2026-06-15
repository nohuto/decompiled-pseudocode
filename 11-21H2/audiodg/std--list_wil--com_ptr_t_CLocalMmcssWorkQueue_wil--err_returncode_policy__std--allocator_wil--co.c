/*
 * XREFs of std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___ @ 0x14006BF94
 * Callers:
 *     ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x14006C88C (-UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1_List_node_remove_op@?$list@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x14006C230 (--1_List_node_remove_op@-$list@V-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___(
        __int64 ***a1,
        int a2)
{
  __int64 **v3; // r14
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  _DWORD *v6; // rdi
  int v7; // edi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 ***v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-28h]
  _DWORD *v14; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  v12 = 0LL;
  v13 = &v12;
  v3 = *a1;
  v4 = **a1;
  if ( v4 != (__int64 *)*a1 )
  {
    do
    {
      v5 = (__int64 *)*v4;
      v6 = (_DWORD *)v4[2];
      v14 = v6;
      if ( v6 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = v6[4];
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v14);
      if ( v7 == a2 )
      {
        v11[1] = (__int64 **)((char *)v11[1] - 1);
        v8 = (_QWORD *)*v4;
        *v4 = 0LL;
        v9 = (_QWORD *)v4[1];
        *v9 = v8;
        v8[1] = v9;
        *v13 = (__int64)v4;
        v13 = v4;
      }
      v4 = v5;
    }
    while ( v5 != (__int64 *)v3 );
  }
  return std::list<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>>::_List_node_remove_op::~_List_node_remove_op(&v11);
}
