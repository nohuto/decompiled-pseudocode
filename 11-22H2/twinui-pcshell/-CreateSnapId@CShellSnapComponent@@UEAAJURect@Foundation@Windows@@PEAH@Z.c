/*
 * XREFs of ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18065FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E1320 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$emplace@AEAHAEAURect@Foundation@Windows@@@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAHAEAURect@Foundation@Windows@@@Z @ 0x18065E90C (--$emplace@AEAHAEAURect@Foundation@Windows@@@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@.c)
 *     ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F328 (--1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x180663AB8 (-StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?Stop@CreateSnapId@CSnapComponentTelemetry@@QEAAXH@Z @ 0x180663F8C (-Stop@CreateSnapId@CSnapComponentTelemetry@@QEAAXH@Z.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CShellSnapComponent::CreateSnapId(__int64 a1, float *a2, _DWORD *a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  LONG v8; // ecx
  HMONITOR v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // r8d
  SnapRectHelpers *v15[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-198h] BYREF
  RECT rc; // [rsp+40h] [rbp-188h] BYREF
  volatile signed __int32 *v18[40]; // [rsp+50h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  *a3 = -1;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"CreateSnapId");
  v18[0] = (volatile signed __int32 *)&CSnapComponentTelemetry::CreateSnapId::`vftable';
  CSnapComponentTelemetry::CreateSnapId::StartActivity(
    (CSnapComponentTelemetry::CreateSnapId *)v18,
    (const struct Windows::Foundation::Rect *)a2);
  v6 = a2[1] + a2[3];
  v7 = *a2 + a2[2];
  v8 = (int)a2[1];
  rc.left = (int)*a2;
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v6;
  v9 = MonitorFromRect(&rc, 0);
  if ( !v9 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37F,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)0x80070057LL,
      (int)v15[0]);
  v15[0] = 0LL;
  v10 = *(__int64 **)(a1 + 88);
  v11 = *v10;
  v15[0] = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, SnapRectHelpers **))(v11 + 48))(v10, v9, v15);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x382,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12,
      (int)v15[0]);
  if ( !(unsigned int)SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(&rc, v15[0]) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x385,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)0x80070057LL,
      (int)v15[0]);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 1392));
  v15[1] = (SnapRectHelpers *)(a1 + 1392);
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::emplace<int &,Windows::Foundation::Rect &>(
    (float *)(a1 + 1408),
    (__int64)v16,
    (unsigned __int8 *)(a1 + 1400),
    a2);
  CShellSnapComponent::UpdateLaunchSnappedBehavior(a1 - 128);
  v13 = *(_DWORD *)(a1 + 1400);
  *(_DWORD *)(a1 + 1400) = v13 + 1;
  *a3 = v13;
  CSnapComponentTelemetry::CreateSnapId::Stop((CSnapComponentTelemetry::CreateSnapId *)v18, *(_DWORD *)(a1 + 1400));
  if ( a1 != -1392 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 1392));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v15);
  CSnapComponentTelemetry::CreateSnapId::~CreateSnapId(v18);
  return 0LL;
}
