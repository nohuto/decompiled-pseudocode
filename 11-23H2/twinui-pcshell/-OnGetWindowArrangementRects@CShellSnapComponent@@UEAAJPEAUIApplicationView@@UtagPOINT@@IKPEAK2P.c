/*
 * XREFs of ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA56C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801143CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@@Z @ 0x180228684 (-ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@UtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802E8E48 (--1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1805A2540 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1805A2540.c)
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18065D33C (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 *     ??1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F484 (--1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??4OnSnappingCancelled@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18065F660 (--4OnSnappingCancelled@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_N@Z @ 0x1806611A8 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 *     ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x180663D40 (-StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z.c)
 *     ?StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z @ 0x180663E1C (-StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z.c)
 *     ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z @ 0x1806641F4 (-Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z.c)
 *     ?_EnsureWindowModel@CShellSnapComponent@@AEAAJPEAUIApplicationView@@@Z @ 0x180665928 (-_EnsureWindowModel@CShellSnapComponent@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F050 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     ?CurrentSnappingMode@SnapLayoutProvider@@QEBA?AW4WINDOW_SNAPPING_MODE@@XZ @ 0x18067FA34 (-CurrentSnappingMode@SnapLayoutProvider@@QEBA-AW4WINDOW_SNAPPING_MODE@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CShellSnapComponent::OnGetWindowArrangementRects(
        CShellSnapComponent *this,
        struct IApplicationView *a2,
        struct tagPOINT a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        LPRECT lprc,
        LPRECT lprcDst)
{
  unsigned int *v11; // rsi
  unsigned int *v12; // r15
  struct tagRECT *v13; // r12
  struct tagRECT *v14; // r13
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // edi
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  char v23; // r14
  int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // edi
  __int64 result; // rax
  __int64 v30; // r8
  char v31; // cl
  __int64 v32; // rax
  const char *v33; // r9
  __int64 v34; // [rsp+30h] [rbp-4D8h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-4D0h]
  _BYTE v36[4]; // [rsp+3Ch] [rbp-4CCh] BYREF
  struct tagPOINT v37; // [rsp+40h] [rbp-4C8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-4C0h] BYREF
  struct IApplicationView *v39; // [rsp+50h] [rbp-4B8h]
  _QWORD v40[3]; // [rsp+58h] [rbp-4B0h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-498h]
  char v42; // [rsp+74h] [rbp-494h]
  unsigned int v43; // [rsp+78h] [rbp-490h]
  char v44; // [rsp+7Ch] [rbp-48Ch]
  __int128 v45; // [rsp+80h] [rbp-488h]
  _BYTE v46[36]; // [rsp+90h] [rbp-478h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-450h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-440h] BYREF
  unsigned int v49; // [rsp+D8h] [rbp-430h] BYREF
  __int128 v50; // [rsp+DCh] [rbp-42Ch]
  _QWORD v51[40]; // [rsp+100h] [rbp-408h] BYREF
  _QWORD v52[40]; // [rsp+240h] [rbp-2C8h] BYREF
  _QWORD v53[40]; // [rsp+380h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+0h]

  v35 = a4;
  v39 = a2;
  v37 = a3;
  v11 = a6;
  v12 = a7;
  v13 = lprc;
  v14 = lprcDst;
  *a7 = 0;
  *v11 = 0;
  SetRectEmpty(v13);
  SetRectEmpty(v14);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v51,
    (__int64)"OnGetWindowArrangementRects");
  v51[0] = &CSnapComponentTelemetry::OnGetWindowArrangementRects::`vftable';
  v15 = a5;
  CSnapComponentTelemetry::OnGetWindowArrangementRects::StartActivity(
    (CSnapComponentTelemetry::OnGetWindowArrangementRects *)v51,
    v37,
    v35,
    a5);
  if ( a2 )
  {
    v16 = CShellSnapComponent::_EnsureWindowModel((CShellSnapComponent *)((char *)this - 144), a2);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x442,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v16);
LABEL_15:
      CSnapComponentTelemetry::OnGetWindowArrangementRects::~OnGetWindowArrangementRects((CSnapComponentTelemetry::OnGetWindowArrangementRects *)v51);
      return v17;
    }
  }
  v34 = 0LL;
  v18 = (__int64 *)*((_QWORD *)this + 9);
  v19 = *v18;
  v34 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64 *, struct tagPOINT *, GUID *, GUID *, __int64 *))(v19 + 96))(
          v18,
          &v37,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &v34);
  v17 = v20;
  if ( v20 < 0 )
  {
    v21 = (unsigned int)v20;
    v22 = 1094LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 777) )
    SnapFlyoutHost::ShowSnapBarOnMonitorAsync(*((_QWORD *)this + 96), v36, *(_QWORD *)&v37);
  v23 = ((v15 - 4) & 0xFFFFFFFB) == 0;
  v48 = 0LL;
  v47 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v34 + 72LL))(v34, &v48);
  v17 = v24;
  if ( v24 < 0 )
  {
    v21 = (unsigned int)v24;
    v22 = 1107LL;
    goto LABEL_14;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v34 + 88LL))(v34, &v47);
  v17 = v25;
  if ( v25 < 0 )
  {
    v21 = (unsigned int)v25;
    v22 = 1108LL;
    goto LABEL_14;
  }
  CShellSnapComponent::GetSnapRegionAndSafetyRectForPoint(
    (__int64)this - 144,
    (__int64)&v49,
    &v48,
    (__int64)&v47,
    (int *)&v37,
    v23);
  v28 = v49;
  if ( !v49 )
  {
    v17 = -2147418113;
    v21 = 2147549183LL;
    v22 = 1119LL;
    goto LABEL_14;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
    1u,
    v26,
    v27);
  if ( *((_BYTE *)this + 1012) )
  {
    v38 = v34;
    CSnapComponentTelemetry::SnapRegionDetected<tagPOINT &,enum SnapRegion const &,unsigned long &,IImmersiveMonitor *>(
      &v37,
      &v49,
      &a5,
      &v38);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v52,
    (__int64)"OnSnappingCancelled");
  v52[0] = &CSnapComponentTelemetry::OnSnappingCancelled::`vftable';
  LOBYTE(v30) = *((_BYTE *)this + 1012);
  CSnapComponentTelemetry::OnSnappingCancelled::StartActivity(v52, v28, v30, a5);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v53,
    (__int64)v52,
    0);
  v53[0] = &CSnapComponentTelemetry::OnSnappingCancelled::`vftable';
  CSnapComponentTelemetry::OnSnappingCancelled::operator=((_QWORD *)this + 130, (__int64)v53);
  CSnapComponentTelemetry::OnSnappingCancelled::~OnSnappingCancelled((CSnapComponentTelemetry::OnSnappingCancelled *)v53);
  CSnapComponentTelemetry::OnSnappingCancelled::~OnSnappingCancelled((CSnapComponentTelemetry::OnSnappingCancelled *)v52);
  if ( (v35 & 2) != 0 )
    v31 = 0;
  else
    v31 = *((_BYTE *)this + 300);
  try
  {
    v40[0] = v39;
    v40[1] = *((_QWORD *)this + 11);
    v40[2] = v37;
    v41 = v35;
    v42 = v23;
    v43 = v28;
    v44 = v31;
    v45 = v50;
    memset(&v46[4], 0, 32);
    v32 = SnapLayoutProvider::CalculateSnapRegion(*((_QWORD *)this + 55), &v49, v40);
    *(_OWORD *)v46 = *(_OWORD *)v32;
    *(_OWORD *)&v46[16] = *(_OWORD *)(v32 + 16);
    *(_DWORD *)&v46[32] = *(_DWORD *)(v32 + 32);
    *((_DWORD *)this + 232) = SnapLayoutProvider::CurrentSnappingMode(*((_QWORD *)this + 55));
    *v11 |= 1u;
    CopyRect(v14, (const RECT *)&v46[20]);
    if ( !v46[0] )
    {
      *v12 = 1;
      CopyRect(v13, (const RECT *)&v46[4]);
    }
    CSnapComponentTelemetry::OnGetWindowArrangementRects::Stop(
      (CSnapComponentTelemetry::OnGetWindowArrangementRects *)v51,
      *v11,
      *v12,
      v14,
      v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
    CSnapComponentTelemetry::OnGetWindowArrangementRects::~OnGetWindowArrangementRects((CSnapComponentTelemetry::OnGetWindowArrangementRects *)v51);
    result = 0LL;
  }
  catch ( ... )
  {
    v35 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x47E,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            v33);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
    CSnapComponentTelemetry::OnGetWindowArrangementRects::~OnGetWindowArrangementRects((CSnapComponentTelemetry::OnGetWindowArrangementRects *)v51);
    return v35;
  }
  return result;
}
