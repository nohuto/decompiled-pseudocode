/*
 * XREFs of ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1806689C8
 * Callers:
 *     ?AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066A26C (-AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV-$deque@Uta.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1802D4AE2 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1802E7FEC (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 *     ??$remove_if@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@V10@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@Z @ 0x180669B90 (--$remove_if@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@.c)
 *     ?ResizeSnapRegion@CSnapAssistControllerBase@@IEBA?AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z @ 0x18066B650 (-ResizeSnapRegion@CSnapAssistControllerBase@@IEBA-AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x180673838 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 **__fastcall CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::deque<tagRECT>>(
        __int64 a1,
        HWND a2,
        __int64 *a3,
        SnapRectHelpers *a4)
{
  __int64 v7; // rax
  int v8; // eax
  struct IImmersiveMonitor *v9; // rdx
  unsigned int v10; // eax
  unsigned int SnapRegionAnchorLocations; // eax
  __int64 v12; // rdi
  __int64 v13; // r11
  __int64 v14; // rsi
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r11
  _OWORD *v18; // rax
  _OWORD *v19; // r11
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 **v23; // rax
  __int64 *v24; // rdx
  __int64 *v25; // rax
  int v27; // [rsp+20h] [rbp-59h]
  int v28; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-39h]
  __int64 v31; // [rsp+48h] [rbp-31h]
  __int64 *v32; // [rsp+50h] [rbp-29h] BYREF
  __int64 v33; // [rsp+58h] [rbp-21h]
  __int64 v34; // [rsp+60h] [rbp-19h]
  _QWORD v35[3]; // [rsp+68h] [rbp-11h] BYREF
  char v36[24]; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT pvAttribute; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v38; // [rsp+A8h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v7 = *(_QWORD *)a4;
  v38 = 0LL;
  v8 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(v7 + 88))(a4, &v38);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v8,
      v27);
  v10 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v9);
  SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&pvAttribute, &v38, v10);
  v12 = a3[3];
  v13 = v12;
  v14 = v12 + a3[4];
  v28 = dword_1808A3E90[SnapRegionAnchorLocations];
  while ( v13 != v14 )
  {
    if ( Geometry::CRect::Intersects(
           (Geometry::CRect *)&pvAttribute,
           *(const struct tagRECT **)(a3[1] + 8 * (v13 & (a3[2] - 1)))) )
    {
      while ( v12 != v14 )
      {
        v16 = v12 & (a3[2] - 1);
        v17 = *(_QWORD *)(a3[1] + 8 * v16);
        v29 = *(__int64 **)v17;
        v30 = *(_QWORD *)(v17 + 8);
        v18 = (_OWORD *)((__int64 (__fastcall *)(__int64, __int64 **, int *, __int128 *, struct tagRECT *, __int64 **))CSnapAssistControllerBase::ResizeSnapRegion)(
                          v16,
                          &v32,
                          &v28,
                          &v38,
                          &pvAttribute,
                          &v29);
        ++v12;
        *v19 = *v18;
      }
      break;
    }
    v13 = v15 + 1;
  }
  v20 = a3[3];
  v21 = (__int64 *)*a3;
  v22 = a3[4];
  v35[1] = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v35[2] = v20 + v22;
  v34 = v20 + v22;
  v31 = v20;
  v35[0] = v21;
  v32 = v21;
  v29 = v21;
  v23 = (__int64 **)std::remove_if<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,_lambda_f9bbe9b79fcb587def877da126a47fb9_>(
                      v36,
                      &v29,
                      &v32);
  v33 = 0LL;
  v24 = *v23;
  v25 = v23[2];
  v32 = v24;
  v34 = (__int64)v25;
  return std::deque<tagRECT>::erase(a3, &v29, (__int64)&v32, (__int64)v35);
}
