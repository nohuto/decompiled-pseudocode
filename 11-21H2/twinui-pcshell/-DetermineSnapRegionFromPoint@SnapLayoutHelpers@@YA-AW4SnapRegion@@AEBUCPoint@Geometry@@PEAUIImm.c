/*
 * XREFs of ?DetermineSnapRegionFromPoint@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@PEAUIImmersiveMonitor@@_N2@Z @ 0x1805A3540
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1804B8170 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ??0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ @ 0x180591894 (--0SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAA@XZ.c)
 *     ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8 (-ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PE.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromPoint(const struct tagPOINT *a1, __int64 *a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  char *v9; // rax
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-48h] BYREF
  char v13; // [rsp+44h] [rbp-44h] BYREF
  char v14; // [rsp+54h] [rbp-34h] BYREF

  v3 = 0;
  v7 = 1LL;
  while ( 1 )
  {
    SnapLayoutHelpers::SNAP_TARGET_DATA::SNAP_TARGET_DATA((SnapLayoutHelpers::SNAP_TARGET_DATA *)&v12);
    if ( (int)SnapLayoutHelpers::ComputeSnapTargetDataForRegion(
                v7,
                v8,
                a2,
                0,
                (SnapLayoutHelpers::SNAP_TARGET_DATA *)&v12) >= 0 )
    {
      v9 = &v14;
      if ( a3 )
        v9 = &v13;
      v11 = *(_OWORD *)v9;
      if ( Geometry::CRect::Contains((Geometry::CRect *)&v11, a1) )
        break;
    }
    if ( (unsigned __int64)++v7 >= 0xB )
      return v3;
  }
  return v12;
}
