/*
 * XREFs of ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1804CDEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1804BAD2C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPen_ea_1804BAD2C.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1804BC95C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendin.c)
 *     ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x1804C3D34 (-FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1804CD3A4 (-clear@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::v_ShutdownServices(WindowEventDispatcher *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  _QWORD **v6; // rdx
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  size_t size_of; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  char *v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v18; // [rsp+70h] [rbp+18h]

  v3 = (RTL_SRWLOCK *)((char *)this + 344);
  AcquireSRWLockExclusive((PSRWLOCK)this + 43);
  v18 = v3;
  std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear((__int64 **)this + 30);
  v5 = (_QWORD *)*((_QWORD *)this + 47);
  try
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v5;
      v6 = (_QWORD **)*((_QWORD *)this + 47);
      if ( v5 == v6 )
        break;
      v9 = v5[2];
      v17 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = *((_QWORD *)this + 49);
      if ( *((_QWORD *)this + 50) == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("list too long");
      v14 = (char *)this + 392;
      v15 = 0LL;
      size_of = std::_Get_size_of_n<24>(1uLL);
      v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v15 = v12;
      v12[2] = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      ++*((_QWORD *)this + 50);
      v13 = *(_QWORD **)(v10 + 8);
      *v12 = v10;
      v12[1] = v13;
      v15 = 0LL;
      *(_QWORD *)(v10 + 8) = v12;
      *v13 = v12;
      std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    }
    std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
      v4,
      v6);
    **((_QWORD **)this + 47) = *((_QWORD *)this + 47);
    *(_QWORD *)(*((_QWORD *)this + 47) + 8LL) = *((_QWORD *)this + 47);
    *((_QWORD *)this + 48) = 0LL;
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    WindowEventDispatcher::FlushRemovedPendingActivations((RTL_SRWLOCK *)this - 16);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x110,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     v7);
    return (unsigned int)v17;
  }
  return result;
}
