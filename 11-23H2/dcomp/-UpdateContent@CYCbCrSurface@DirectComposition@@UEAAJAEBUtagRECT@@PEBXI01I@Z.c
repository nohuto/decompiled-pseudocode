/*
 * XREFs of ?UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z @ 0x1800FF320
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z @ 0x180035064 (-UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::UpdateContent(
        DirectComposition::CYCbCrSurface *this,
        const struct tagRECT *a2,
        const void *a3,
        unsigned int a4,
        const struct tagRECT *a5,
        void *a6,
        unsigned int a7)
{
  DirectComposition::CAtlasSurfacePool *v11; // rbx
  DirectComposition::CAtlasSurfacePool *v12; // r14
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  unsigned int v16; // [rsp+20h] [rbp-38h]
  const struct DirectComposition::CDxDevice *v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v11 = *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 64LL);
  v12 = *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL) + 64LL);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    v17,
    (DirectComposition::CDevice **)((*(_QWORD *)(*((_QWORD *)v11 + 18) + 128LL) + 8LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)v11 + 18) + 128LL) != 0LL)));
  DirectComposition::CAtlasSurfacePool::RemoveGuardRect(v11);
  DirectComposition::CAtlasSurfacePool::UpdateSubresource(v11, a2, a3, a4, v15, 0);
  DirectComposition::CAtlasSurfacePool::RestoreGuardRect(v11);
  DirectComposition::CAtlasSurfacePool::RemoveGuardRect(v12);
  DirectComposition::CAtlasSurfacePool::UpdateSubresource(v12, a5, a6, a7, v16, 0);
  DirectComposition::CAtlasSurfacePool::RestoreGuardRect(v12);
  if ( !*((_BYTE *)this + 72) )
  {
    v13 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 8) = *(_QWORD *)(v13 + 328);
    *(_QWORD *)(v13 + 328) = this;
    *((_BYTE *)this + 72) = 1;
  }
  *(_BYTE *)(*((_QWORD *)this + 6) + 68LL) |= 3u;
  *(_BYTE *)(*((_QWORD *)this + 7) + 68LL) |= 3u;
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v17);
  return 0LL;
}
