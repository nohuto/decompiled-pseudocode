/*
 * XREFs of ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z @ 0x18002E7D8
 * Callers:
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ @ 0x18002E8C4 (-UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ.c)
 *     ?IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ @ 0x180085CEC (-IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CBitmapInfoFront::ProcessPreviousSurfaceList(
        DirectComposition::CBitmapInfoFront *this,
        struct DirectComposition::CBitmapInfoFront::SurfaceAndDirty *a2)
{
  struct DirectComposition::CBitmapInfoFront::SurfaceAndDirty *v2; // rbp
  unsigned int v4; // edi
  char *v5; // r14
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v9; // r15
  __int64 v10; // rcx

  v2 = a2;
  if ( a2 )
    DirectComposition::CDevice::UpdateLastConfirmedBatchId(*(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 24LL));
  v4 = 0;
  v5 = (char *)this + 128;
  v6 = 0LL;
  do
  {
    v7 = *(volatile signed __int32 **)v5;
    if ( !*(_QWORD *)v5 )
      break;
    if ( *((DirectComposition::CBitmapInfoFront **)v7 + 12) == this )
    {
      if ( v2
        && (v9 = v7 + 4,
            DirectComposition::CCompositorSynchronizedObject::IsAvailable((DirectComposition::CCompositorSynchronizedObject *)(v7 + 4))) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
        *(_OWORD *)v2 = *(_OWORD *)v5;
        *((_QWORD *)v2 + 2) = *((_QWORD *)v5 + 2);
        v2 = 0LL;
      }
      else
      {
        if ( (_DWORD)v6 != v4 )
        {
          v10 = 3 * v6;
          *(_OWORD *)((char *)this + 8 * v10 + 128) = *(_OWORD *)v5;
          *((_QWORD *)this + v10 + 18) = *((_QWORD *)v5 + 2);
        }
        v6 = (unsigned int)(v6 + 1);
      }
    }
    else
    {
      CMILRefCountBaseT<IUnknown>::InternalRelease(*(volatile signed __int32 **)v5);
    }
    ++v4;
    v5 += 24;
  }
  while ( v4 < 3 );
  while ( (_DWORD)v6 != v4 )
  {
    *((_QWORD *)this + 3 * v6 + 16) = 0LL;
    v6 = (unsigned int)(v6 + 1);
  }
  return v2 == 0LL;
}
