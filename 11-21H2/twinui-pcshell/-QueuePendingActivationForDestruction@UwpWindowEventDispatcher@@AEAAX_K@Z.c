/*
 * XREFs of ?QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z @ 0x1803EFE54
 * Callers:
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1803EF960 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     ?RemovePendingActivation@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x1803F0E20 (-RemovePendingActivation@UwpWindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5_____lambda_6f97718575e1cd15cbb9f08738e16ff5___ @ 0x1803E87D4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f97718575e1c.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803EA6D4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedO_ea_1803EA6D4.c)
 */

void __fastcall UwpWindowEventDispatcher::QueuePendingActivationForDestruction(
        UwpWindowEventDispatcher *this,
        __int64 a2)
{
  void **v3; // rax
  void **i; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // r15
  size_t size_of; // rax
  UwpWindowEventDispatcher *v8; // rbx
  UwpWindowEventDispatcher **v9; // rax
  unsigned int v10; // edi
  volatile signed __int32 **v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  UwpWindowEventDispatcher *v14; // [rsp+30h] [rbp-10h] BYREF
  UwpWindowEventDispatcher *v15; // [rsp+38h] [rbp-8h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+30h] BYREF
  UwpWindowEventDispatcher *v17; // [rsp+80h] [rbp+40h] BYREF

  v3 = (void **)*((_QWORD *)this + 66);
  for ( i = (void **)*v3; i != v3; i = (void **)*i )
  {
    v5 = i[2];
    if ( v5[1] == a2 )
    {
      v16 = (volatile signed __int32 *)i[2];
      if ( v5 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *(_QWORD *)i[1] = *i;
      *((_QWORD *)*i + 1) = i[1];
      --*((_QWORD *)this + 67);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)i + 2);
      std::_Deallocate<16,0>(i, 0x18uLL);
      v6 = *((_QWORD *)this + 68);
      if ( *((_QWORD *)this + 69) == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("list too long");
      v14 = (UwpWindowEventDispatcher *)((char *)this + 544);
      size_of = std::_Get_size_of_n<24>(1uLL);
      v8 = (UwpWindowEventDispatcher *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v15 = v8;
      *((_QWORD *)v8 + 2) = v5;
      if ( v5 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      ++*((_QWORD *)this + 69);
      v9 = *(UwpWindowEventDispatcher ***)(v6 + 8);
      *(_QWORD *)v8 = v6;
      *((_QWORD *)v8 + 1) = v9;
      v15 = 0LL;
      *(_QWORD *)(v6 + 8) = v8;
      *v9 = v8;
      std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v14);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v16);
      break;
    }
  }
  v17 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v14 = this;
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v10 = *((_DWORD *)this + 125);
  v11 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5_____lambda_6f97718575e1cd15cbb9f08738e16ff5___(
          &v16,
          &v14);
  v12 = *v11;
  *v11 = 0LL;
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v13);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v10, 0LL, v12, 0LL);
  if ( v12 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
}
