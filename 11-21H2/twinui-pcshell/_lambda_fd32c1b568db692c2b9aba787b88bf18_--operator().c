/*
 * XREFs of _lambda_fd32c1b568db692c2b9aba787b88bf18_::operator() @ 0x180137A58
 * Callers:
 *     wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___ @ 0x18012D244 (wil--ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180108FA8 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180137BB8 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180137C08 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_fd32c1b568db692c2b9aba787b88bf18_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  struct IImmersiveMonitor **v3; // rdi
  __int64 result; // rax
  __int64 *v5; // r10
  __int64 v6; // rdx
  struct IImmersiveMonitor *v7; // rdi
  __int64 (__fastcall *v8)(struct IImmersiveMonitor *, struct IApplicationFrame **); // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  struct IApplicationFrame *v13; // rdi
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF
  struct IApplicationFrame *v20; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationFrame *v21; // [rsp+80h] [rbp+30h] BYREF

  v2 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v19);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v14);
  v3 = a1[1];
  result = std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Find_lower_bound<unsigned long>(
             v3 + 17,
             &v14,
             &v19);
  v6 = v15;
  if ( *(_BYTE *)(v15 + 25) || (result = *(unsigned int *)(v15 + 32), v19 < (unsigned int)result) )
    v6 = *v5;
  if ( v6 == *v5 )
  {
    v20 = 0LL;
    v7 = v3[16];
    v8 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)v7 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    v9 = v8(v7, &v20);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v9,
        v14);
    *(_QWORD *)&v14 = a1[1];
    *((_QWORD *)&v14 + 1) = &v20;
    v16 = v14;
    v17 = 1;
    v10 = WindowSizeConverter::EnsurePosition(retaddr, **a1, v20);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F8,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v10,
        v14);
    v11 = std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
            (__int64 ***)a1[1] + 17,
            (__int64)&v14,
            &v19);
    v12 = *(_QWORD *)v11;
    v13 = v20;
    if ( *(struct IApplicationFrame **)(*(_QWORD *)v11 + 40LL) != v20 )
    {
      v21 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v21 = *(struct IApplicationFrame **)(v12 + 40);
      *(_QWORD *)(v12 + 40) = v13;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    }
    return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
  }
  return result;
}
