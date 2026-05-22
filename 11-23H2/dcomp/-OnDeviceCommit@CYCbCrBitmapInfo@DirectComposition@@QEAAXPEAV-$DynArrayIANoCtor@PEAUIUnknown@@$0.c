/*
 * XREFs of ?OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800FF2B8
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800E91D4 (-AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV-$DynArrayIANoCtor@PEAUIUnknown@@.c)
 *     ?CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x1800E96E0 (-CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CYCbCrBitmapInfo::OnDeviceCommit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( (int)DirectComposition::CAtlasSurface::AddTokenInformation(*(_QWORD *)(a1 + 16), a2, a3) >= 0 )
  {
    DirectComposition::CAtlasSurfacePool::CommitRendering(*(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(a1 + 16) + 64LL));
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v4 + 24) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 16) + 40LL))(v4 + 16, 3LL);
      *(_DWORD *)(v4 + 24) = 3;
    }
  }
}
