/*
 * XREFs of ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@_K@Z @ 0x180541640
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0 (-GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEA_K@Z @ 0x18017D080 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEA_K@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@0@XZ @ 0x18048C63C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 *     ??$_InsertAt@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@_K@Z @ 0x180540C58 (--$_InsertAt@AEBV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIVirtual.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180541B9C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 */

__int64 __fastcall CVirtualDesktopCollection::MoveDesktop(
        CVirtualDesktopCollection *this,
        __int64 a2,
        struct IUnknown *a3,
        unsigned __int64 a4)
{
  int DesktopIndex; // ebx
  __int64 v9; // rdx
  __int64 *DesktopCollectionForMonitor; // rax
  __int64 *v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  std::_Ref_count_base *v16; // rbx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v22; // [rsp+28h] [rbp-48h]
  _BYTE v23[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v24[24]; // [rsp+38h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v27; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v23);
  v21 = 0LL;
  DesktopIndex = CVirtualDesktopCollection::GetDesktopIndex(this, a2, a3, &v21);
  if ( DesktopIndex < 0 )
  {
    v9 = 229LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)DesktopIndex);
LABEL_4:
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    if ( v25 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
    return (unsigned int)DesktopIndex;
  }
  DesktopCollectionForMonitor = (__int64 *)CVirtualDesktopCollection::GetDesktopCollectionForMonitor(this, a2);
  v12 = DesktopCollectionForMonitor;
  if ( a4 >= DesktopCollectionForMonitor[1] )
  {
    DesktopIndex = -2147024809;
    v9 = 233LL;
    goto LABEL_3;
  }
  v13 = v21;
  if ( v21 == a4 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)0x8000FFFFLL);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v21,
      &v26);
    v14 = v21;
    tip::details::test_common_data<1>::begin_update(v21 + 8);
    v15 = v14 + 161;
    if ( !v14 )
      v15 = 17LL;
    *(_BYTE *)v15 = 1;
    if ( v14 )
    {
      tip::details::test_common_data<1>::end_update(v14 + 8);
      v16 = 0LL;
      if ( !v22 )
      {
LABEL_20:
        tip::details::test_common_data<1>::complete(v26 + 8);
LABEL_32:
        if ( v27 )
          std::_Ref_count_base::_Decref(v27);
        if ( v25 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
        return 0LL;
      }
      std::_Ref_count_base::_Decref(v22);
    }
    else
    {
      v16 = v22;
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    goto LABEL_20;
  }
  v21 = *(_QWORD *)(*DesktopCollectionForMonitor + 8 * v21);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v17 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
          v12,
          v13);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v19 = CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::_InsertAt<Microsoft::WRL::ComPtr<IVirtualDesktop> const &>(
            v12,
            (__int64 *)&v21,
            a4);
    DesktopIndex = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
      goto LABEL_4;
    }
    v20 = *((_QWORD *)this + 4);
    if ( v20 )
      (*(void (__fastcall **)(__int64, __int64, CVirtualDesktopCollection *))(*(_QWORD *)v20 + 24LL))(v20, a2, this);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  return v18;
}
