/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_b150c4128798bf8cae8961d745166767___ @ 0x18021106C
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1805A3468 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x180107680 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?CopyTo@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801177C8 (-CopyTo@-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wil::ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___ @ 0x1802113B4 (wil--ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___.c)
 *     _lambda_b150c4128798bf8cae8961d745166767_::operator() @ 0x1802114E8 (_lambda_b150c4128798bf8cae8961d745166767_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1805A2684 (--1-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_b150c4128798bf8cae8961d745166767___(
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
  wil::details::in1diag3 *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rbx
  __int64 v23; // rsi
  int (__fastcall *v24)(__int64, _QWORD, __int64 *); // rdi
  __int64 v25; // rdx
  __int64 **v26; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v34[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v36; // [rsp+A8h] [rbp+38h] BYREF

  v33 = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)&v33 = v10;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v36);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BC,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_34;
  }
  v13 = 0;
  if ( v36 )
  {
    while ( 1 )
    {
      v32 = 0LL;
      v14 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v32);
      if ( v14(a2, v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v32) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v32);
      if ( ++v13 >= v36 )
        goto LABEL_16;
    }
    v15 = 0;
    v31 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(&v31, a4);
    }
    else
    {
      v16 = v32;
      v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 80LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
      v15 = v17(v16, &v31);
    }
    v18 = retaddr;
    if ( v15 >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 24LL))(v31, &v30) < 0 )
        goto LABEL_14;
      v34[0] = &v33;
      v34[1] = &v30;
      v34[2] = &v32;
      v21 = wil::ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___(v34);
      v18 = retaddr;
      if ( v21 >= 0 )
        goto LABEL_14;
      v19 = (unsigned int)v21;
      v20 = 992LL;
    }
    else
    {
      v19 = (unsigned int)v15;
      v20 = 973LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v20,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v19);
LABEL_14:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    goto LABEL_15;
  }
LABEL_16:
  v22 = *(__int64 **)v33;
  while ( v22 != (__int64 *)v33 )
  {
    v30 = v22[5];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
    v31 = 0LL;
    v23 = *(_QWORD *)(a1 + 152);
    v24 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    if ( v24(v23, *((unsigned int *)v22 + 8), &v31) >= 0 )
    {
      v32 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      if ( (int)Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo(&v30) >= 0 )
      {
        v25 = a3;
        if ( !a3 )
          v25 = v31;
        lambda_b150c4128798bf8cae8961d745166767_::operator()(a5, v25, v31, v32);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    v26 = (__int64 **)v22[2];
    if ( *((_BYTE *)v26 + 25) )
    {
      for ( i = (__int64 *)v22[1]; !*((_BYTE *)i + 25) && v22 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v22 = i;
      v22 = i;
    }
    else
    {
      v22 = (__int64 *)v22[2];
      for ( j = *v26; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v22 = j;
    }
  }
  v12 = 0;
LABEL_34:
  std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::~map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>(&v33);
  return v12;
}
