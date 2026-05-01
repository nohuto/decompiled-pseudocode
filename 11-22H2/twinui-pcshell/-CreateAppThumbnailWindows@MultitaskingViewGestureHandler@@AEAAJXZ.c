/*
 * XREFs of ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DDD4
 * Callers:
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DCC0 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180060D40 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180060D70 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCAppThumbnailWindow@@@std@@@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCAppThumbnailWindow@@@1@QEAV21@AEBV21@@Z @ 0x18054B8FC (--$_Emplace_reallocate@AEBV-$shared_ptr@VCAppThumbnailWindow@@@std@@@-$vector@V-$shared_ptr@VCAp.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?Create@CAppThumbnailWindow@@SA?AV?$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054DC28 (-Create@CAppThumbnailWindow@@SA-AV-$shared_ptr@VCAppThumbnailWindow@@@std@@AEBUCRect@Geometry@@P.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall MultitaskingViewGestureHandler::CreateAppThumbnailWindows(MultitaskingViewGestureHandler *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  char v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  struct IVirtualDesktop *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v17; // [rsp+38h] [rbp-59h] BYREF
  struct IVirtualDesktop *v18; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  __int64 v21; // [rsp+58h] [rbp-39h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp-31h]
  __int64 v23; // [rsp+68h] [rbp-29h] BYREF
  int v24; // [rsp+70h] [rbp-21h]
  unsigned int v25; // [rsp+78h] [rbp-19h] BYREF
  __int64 v26[2]; // [rsp+80h] [rbp-11h] BYREF
  HMONITOR v27; // [rsp+90h] [rbp-1h] BYREF
  int v28; // [rsp+98h] [rbp+7h] BYREF
  __int64 v29[3]; // [rsp+A0h] [rbp+Fh] BYREF
  char v30; // [rsp+B8h] [rbp+27h]
  __int128 v31; // [rsp+C0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 12) != *((_QWORD *)this + 13) )
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
  v19 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  v3 = *v2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 112))(v2, &v19);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_35;
  }
  v29[2] = (__int64)this;
  v6 = 1;
  v30 = 1;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v23,
    v19);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v25,
    (__int64)&v23,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v28,
    (__int64)&v23,
    v24);
  while ( 1 )
  {
    if ( v25 == v28 && v26[1] == v29[1] )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v29);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v26);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      v6 = 0;
      v5 = 0;
      goto LABEL_33;
    }
    v7 = v26[0];
    v20 = v26[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v17);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BA,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_23;
    }
    if ( v17 )
      break;
LABEL_23:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    ++v25;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v25);
  }
  v31 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 72LL))(v7, &v31);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v7 + 40LL))(v7, &v27);
    v5 = v9;
    if ( v9 < 0 )
    {
      v15 = 448LL;
      goto LABEL_31;
    }
    v10 = 0LL;
    v18 = 0LL;
    v11 = (__int64 *)*((_QWORD *)this + 15);
    if ( v11 )
    {
      v12 = *v11;
      v18 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop **))(v12 + 48))(v11, &v18);
      v5 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C5,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v13);
LABEL_28:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
        goto LABEL_32;
      }
      v10 = v18;
    }
    CAppThumbnailWindow::Create(
      &v21,
      (const struct Geometry::CRect *)&v31,
      *((struct IApplicationViewCollection **)this + 7),
      &v27,
      v10);
    if ( !v21 )
    {
      v5 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)0x8007000ELL);
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      goto LABEL_28;
    }
    v14 = (_QWORD *)*((_QWORD *)this + 13);
    if ( v14 == *((_QWORD **)this + 14) )
    {
      std::vector<std::shared_ptr<CAppThumbnailWindow>>::_Emplace_reallocate<std::shared_ptr<CAppThumbnailWindow> const &>(
        (_QWORD *)this + 12,
        *((char **)this + 13),
        &v21);
    }
    else
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v14,
        &v21);
      *((_QWORD *)this + 13) += 16LL;
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    goto LABEL_23;
  }
  v15 = 445LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v9);
LABEL_32:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
LABEL_33:
  if ( v6 )
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
LABEL_35:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  return v5;
}
