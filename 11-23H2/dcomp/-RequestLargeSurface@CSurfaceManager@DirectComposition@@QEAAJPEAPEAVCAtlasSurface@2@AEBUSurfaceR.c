/*
 * XREFs of ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950
 * Callers:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC (-Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4D.c)
 * Callees:
 *     ?CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2@@Z @ 0x180009380 (-CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2.c)
 *     ?Reuse@CAtlasSurface@DirectComposition@@QEAAXIIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@@Z @ 0x18000EB4C (-Reuse@CAtlasSurface@DirectComposition@@QEAAXIIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@@Z.c)
 *     ?ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@_NPEAVSizeU@2@PEAUDCOMPOSITION_GUTTERS@@PEA_N@Z @ 0x18001E784 (-ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestSt.c)
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x18001EB64 (-DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 *     ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8 (-Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z @ 0x180034780 (-Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::RequestLargeSurface(
        DirectComposition::CSurfaceManager *this,
        DirectComposition::CAtlasSurfacePool ***a2,
        const struct DirectComposition::SurfaceRequestStruct *a3,
        char a4)
{
  DirectComposition::CAtlasSurfacePool **v4; // rbx
  int v8; // edi
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  DirectComposition::CSurfaceManager *v11; // rax
  DirectComposition::CAtlasSurface *v12; // r9
  enum DXGI_FORMAT v13; // r8d
  DirectComposition::CSurfaceManager **v14; // rdx
  DirectComposition::CSurfaceManager *v15; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  enum DXGI_FORMAT v20; // r8d
  struct DirectComposition::CAtlasSurface *v21; // [rsp+30h] [rbp-20h] BYREF
  DirectComposition::CAtlasSurfacePool **v22; // [rsp+38h] [rbp-18h] BYREF
  struct DirectComposition::CAtlasSurfacePool *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  bool v24; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+48h] BYREF
  struct DirectComposition::CAtlasSurface *v26; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  DirectComposition::CSurfaceManager::ComputeLargeSurfaceAllocationSizes(
    this,
    a3,
    a4,
    (struct DirectComposition::SizeU *)&v26,
    (struct DCOMPOSITION_GUTTERS *)&v25,
    &v24);
  *(_OWORD *)v23 = *(_OWORD *)a3;
  *(struct DirectComposition::CAtlasSurfacePool **)((char *)v23 + 4) = v26;
  v11 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 8);
  v12 = (DirectComposition::CSurfaceManager *)((char *)v11 - 48);
  if ( v11 == (DirectComposition::CSurfaceManager *)((char *)this + 56) )
    v12 = 0LL;
  if ( v12 )
  {
    while ( !DirectComposition::CAtlasSurface::CanSatisfyLargeSurfaceRequest(
               v12,
               (const struct DirectComposition::SurfaceRequestStruct *)v23) )
    {
      v19 = *(_QWORD *)(v17 + 56);
      v12 = (DirectComposition::CAtlasSurface *)(v19 - 48);
      if ( v19 == v18 )
        v12 = 0LL;
      if ( !v12 )
      {
        v22 = 0LL;
        goto LABEL_5;
      }
    }
    v4 = (DirectComposition::CAtlasSurfacePool **)v17;
  }
  v22 = v4;
  if ( v4 )
  {
    if ( *((_BYTE *)a3 + 13) )
    {
      if ( v24 )
        v9 = 1;
      else
        v10 = 1;
    }
    else
    {
      DirectComposition::CAtlasSurfacePool::DisposeAndDeleteWhitePixelSurface(v4[8]);
    }
    DirectComposition::CAtlasSurface::Reuse(
      (__int64)v4,
      v9,
      v10,
      (const struct DirectComposition::SurfaceRequestStruct *)((char *)a3 + 4),
      v25);
LABEL_15:
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 1));
    v22 = 0LL;
    *a2 = v4;
    goto LABEL_16;
  }
LABEL_5:
  v13 = *(_DWORD *)a3;
  v23[0] = (struct DirectComposition::CAtlasSurfacePool *)v4;
  v8 = DirectComposition::CAtlasSurfacePool::Create(this, (const struct DirectComposition::SizeU *)&v26, v13, 0, 1, v23);
  if ( v8 == -2147024882 )
  {
    v21 = 0LL;
    DirectComposition::CSurfaceManager::ComputeLargeSurfaceAllocationSizes(
      this,
      a3,
      0,
      (struct DirectComposition::SizeU *)&v21,
      (struct DCOMPOSITION_GUTTERS *)&v25,
      &v24);
    if ( v21 == v26 )
      goto LABEL_16;
    v20 = *(_DWORD *)a3;
    v26 = v21;
    v8 = DirectComposition::CAtlasSurfacePool::Create(
           this,
           (const struct DirectComposition::SizeU *)&v26,
           v20,
           0,
           1,
           v23);
  }
  if ( v8 >= 0 )
  {
    if ( *((_BYTE *)a3 + 13) != (_BYTE)v4 )
    {
      v26 = (struct DirectComposition::CAtlasSurface *)v4;
      if ( v24 == (_BYTE)v4 )
      {
        v9 = (unsigned int)v4;
        v10 = 1;
      }
      else
      {
        v9 = 1;
        v10 = (unsigned int)v4;
      }
      v8 = DirectComposition::CAtlasSurface::CreateWhitePixel(v23[0], &v26);
      if ( v8 < 0 )
        goto LABEL_16;
      CMILRefCountBaseT<IUnknown>::InternalRelease(v26);
    }
    v8 = DirectComposition::CAtlasSurface::Create(v23[0], v9, v10, (char *)a3 + 4, v25, &v22);
    if ( v8 >= 0 )
    {
      v4 = v22;
      v14 = (DirectComposition::CSurfaceManager **)*((_QWORD *)this + 5);
      v15 = (DirectComposition::CSurfaceManager *)(v22 + 4);
      if ( *v14 != (DirectComposition::CSurfaceManager *)((char *)this + 32) )
        __fastfail(3u);
      *(_QWORD *)v15 = (char *)this + 32;
      *((_QWORD *)v15 + 1) = v14;
      *v14 = v15;
      *((_QWORD *)this + 5) = v15;
      ++*((_DWORD *)this + 6);
      goto LABEL_15;
    }
  }
LABEL_16:
  ReleaseInterface<DirectComposition::CAtlasSurface>((__int64 *)&v22);
  return (unsigned int)v8;
}
