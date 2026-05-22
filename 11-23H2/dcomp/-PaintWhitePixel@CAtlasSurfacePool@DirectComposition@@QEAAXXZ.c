/*
 * XREFs of ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C
 * Callers:
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z @ 0x180035064 (-UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::PaintWhitePixel(DirectComposition::CAtlasSurfacePool *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  LONG *v4; // r10
  unsigned int v5; // r8d
  LONG v6; // r9d
  unsigned int v7; // [rsp+20h] [rbp-30h]
  struct tagRECT v8; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 40);
  v2 = 0;
  v10 = 0LL;
  if ( v1 != 87 )
  {
    if ( v1 == 65 )
    {
      LOBYTE(v10) = -1;
      v2 = 1;
      goto LABEL_3;
    }
    if ( v1 == 10 )
    {
      v2 = 8;
      v10 = 0x3C003C003C003C00LL;
      goto LABEL_3;
    }
    if ( v1 != 28 )
      goto LABEL_3;
  }
  LODWORD(v10) = -1;
  v2 = 4;
LABEL_3:
  v4 = (LONG *)*((_QWORD *)this + 25);
  v5 = v4[22];
  v6 = v4[19];
  v8.left = v4[18];
  v8.top = v6;
  v8.right = v8.left + v4[20] + (v5 & 1) + ((v5 >> 1) & 1);
  v8.bottom = v6 + v4[21] + ((v5 >> 2) & 1) + ((v5 >> 3) & 1);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    (DirectComposition::SwapDeviceContextState *)v9,
    (const struct DirectComposition::CDxDevice *)((*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) != 0LL)));
  DirectComposition::CAtlasSurfacePool::RemoveGuardRect(this);
  DirectComposition::CAtlasSurfacePool::UpdateSubresource(this, &v8, &v10, v2, v7, 1);
  DirectComposition::CAtlasSurfacePool::RestoreGuardRect(this);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v9);
}
