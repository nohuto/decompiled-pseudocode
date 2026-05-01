/*
 * XREFs of ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1803F8AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1803E9DD4 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPen_ea_1803E9DD4.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803EA6D4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedO_ea_1803EA6D4.c)
 *     ?FlushRemovedPendingActivations@UwpWindowEventDispatcher@@AEAAXXZ @ 0x1803ED9E4 (-FlushRemovedPendingActivations@UwpWindowEventDispatcher@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1803F8690 (-clear@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UwpWindowEventDispatcher::v_ShutdownServices(
        UwpWindowEventDispatcher *this,
        struct IProfferService *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  _QWORD **v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  size_t size_of; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  char *v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)this + 43);
  std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear((__int64 **)this + 30);
  v4 = (_QWORD *)*((_QWORD *)this + 50);
  try
  {
    while ( 1 )
    {
      v4 = (_QWORD *)*v4;
      v5 = (_QWORD **)*((_QWORD *)this + 50);
      if ( v4 == v5 )
        break;
      v8 = v4[2];
      v17 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = *((_QWORD *)this + 52);
      if ( *((_QWORD *)this + 53) == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("list too long");
      v13 = (char *)this + 416;
      v14 = 0LL;
      size_of = std::_Get_size_of_n<24>(1uLL);
      v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v14 = v11;
      v11[2] = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      ++*((_QWORD *)this + 53);
      v12 = *(_QWORD **)(v9 + 8);
      *v11 = v9;
      v11[1] = v12;
      v14 = 0LL;
      *(_QWORD *)(v9 + 8) = v11;
      *v12 = v11;
      std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v13);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v17);
    }
    std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
      v3,
      v5);
    **((_QWORD **)this + 50) = *((_QWORD *)this + 50);
    *(_QWORD *)(*((_QWORD *)this + 50) + 8LL) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 51) = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
    UwpWindowEventDispatcher::FlushRemovedPendingActivations((RTL_SRWLOCK *)this - 16);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xF2,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v6);
    return (unsigned int)v16;
  }
  return result;
}
