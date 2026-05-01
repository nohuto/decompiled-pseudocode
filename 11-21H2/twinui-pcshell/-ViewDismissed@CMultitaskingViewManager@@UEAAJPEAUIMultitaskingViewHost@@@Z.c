/*
 * XREFs of ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180052B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180052C3C (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180052DDC (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18049B3BC (-_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ViewDismissed(CMultitaskingViewManager *this, struct IUnknown *a2)
{
  CMultitaskingViewManager *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r15
  int v6; // r12d
  __int64 v7; // rdx
  int MatchingMTVHost; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v14; // rdx
  unsigned __int64 *v15; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v18; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+50h] BYREF

  v4 = (CMultitaskingViewManager *)((char *)this - 16);
  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewManager *)16));
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1LL);
  ((void (__fastcall *)(struct IUnknown *, unsigned int *))a2->lpVtbl[1].QueryInterface)(a2, &v17);
  v18 = 0LL;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
    v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  v15 = &v19;
  if ( v17 == 4 )
  {
    MatchingMTVHost = CMultitaskingViewManager::_FindMatchingMTVHost(v4, 4LL, a2, &v18);
    v9 = MatchingMTVHost;
    if ( MatchingMTVHost >= 0 )
      goto LABEL_3;
    v14 = 565LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MatchingMTVHost,
      (int)v15);
    goto LABEL_8;
  }
  MatchingMTVHost = CMultitaskingViewManager::_FindMTVHost(v4, v17, 0LL, &v18, &v19);
  v9 = MatchingMTVHost;
  if ( MatchingMTVHost < 0 )
  {
    v14 = 569LL;
    goto LABEL_14;
  }
LABEL_3:
  if ( (unsigned int)SHIsSameObject(v18, a2) )
    CMultitaskingViewManager::_DestroyMTVHost(v4, v19);
  LOBYTE(v11) = 3;
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    v10,
    v11);
  v12 = *((_QWORD *)this + 32);
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, *((unsigned int *)this + 80));
  v9 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v9;
}
