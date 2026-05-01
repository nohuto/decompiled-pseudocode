/*
 * XREFs of ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18019E040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18019E1AC (-clear@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18019E1D8 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivatio.c)
 *     ?FlushRemovedPendingActivations@UwpWindowEventDispatcher@@AEAAXXZ @ 0x18019E208 (-FlushRemovedPendingActivations@UwpWindowEventDispatcher@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1804BC95C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendin.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UwpWindowEventDispatcher::v_ShutdownServices(
        UwpWindowEventDispatcher *this,
        struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  size_t size_of; // rax
  _QWORD *v10; // r12
  _QWORD *v11; // rax
  char *v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+70h] [rbp+18h]

  v3 = (RTL_SRWLOCK *)((char *)this + 360);
  AcquireSRWLockExclusive((PSRWLOCK)this + 45);
  v15 = v3;
  std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear((char *)this + 256);
  v5 = (_QWORD *)*((_QWORD *)this + 52);
  while ( 1 )
  {
    v5 = (_QWORD *)*v5;
    if ( v5 == *((_QWORD **)this + 52) )
      break;
    v7 = v5[2];
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *((_QWORD *)this + 54);
    if ( *((_QWORD *)this + 55) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list too long");
    v12 = (char *)this + 432;
    v13 = 0LL;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v13 = v10;
    v10[2] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    ++*((_QWORD *)this + 55);
    v11 = *(_QWORD **)(v8 + 8);
    *v10 = v8;
    v10[1] = v11;
    v13 = 0LL;
    *(_QWORD *)(v8 + 8) = v10;
    *v11 = v10;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(&v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(v4);
  **((_QWORD **)this + 52) = *((_QWORD *)this + 52);
  *(_QWORD *)(*((_QWORD *)this + 52) + 8LL) = *((_QWORD *)this + 52);
  *((_QWORD *)this + 53) = 0LL;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  UwpWindowEventDispatcher::FlushRemovedPendingActivations((UwpWindowEventDispatcher *)((char *)this - 128));
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 26);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 29);
  return 0LL;
}
