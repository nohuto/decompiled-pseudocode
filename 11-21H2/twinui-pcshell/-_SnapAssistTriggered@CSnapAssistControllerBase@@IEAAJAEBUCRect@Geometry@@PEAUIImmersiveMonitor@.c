/*
 * XREFs of ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18059ED14
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18059B9C0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x18059D900 (-TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppL.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@$$QEAHAEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059AAB4 (--$SnapAssistTriggered@AEBUCRect@Geometry@@HAEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetr.c)
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x18059B044 (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x18059DF28 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 *     ?_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Geometry@@@Z @ 0x18059E634 (-_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Ge.c)
 *     ?_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geometry@@W4SNAP_ASSIST_VIEW_FLAGS@@V?$shared_ptr@VGuidedSnapAssistData@@@std@@@Z @ 0x18059EAA8 (-_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geome.c)
 *     ?ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1805B5DEC (-ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIAppli.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistControllerBase::_SnapAssistTriggered(
        __int64 a1,
        __int128 *a2,
        struct IImmersiveMonitor *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  _BYTE *v12; // rsi
  int v13; // eax
  void *v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  const struct _GUID *v18; // r9
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rcx
  std::_Ref_count_base *v24; // rdi
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v29; // [rsp+38h] [rbp-18h]
  __int128 v30; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IObjectCollection *v32; // [rsp+80h] [rbp+30h] BYREF
  void *v33; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v32) = (__int64)(a4[1] - *a4) >> 3;
  CSnapComponentTelemetry::SnapAssistTriggered<Geometry::CRect const &,int,enum SNAP_ASSIST_VIEW_FLAGS &>(
    a2,
    (unsigned int *)&v32,
    (unsigned int *)&a6);
  v12 = a8;
  if ( a8 )
    *a8 = 0;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE **))(**(_QWORD **)(a1 + 104) + 32LL))(
          *(_QWORD *)(a1 + 104),
          3LL,
          &a8);
  if ( v13 >= 0 )
  {
    if ( !(_DWORD)a8
      || !CSnapAssistControllerBase::_IsValidSnapAssistLocation(retaddr, a3, (const struct Geometry::CRect *)a2) )
    {
      return 0LL;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
    v15 = CSnapAssistControllerBase::_CollectItemsForSnapAssist(
            (CSnapAssistControllerBase *)a1,
            v14,
            (__int64)a4,
            a5,
            (void **)&v32);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 452LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v15);
LABEL_21:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
      return v16;
    }
    v15 = ((__int64 (__fastcall *)(struct IObjectCollection *, _BYTE **))v32->lpVtbl->GetCount)(v32, &a8);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 455LL;
      goto LABEL_11;
    }
    if ( (_DWORD)a8 )
    {
      v33 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      v19 = ApplicationViewFilteredCollection_CreateInstance(
              *(struct IApplicationViewCollection **)(a1 + 72),
              *(struct IApplicationViewVisibilityDebouncedNotificationService **)(a1 + 80),
              v32,
              v18,
              &v33);
      v16 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CC,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v19);
LABEL_20:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
        goto LABEL_21;
      }
      v30 = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
        1u,
        v20,
        v21);
      v22 = std::make_shared<GuidedSnapAssistData,std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>> const &,std::deque<tagRECT> &,Geometry::CRect const &,int &>(
              &v28,
              (int)a4,
              (int)a1 + 160,
              (int)a2,
              &a7);
      v23 = *v22;
      v24 = (std::_Ref_count_base *)v22[1];
      *v22 = 0LL;
      v22[1] = 0LL;
      *(_QWORD *)&v30 = v23;
      *((_QWORD *)&v30 + 1) = v24;
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      v25 = std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
              &v28,
              &v30);
      v26 = CSnapAssistControllerBase::_ShowSnapAssist(a1, (__int64)v33, a2, a6, v25);
      v16 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D3,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v26);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        goto LABEL_20;
      }
      if ( v12 )
        *v12 = 1;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
    return 0LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2AB,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v13);
  return 0LL;
}
