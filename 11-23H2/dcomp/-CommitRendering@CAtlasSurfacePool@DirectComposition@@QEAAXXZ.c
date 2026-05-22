/*
 * XREFs of ?CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x1800E96E0
 * Callers:
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ?OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800FF2B8 (-OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV-$DynArrayIANoCtor@PEAUIUnknown@@$0.c)
 * Callees:
 *     ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180021E78 (-D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::CommitRendering(DirectComposition::CAtlasSurfacePool *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // eax

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    if ( *((int *)this + 44) <= 0 )
    {
      if ( (*((_BYTE *)this + 172) & 0x10) != 0 )
        DirectComposition::CAtlasSurfacePool::D2DEndDraw(this);
    }
    else
    {
      *((_DWORD *)this + 45) += 2;
      v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 24LL);
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 336LL))(v2, 0LL, 0LL);
      if ( *(int *)(v3 + 632) >= 0 && v4 < 0 )
        *(_DWORD *)(v3 + 632) = v4;
      *((_BYTE *)this + 172) |= 0x20u;
    }
  }
}
