/*
 * XREFs of ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149788
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AFD0 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003443C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x1801495F8 (-FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z.c)
 */

void __fastcall EdgyProcessor::FeedAnimationDataIfNeeded(
        EdgyProcessor *this,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagPOINTF a4,
        unsigned __int8 a5)
{
  union _RTL_RUN_ONCE *v6; // r15
  __int64 v8; // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  void (__fastcall *v10)(struct IAnimationDataProvider *, __int64 *, __int64 *); // rsi
  __int64 (__fastcall *v11)(struct IAnimationDataProvider *, _QWORD *); // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int8 v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v24; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+40h] BYREF
  struct tagPOINT v26; // [rsp+C0h] [rbp+48h]

  v26 = a3;
  v25 = a2;
  v6 = (union _RTL_RUN_ONCE *)a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 19,
    &v24,
    (const unsigned __int8 *)&v25);
  if ( v24 != *((_QWORD *)this + 20) )
  {
    v8 = *(_QWORD *)(v24 + 24);
    v22[1] = v8;
    if ( v8 )
      (**(void (__fastcall ***)(__int64))v8)(v8);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v10 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, __int64 *))(*(_QWORD *)AnimationDataProvider
                                                                                       + 48LL);
    v21 = v8;
    if ( v8 )
      (**(void (__fastcall ***)(__int64))v8)(v8);
    v10(AnimationDataProvider, &v24, &v21);
    v11 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD *))(*(_QWORD *)AnimationDataProvider + 40LL);
    v22[0] = v8;
    if ( v8 )
      (**(void (__fastcall ***)(__int64))v8)(v8);
    v12 = v11(AnimationDataProvider, v22);
    v13 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    v14 = a5;
    InputETW::Edgy::FeedAnimationData(
      v6,
      v13,
      v12,
      *(_QWORD *)&a3,
      _mm_unpacklo_ps((__m128)LODWORD(a4.x), (__m128)LODWORD(a4.y)).m128_i64[0],
      a5);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24 + 8, 1LL);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3C5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
        (const char *)(unsigned int)v15,
        0);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 8) + 48LL))(v24 + 8, 2LL);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3C6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
        (const char *)(unsigned int)v16,
        0);
    LOBYTE(v17) = v14;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v24 + 8) + 24LL))(v24 + 8, 3LL, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3C7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
        (const char *)(unsigned int)v18,
        0);
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
}
