/*
 * XREFs of ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x18014525C
 * Callers:
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180146060 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180146B18 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003443C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x180145458 (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ResizeProcessor::FeedAnimationDataIfNeeded(ResizeProcessor *this, unsigned int a2, struct tagPOINT a3)
{
  unsigned __int64 v4; // r15
  __int64 v6; // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  void (__fastcall *v8)(struct IAnimationDataProvider *, __int64 *, __int64 *); // rsi
  __int64 (__fastcall *v9)(struct IAnimationDataProvider *, _QWORD *); // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v16; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+40h] BYREF
  struct tagPOINT v18; // [rsp+90h] [rbp+48h]
  __int64 v19; // [rsp+98h] [rbp+50h] BYREF

  v18 = a3;
  v17 = a2;
  v4 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 37,
    &v16,
    (const unsigned __int8 *)&v17);
  if ( v16 != *((_QWORD *)this + 38) )
  {
    v6 = *(_QWORD *)(v16 + 24);
    v14[1] = v6;
    if ( v6 )
      (**(void (__fastcall ***)(__int64))v6)(v6);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v8 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, __int64 *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 48LL);
    v19 = v6;
    if ( v6 )
      (**(void (__fastcall ***)(__int64))v6)(v6);
    v8(AnimationDataProvider, &v16, &v19);
    v9 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD *))(*(_QWORD *)AnimationDataProvider + 40LL);
    v14[0] = v6;
    if ( v6 )
      (**(void (__fastcall ***)(__int64))v6)(v6);
    v10 = v9(AnimationDataProvider, v14);
    v11 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    InputETW::Resize::FeedPositionData(v4, v11, v10, a3);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v16 + 8) + 48LL))(v16 + 8, 1LL);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2EE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
        (const char *)(unsigned int)v12,
        0);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
