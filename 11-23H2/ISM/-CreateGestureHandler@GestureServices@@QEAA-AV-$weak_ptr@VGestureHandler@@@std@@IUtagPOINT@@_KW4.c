/*
 * XREFs of ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180060474
 * Callers:
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x1800619A8 (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180060090 (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??$?0VGestureHandler@@$0A@@?$weak_ptr@VGestureHandler@@@std@@QEAA@AEBV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x1801526C0 (--$-0VGestureHandler@@$0A@@-$weak_ptr@VGestureHandler@@@std@@QEAA@AEBV-$shared_ptr@VGestureHandl.c)
 *     ??$emplace@AEAIV?$shared_ptr@VGestureHandler@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x180152AA0 (--$emplace@AEAIV-$shared_ptr@VGestureHandler@@@std@@@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGes.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180153290 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureServices::CreateGestureHandler(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  _QWORD *shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd; // rax
  int v9; // [rsp+20h] [rbp-50h]
  unsigned int v10[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 ProcessorTypeString; // [rsp+80h] [rbp+10h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v17 = a3;
  v10[0] = 2;
  *(_QWORD *)&v11 = a1;
  *((_QWORD *)&v11 + 1) = a4;
  v12 = a5;
  v6 = a1 + 200;
  a5 = *(_QWORD *)(a1 + 88);
  ProcessorTypeString = GestureServices::GetProcessorTypeString();
  shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd = std::make_shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(&v13, v10, &ProcessorTypeString, &a5, &v11);
  std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::emplace<unsigned int &,std::shared_ptr<GestureHandler>>(
    v6,
    &v11,
    &v17,
    shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( !BYTE8(v11) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)0x80070057LL,
      v9);
  std::weak_ptr<GestureHandler>::weak_ptr<GestureHandler>(a2, v11 + 24);
  return a2;
}
