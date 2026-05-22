/*
 * XREFs of ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C
 * Callers:
 *     ?CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ @ 0x1800F9AD8 (-CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ @ 0x180027B98 (-ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x1800E96E0 (-CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::CommitUpdate(DirectComposition::CBitmapInfoFront *this)
{
  DirectComposition::CBitmapInfoBack **v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbp
  struct DirectComposition::CAtlasSurface *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagRECT v9; // [rsp+20h] [rbp-18h] BYREF

  v1 = (DirectComposition::CBitmapInfoBack **)((char *)this + 120);
  v2 = 0;
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    DirectComposition::CAtlasSurfacePool::CommitRendering(*(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v3 + 16) + 64LL));
    *(_DWORD *)(v3 + 164) = 0;
    v5 = (struct DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
    if ( *((struct DirectComposition::CAtlasSurface **)*v1 + 2) != v5 )
    {
      v9 = *(struct tagRECT *)((char *)*v1 + 88);
      DirectComposition::CBitmapInfoFront::UnuseSurface(this, v5, &v9);
      CMILRefCountBaseT<IUnknown>::InternalRelease(*((volatile signed __int32 **)this + 2));
      v6 = *((_QWORD *)*v1 + 2);
      *((_QWORD *)this + 2) = v6;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
      *(_QWORD *)(*((_QWORD *)this + 2) + 96LL) = this;
      DirectComposition::CDirtyNotifier::InvalidateListeners((__int64)this + 56, 0LL);
    }
    v7 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v7 + 24) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 16) + 40LL))(v7 + 16, 3LL);
      *(_DWORD *)(v7 + 24) = 3;
    }
    v2 = DirectComposition::CBitmapInfoBack::ExtendEdgesForInvalidGutters(*v1);
    ReleaseInterface<DirectComposition::CBitmapInfoBack>((__int64 *)v1);
  }
  return v2;
}
