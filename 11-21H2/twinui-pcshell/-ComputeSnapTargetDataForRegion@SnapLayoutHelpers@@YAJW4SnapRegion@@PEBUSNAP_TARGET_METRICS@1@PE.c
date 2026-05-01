/*
 * XREFs of ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 *     ?DetermineSnapRegionFromPoint@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@PEAUIImmersiveMonitor@@_N2@Z @ 0x1805A3540 (-DetermineSnapRegionFromPoint@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geometry@@PEAUIImm.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C (-GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ @ 0x1805959E4 (-Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ.c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     ?ComputeSnapTargetDataForRegionHelper@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@PEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A2244 (-ComputeSnapTargetDataForRegionHelper@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRIC.c)
 *     ?ExtendToMonitorEdges@SnapLayoutHelpers@@YAXAEBUCRect@Geometry@@W4SnapRegion@@AEBUSNAP_TARGET_METRICS@1@PEAU23@@Z @ 0x1805A3858 (-ExtendToMonitorEdges@SnapLayoutHelpers@@YAXAEBUCRect@Geometry@@W4SnapRegion@@AEBUSNAP_TARGET_ME.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeSnapTargetDataForRegion(
        unsigned int a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        SnapLayoutHelpers::SNAP_TARGET_DATA *a5)
{
  __int64 v8; // rdx
  SnapLayoutHelpers *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // al
  __int128 *v13; // rbx
  __int128 *v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // r8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-48h] BYREF
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  SnapLayoutHelpers::SNAP_TARGET_DATA::Reset(a5);
  v12 = SnapLayoutHelpers::AreQuadrantsEnabled(v9, v8, v10, v11);
  if ( a4 )
  {
    v13 = &xmmword_1807B3818;
    v14 = &xmmword_1807B3848;
  }
  else
  {
    v13 = &xmmword_1807B3878;
    v14 = &xmmword_1807B38A8;
  }
  if ( !v12 )
    v13 = v14;
  v15 = SnapLayoutHelpers::ComputeSnapTargetDataForRegionHelper(a1, v13, a3, a5);
  if ( v15 < 0 )
  {
    v16 = 1197LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  v18 = *a3;
  v25 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v18 + 72))(a3, &v25);
  if ( v15 < 0 )
  {
    v16 = 1201LL;
    goto LABEL_8;
  }
  v19 = *(_OWORD *)((char *)a5 + 4);
  v23 = *(_OWORD *)((char *)a5 + 20);
  v24 = v19;
  SnapLayoutHelpers::ExtendToMonitorEdges(&v25, a1, v13, &v23);
  SnapLayoutHelpers::ExtendToMonitorEdges(&v25, a1, v20, &v24);
  v21 = v23;
  *(_DWORD *)a5 = a1;
  result = 0LL;
  v22 = v24;
  *(_OWORD *)((char *)a5 + 20) = v21;
  *(_OWORD *)((char *)a5 + 4) = v22;
  return result;
}
