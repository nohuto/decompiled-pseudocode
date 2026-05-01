/*
 * XREFs of ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x1805FC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1800DF144 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ @ 0x18013F508 (-RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z @ 0x1801B7230 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?A_PXZ @ 0x180540D4C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 *     ??$_InsertAt@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@_K@Z @ 0x1805FB9D8 (--$_InsertAt@AEBV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIVirtual.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1805FC3C8 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 */

__int64 __fastcall CVirtualDesktopCollection::MoveDesktop(
        CVirtualDesktopCollection *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **),
        unsigned __int64 a3)
{
  CVirtualDesktopCollection *v6; // rcx
  int DesktopIndex; // eax
  int v8; // edi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v17; // [rsp+28h] [rbp-48h]
  _BYTE v18[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v19[24]; // [rsp+38h] [rbp-38h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v24; // [rsp+A8h] [rbp+38h] BYREF

  tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v18);
  v24 = 0;
  if ( (int)CVirtualDesktopCollection::IsRemote(v6, a2, &v24) >= 0 && v24 )
    goto LABEL_12;
  v16 = 0LL;
  DesktopIndex = CVirtualDesktopCollection::GetDesktopIndex(this, a2, &v16);
  v8 = DesktopIndex;
  if ( DesktopIndex < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)DesktopIndex);
LABEL_5:
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    return (unsigned int)v8;
  }
  if ( a3 >= *((_QWORD *)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)0x80070057LL);
LABEL_12:
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    return 2147942487LL;
  }
  v10 = v16;
  if ( v16 != a3 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v16);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
           (char *)this + 48,
           v10);
    if ( v8 >= 0 )
    {
      v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::_InsertAt<Microsoft::WRL::ComPtr<IVirtualDesktop> const &>(
             (_QWORD *)this + 6,
             (__int64 *)&v16,
             a3);
      if ( v8 >= 0 )
      {
        CVirtualDesktopCollection::RecalculateCopyOfAllDesktops(this);
        v15 = *((_QWORD *)this + 4);
        if ( v15 )
          (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v15 + 24LL))(v15, this);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
        goto LABEL_35;
      }
      v14 = 312LL;
    }
    else
    {
      v14 = 311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    goto LABEL_5;
  }
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x130,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)0x8000FFFFLL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v16,
    &v21);
  v11 = v16;
  tip::details::test_common_data<1>::begin_update(v16 + 8);
  v12 = v11 + 197;
  if ( !v11 )
    v12 = 21LL;
  *(_BYTE *)v12 = 1;
  if ( v11 )
  {
    tip::details::test_common_data<1>::end_update(v11 + 8);
    v13 = 0LL;
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  else
  {
    v13 = v17;
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  tip::details::test_common_data<1>::complete(v21 + 8);
LABEL_35:
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
  return 0LL;
}
