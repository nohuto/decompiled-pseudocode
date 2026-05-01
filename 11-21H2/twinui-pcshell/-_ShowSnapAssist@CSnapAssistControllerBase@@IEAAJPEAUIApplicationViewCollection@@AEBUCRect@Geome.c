/*
 * XREFs of ?_ShowSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIApplicationViewCollection@@AEBUCRect@Geometry@@W4SNAP_ASSIST_VIEW_FLAGS@@V?$shared_ptr@VGuidedSnapAssistData@@@std@@@Z @ 0x18059EAA8
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18059ED14 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18017E520 (--0-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microso.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     MakeMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE488 (MakeMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___.c)
 *     _lambda_257868cc277a89cd587da3eed8fcd545_::__lambda_257868cc277a89cd587da3eed8fcd545_ @ 0x1801BE674 (_lambda_257868cc277a89cd587da3eed8fcd545_--__lambda_257868cc277a89cd587da3eed8fcd545_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ShowSnapAssist@AEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059A93C (--$ShowSnapAssist@AEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAX.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSnapAssistControllerBase::_ShowSnapAssist(__int64 a1, __int64 a2, __int128 *a3, int a4, _QWORD *a5)
{
  __int128 v9; // xmm6
  int v10; // eax
  int v11; // ebx
  int MultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v15; // rdx
  std::_Ref_count_base *v16; // rcx
  __int64 v18; // [rsp+28h] [rbp-51h] BYREF
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-31h] BYREF
  int v23; // [rsp+58h] [rbp-21h] BYREF
  __int128 v24; // [rsp+5Ch] [rbp-1Dh]
  __int64 v25; // [rsp+70h] [rbp-9h] BYREF
  __int64 v26; // [rsp+78h] [rbp-1h] BYREF
  __int64 v27; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  LODWORD(v18) = a4;
  v22[1] = a5;
  CSnapComponentTelemetry::ShowSnapAssist<Geometry::CRect const &,enum SNAP_ASSIST_VIEW_FLAGS &>(
    a3,
    (unsigned int *)&v18);
  v9 = *a3;
  v20 = 0LL;
  LODWORD(v18) = 2;
  v22[0] = (a1 + 16) & -(__int64)(a1 != 0);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          &v20,
          (__int64)&GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
          v22,
          (unsigned int *)&v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
  v19 = 0LL;
  v18 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  v23 = a4;
  v24 = v9;
  v25 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
  Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>(
    &v26,
    &v20);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v27,
    a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  MultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545 = MakeMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545_(
                                                                            &v19,
                                                                            (__int64)&v23);
  v11 = MultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545;
  if ( MultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545 >= 0 )
  {
    v21 = 0LL;
    v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 56);
    v14 = **v13;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    v11 = v14(v13, &GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2, &v21);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, v19, 2LL);
      if ( v11 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
        goto LABEL_11;
      }
      v15 = 760LL;
    }
    else
    {
      v15 = 754LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F0,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545);
LABEL_11:
  lambda_257868cc277a89cd587da3eed8fcd545_::__lambda_257868cc277a89cd587da3eed8fcd545_((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  v16 = (std::_Ref_count_base *)a5[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  return (unsigned int)v11;
}
