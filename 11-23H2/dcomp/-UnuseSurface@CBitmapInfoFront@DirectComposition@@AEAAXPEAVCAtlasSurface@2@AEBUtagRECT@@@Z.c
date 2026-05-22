/*
 * XREFs of ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC (-ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30 (-UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ.c)
 *     ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z @ 0x18002E7D8 (-ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::UnuseSurface(
        DirectComposition::CBitmapInfoFront *this,
        struct DirectComposition::CAtlasSurface *a2,
        const struct tagRECT *a3)
{
  char *v6; // rcx
  int v7; // edx
  char *v8; // rax
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  __int128 v11; // xmm0

  DirectComposition::CCompositorSynchronizedObject::UnUse((struct DirectComposition::CAtlasSurface *)((char *)a2 + 16));
  DirectComposition::CBitmapInfoFront::ProcessPreviousSurfaceList(this, 0LL);
  v6 = (char *)this + 176;
  if ( !*((_QWORD *)this + 22) )
  {
    v7 = 2;
    v8 = (char *)this + 152;
    do
    {
      v9 = *((_QWORD *)v8 + 2);
      v10 = *(_OWORD *)v8;
      v8 -= 24;
      *(_OWORD *)v6 = v10;
      *((_QWORD *)v6 + 2) = v9;
      v6 -= 24;
      --v7;
    }
    while ( v7 );
    v11 = (__int128)*a3;
    *((_QWORD *)this + 16) = a2;
    *(_OWORD *)((char *)this + 136) = v11;
    CMILRefCountImpl::AddReference((struct DirectComposition::CAtlasSurface *)((char *)a2 + 8));
  }
}
