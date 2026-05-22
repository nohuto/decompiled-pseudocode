/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180172C44
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017705C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x18000A8D0 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace@AEAKAEAPEAVControllerProcessor@@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAPEAVControllerProcessor@@@Z @ 0x180170EB4 (--$emplace@AEAKAEAPEAVControllerProcessor@@@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x180177844 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x180177964 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017A0C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  bool v4; // r12
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct tagRECT v8; // xmm6
  struct tagPOINT *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD); // rdi
  __int64 (__fastcall ***v11)(_QWORD); // r15
  unsigned int v12; // esi
  struct tagRECT v13; // xmm6
  struct tagPOINT v14; // rbx
  unsigned __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-40h]
  struct tagRECT v18; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+90h] [rbp+30h] BYREF
  int v21; // [rsp+98h] [rbp+38h] BYREF
  ControllerProcessor *v22; // [rsp+A0h] [rbp+40h] BYREF

  v22 = a3;
  v21 = a2;
  v4 = *((_QWORD *)this + 10) == 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::emplace<unsigned long &,ControllerProcessor * &>(
    (float *)this + 16,
    (__int64)&v18,
    (unsigned __int8 *)&v21,
    &v22);
  v5 = ControllerProcessor::SetControllerVirtualKeyMappings(*((_BYTE *)this + 228));
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      (const char *)(unsigned int)v5,
      v17);
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 32LL))(v6 + 8) )
    {
      ControllerProcessor::UpdateNavigationState(v22, 1LL, 0LL);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v8 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v9 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v18 = v8;
      ControllerProcessor::NavigationResume(v22, v7, &v18, *v9);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 16,
    &v20,
    (const unsigned __int8 *)this + 224);
  if ( v20 != *((__int64 (__fastcall ****)(_QWORD))this + 17) )
  {
    v20 = (__int64 (__fastcall ***)(_QWORD))v20[3];
    v10 = v20;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v20);
    v11 = v10 + 1;
    if ( (unsigned __int8)v10[1][4](v10 + 1) )
    {
      v12 = (*v11)[5](v10 + 1);
      v13 = *(struct tagRECT *)(*v11)[6](v10 + 1);
      v14 = *(struct tagPOINT *)(*v11)[7](v10 + 1);
      v15 = (*v11)[8](v10 + 1);
      v18 = v13;
      ControllerProcessor::NavigationEnable(v22, v12, &v18, v14, v15, 1, v4);
    }
    else
    {
      ControllerProcessor::UpdateNavigationState(v22, 2LL, 0LL);
    }
    if ( v10 )
      (*v10)[1](v10);
  }
  return 0LL;
}
