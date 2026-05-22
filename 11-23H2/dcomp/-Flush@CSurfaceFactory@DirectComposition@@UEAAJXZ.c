/*
 * XREFs of ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ @ 0x180027B98 (-ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ.c)
 *     ?FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z @ 0x1800840A8 (-FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ @ 0x1800EA888 (-FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ.c)
 *     ?FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ @ 0x1800FBA18 (-FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ.c)
 *     ?FlushD2DContexts@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800FBC54 (-FlushD2DContexts@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::Flush(DirectComposition::CSurfaceFactory *this)
{
  int v2; // edi
  __int64 i; // rbx
  _QWORD *j; // rbp
  __int64 v5; // rbx
  __int64 v6; // rbx
  struct DirectComposition::CDxDevice *v8; // [rsp+40h] [rbp+8h] BYREF
  DirectComposition::CDeviceLock *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v9 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v9);
  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
    &v8,
    (DirectComposition::CDevice **)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  DirectComposition::CSurfaceManager::FlushD2DContexts(*((DirectComposition::CSurfaceManager **)this + 39));
  for ( i = *((_QWORD *)this + 40); i && v2 >= 0; i = *(_QWORD *)(i + 104) )
  {
    v2 = 0;
    if ( DirectComposition::CBitmapInfoFront::FlushD2D((DirectComposition::CBitmapInfoFront *)i) )
      v2 = DirectComposition::CBitmapInfoBack::ExtendEdgesForInvalidGutters(*(DirectComposition::CBitmapInfoBack **)(i + 120));
  }
  for ( j = (_QWORD *)*((_QWORD *)this + 41); j; j = (_QWORD *)j[8] )
  {
    if ( v2 < 0 )
      goto LABEL_13;
    v5 = j[6];
    DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
      *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v5 + 16) + 64LL),
      *(_DWORD *)(v5 + 64));
    *(_DWORD *)(v5 + 64) = 0;
    v6 = j[7];
    DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
      *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v6 + 16) + 64LL),
      *(_DWORD *)(v6 + 64));
    *(_DWORD *)(v6 + 64) = 0;
  }
  if ( v2 >= 0 )
    v2 = DirectComposition::CSurfaceFactory::FlushGutterExtensions(this);
LABEL_13:
  DirectComposition::MultithreadDeviceLock::Leave(v8);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v9);
  return (unsigned int)v2;
}
