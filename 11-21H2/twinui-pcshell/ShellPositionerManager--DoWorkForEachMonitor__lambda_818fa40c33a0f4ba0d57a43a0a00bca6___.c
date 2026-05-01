/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6___ @ 0x1804E9FD0
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804EB4C0 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1801093CC (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1804E9310 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micros.c)
 *     wil::ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___ @ 0x1804EA340 (wil--ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___.c)
 *     _lambda_818fa40c33a0f4ba0d57a43a0a00bca6_::operator() @ 0x1804EA8F8 (_lambda_818fa40c33a0f4ba0d57a43a0a00bca6_--operator().c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_818fa40c33a0f4ba0d57a43a0a00bca6___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  size_t size_of; // rax
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // esi
  int (__fastcall *v14)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v15; // ebx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  wil::details::in1diag3 *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rbx
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v25; // r14
  int (__fastcall *v26)(__int64, _QWORD, __int64 *); // rsi
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 **v29; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  int (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v34; // [rsp+38h] [rbp-38h] BYREF
  __int64 v35; // [rsp+40h] [rbp-30h] BYREF
  __int128 v36; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v37[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v39; // [rsp+A8h] [rbp+38h] BYREF

  v36 = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)&v36 = v10;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v39);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x390,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_34;
  }
  v13 = 0;
  if ( v39 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v14 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
      if ( v14(a2, v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v34) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
      if ( ++v13 >= v39 )
        goto LABEL_16;
    }
    v15 = 0;
    v35 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(&v35, a4);
    }
    else
    {
      v16 = v34;
      v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 80LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v35);
      v15 = v17(v16, AddressOf);
    }
    v19 = retaddr;
    if ( v15 >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 24LL))(
             v35,
             &v33) < 0 )
        goto LABEL_14;
      v37[0] = &v36;
      v37[1] = &v33;
      v37[2] = &v34;
      v22 = wil::ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___(v37);
      v19 = retaddr;
      if ( v22 >= 0 )
        goto LABEL_14;
      v20 = (unsigned int)v22;
      v21 = 948LL;
    }
    else
    {
      v20 = (unsigned int)v15;
      v21 = 929LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v19,
      (void *)v21,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v20);
LABEL_14:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    goto LABEL_15;
  }
LABEL_16:
  v23 = *(__int64 **)v36;
  while ( v23 != (__int64 *)v36 )
  {
    v24 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v23[5];
    v33 = v24;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
    v34 = 0LL;
    v25 = *(_QWORD *)(a1 + 152);
    v26 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 56LL);
    v27 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v34);
    if ( v26(v25, *((unsigned int *)v23 + 8), v27) >= 0 )
    {
      v35 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
      if ( (**v24)(v24, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v35) >= 0 )
      {
        v28 = a3;
        if ( !a3 )
          v28 = v34;
        lambda_818fa40c33a0f4ba0d57a43a0a00bca6_::operator()(a5, v28, v34, v35);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
    v29 = (__int64 **)v23[2];
    if ( *((_BYTE *)v29 + 25) )
    {
      for ( i = (__int64 *)v23[1]; !*((_BYTE *)i + 25) && v23 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v23 = i;
      v23 = i;
    }
    else
    {
      v23 = (__int64 *)v23[2];
      for ( j = *v29; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v23 = j;
    }
  }
  v12 = 0;
LABEL_34:
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(
    (__int64)&v36,
    (__int64)&v36,
    *(_QWORD *)(v36 + 8));
  std::_Deallocate<16,0>((void *)v36, 0x30uLL);
  return v12;
}
