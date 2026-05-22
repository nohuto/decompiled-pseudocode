/*
 * XREFs of ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4
 * Callers:
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238 (-InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@.c)
 *     ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C (-PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBD40 (-RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?RestoreGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x1800FA9B0 (-RestoreGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ?UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z @ 0x1800FF320 (-UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z.c)
 * Callees:
 *     ?SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z @ 0x180039520 (-SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::RestoreGuardRect(DirectComposition::CAtlasSurfacePool *this)
{
  bool v1; // al
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  struct DirectComposition::CDxDevice *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 64) <= *((_DWORD *)this + 62) || *((_DWORD *)this + 65) <= *((_DWORD *)this + 63);
  v2 = !v1;
  v3 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    DirectComposition::CDxDevice::SetGuardRect(
      (DirectComposition::CDxDevice *)(*(_QWORD *)(v3 + 128) + 8LL),
      *((struct ID3D11Texture2D **)this + 4),
      (const struct tagRECT *)((char *)this + 248));
  }
  else
  {
    v4 = *(_QWORD *)(v3 + 128);
    v5 = *((_QWORD *)this + 4);
    DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
      (DirectComposition::MultithreadDeviceLock *)&v6,
      (const struct DirectComposition::CDxDevice *)(v4 + 8));
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 56LL))(*(_QWORD *)(v4 + 56), v5);
    DirectComposition::MultithreadDeviceLock::Leave(v6);
  }
}
