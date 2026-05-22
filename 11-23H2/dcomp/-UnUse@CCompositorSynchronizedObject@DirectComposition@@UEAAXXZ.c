/*
 * XREFs of ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30
 * Callers:
 *     ?HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z @ 0x180007B80 (-HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z.c)
 *     ?ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CC30 (-ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ.c)
 *     ??_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z @ 0x18002A2D0 (--_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ??1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800FEB28 (--1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ.c)
 *     ?HandleSurfaceReclaimed@CYCbCrBitmapInfo@DirectComposition@@UEAAJ_N0@Z @ 0x1800FEEE0 (-HandleSurfaceReclaimed@CYCbCrBitmapInfo@DirectComposition@@UEAAJ_N0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositorSynchronizedObject::UnUse(
        DirectComposition::CCompositorSynchronizedObject *this)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // edi

  v2 = *(_QWORD *)this;
  if ( *((_DWORD *)this + 2) == 3 )
  {
    v3 = *(_DWORD *)((*(__int64 (**)(void))(v2 + 48))() + 416);
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 3) = v3;
    v5 = 4;
    (*(void (__fastcall **)(DirectComposition::CCompositorSynchronizedObject *, __int64))(v4 + 40))(this, 4LL);
  }
  else
  {
    v5 = 1;
    (*(void (__fastcall **)(DirectComposition::CCompositorSynchronizedObject *, __int64))(v2 + 40))(this, 1LL);
  }
  *((_DWORD *)this + 2) = v5;
}
