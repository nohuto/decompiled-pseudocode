/*
 * XREFs of ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8
 * Callers:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC (-BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEA.c)
 * Callees:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z @ 0x18002E7D8 (-ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z.c)
 *     ?DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FDC0 (-DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUT.c)
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 *     ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238 (-InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800EA5C8 (-FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?InitializeGutterDirtiness@CBitmapInfoBack@DirectComposition@@QEAAXPEAV12@@Z @ 0x1800EA5FC (-InitializeGutterDirtiness@CBitmapInfoBack@DirectComposition@@QEAAXPEAV12@@Z.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::CreateFlipUpdate(
        DirectComposition::CBitmapInfoFront *this,
        struct IDCompositionSurface *a2,
        const struct tagRECT *a3,
        struct DirectComposition::CBitmapInfoBack **a4,
        struct DCOMPOSITION_GUTTERS *a5)
{
  int v5; // r12d
  unsigned int v9; // ebp
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  const struct tagRECT *v12; // r14
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  DirectComposition::CSurfaceFactory *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  DirectComposition::CBitmapInfoFront *v19; // rdi
  __int128 v20; // xmm6
  int v21; // edx
  int v22; // ecx
  struct DirectComposition::CAtlasSurface *v24[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+50h] [rbp-68h]

  v5 = (int)a2;
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v9 = 0;
  if ( DirectComposition::CBitmapInfoFront::ProcessPreviousSurfaceList(
         this,
         (struct DirectComposition::CBitmapInfoFront::SurfaceAndDirty *)v24) )
  {
    v11 = (volatile signed __int32 *)v24[0];
    v12 = (const struct tagRECT *)&v24[1];
    *((_QWORD *)v24[0] + 12) = 0LL;
  }
  else
  {
    v10 = DirectComposition::CBitmapInfoFront::RequestSurface(
            this,
            *((_DWORD *)this + 11),
            *((_DWORD *)this + 12),
            (DirectComposition::CAtlasSurfacePool ***)v24);
    v11 = (volatile signed __int32 *)v24[0];
    v12 = 0LL;
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_13;
  }
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 8u, 0xA8uLL);
  v15 = v14;
  if ( v14 )
  {
    v16 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 3);
    v17 = *((_DWORD *)this + 10);
    v14[2] = 0;
    *(_QWORD *)v14 = &DirectComposition::CBitmapInfo::`vftable';
    *((_QWORD *)v14 + 2) = v11;
    v14[11] = 0;
    v14[12] = 0;
    v14[10] = v17;
    *((_QWORD *)v14 + 3) = v16;
    if ( v16 )
      DirectComposition::CSurfaceFactory::AddRef(v16);
    v18 = *((_QWORD *)v15 + 2);
    if ( v18 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v18 + 8));
    *(_QWORD *)v15 = &DirectComposition::CBitmapInfoBack::`vftable';
    v15[32] = 0x7FFFFFFF;
    v15[30] = 0x7FFFFFFF;
    v15[28] = 0x7FFFFFFF;
    v15[26] = 0x7FFFFFFF;
    v15[33] = 0x80000000;
    v15[31] = 0x80000000;
    v15[29] = 0x80000000;
    v15[27] = 0x80000000;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 2));
    v19 = (DirectComposition::CBitmapInfoFront *)*((_QWORD *)this + 15);
    v20 = 0LL;
    if ( v19 )
    {
      v20 = *(_OWORD *)((char *)v19 + 88);
      DirectComposition::CBitmapInfoBack::InitializeGutterDirtiness(
        (DirectComposition::CBitmapInfoBack *)v15,
        *((struct DirectComposition::CBitmapInfoBack **)this + 15));
      DirectComposition::CBitmapInfoBack::FlushD2DRendering(*((DirectComposition::CBitmapInfoBack **)this + 15));
    }
    else
    {
      v19 = this;
    }
    DirectComposition::CBitmapInfoBack::InitializeFromSurface(
      (DirectComposition::CBitmapInfoBack *)v15,
      *((struct DirectComposition::CAtlasSurface **)v19 + 2),
      a3,
      v12);
    DirectComposition::CBitmapInfoBack::DirtyGuttersForUpdate((DirectComposition::CBitmapInfoBack *)v15, a3, a5);
    *(_OWORD *)(v15 + 22) = v20;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      McTemplateU0xxqdd_EventWriteTransfer(v22, v21, *((_QWORD *)v15 + 2), v5, 4);
    v11 = (volatile signed __int32 *)v24[0];
    *a4 = (struct DirectComposition::CBitmapInfoBack *)v15;
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_13:
  if ( v11 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v11);
  return v9;
}
