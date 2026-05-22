/*
 * XREFs of ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180172188
 * Callers:
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180172DE0 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801736E4 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003E4B0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800E6314 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x18017236C (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ResizeProcessor::FeedAnimationDataIfNeeded(ResizeProcessor *this, unsigned int a2, struct tagPOINT a3)
{
  unsigned __int64 v4; // r15
  void (__fastcall ***v6)(_QWORD); // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  void (__fastcall *v8)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)); // r14
  __int64 (__fastcall *v9)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD); // [rsp+30h] [rbp-18h] BYREF
  void (__fastcall ***v15)(_QWORD); // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v17; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+40h] BYREF
  struct tagPOINT v19; // [rsp+90h] [rbp+48h]
  void (__fastcall ***v20)(_QWORD); // [rsp+98h] [rbp+50h] BYREF

  v19 = a3;
  v18 = a2;
  v4 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 37,
    &v17,
    (const unsigned __int8 *)&v18);
  if ( v17 != *((_QWORD *)this + 38) )
  {
    v6 = *(void (__fastcall ****)(_QWORD))(v17 + 24);
    v15 = v6;
    if ( v6 )
      (**v6)(v6);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v8 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 48LL);
    v20 = v6;
    if ( v6 )
      (**v6)(v6);
    v8(AnimationDataProvider, &v17, &v20);
    v9 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 40LL);
    v14 = v6;
    if ( v6 )
      (**v6)(v6);
    v10 = v9(AnimationDataProvider, &v14);
    v11 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    InputETW::Resize::FeedPositionData(v4, v11, v10, a3);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v17 + 8) + 48LL))(v17 + 8, 1LL);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2EE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
        (const char *)(unsigned int)v12,
        0);
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v15);
  }
}
