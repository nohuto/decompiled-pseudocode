/*
 * XREFs of ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x180172980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180170D24 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x180172AD8 (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18017321C (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterClient(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationClientProxy *a3)
{
  unsigned int v5; // ebp
  const char *v6; // r9
  struct tagRECT v7; // xmm6
  struct tagPOINT *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+70h] [rbp+18h] BYREF

  v5 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, struct BamoControllerNavigationManagerStub *))(**(_QWORD **)(*((_QWORD *)a3 + 4) + 16LL) + 8LL))(
                     *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL),
                     a2)
                 + 32);
  v15 = v5;
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 16,
          &v16,
          (const unsigned __int8 *)&v15) != *((_QWORD *)this + 17) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      304LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v6);
  v7 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 48LL))((char *)a3 + 8);
  v8 = (struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 56LL))((char *)a3 + 8);
  v13 = v7;
  InputETW::ControllerNavigationManager::RegisterClient(v5, &v13, *v8);
  v15 = v5;
  v9 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Try_emplace<unsigned long const &,>(
         (float *)this + 32,
         (__int64)&v13,
         (unsigned __int8 *)&v15);
  v10 = *(_QWORD *)v9;
  if ( *(struct BamoControllerNavigationClientProxy **)(*(_QWORD *)v9 + 24LL) != a3 )
  {
    v16 = (__int64 (__fastcall ***)(_QWORD))a3;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v16);
    v11 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 24) = a3;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  if ( *((_DWORD *)this + 56) == v5 )
    ControllerNavigationManager::SetCurrentStateWithClient(this, a3);
  return 0LL;
}
