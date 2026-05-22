/*
 * XREFs of ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180021E78
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20 (-EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 *     ?CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x1800E96E0 (-CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::D2DEndDraw(DirectComposition::CAtlasSurfacePool *this)
{
  __int64 v2; // rdi
  int v3; // eax

  *((_DWORD *)this + 45) += 2;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 24LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 392LL))(
         *((_QWORD *)this + 7),
         0LL,
         0LL);
  if ( *(int *)(v2 + 632) >= 0 && v3 < 0 )
    *(_DWORD *)(v2 + 632) = v3;
  *((_BYTE *)this + 172) &= 0xCFu;
}
