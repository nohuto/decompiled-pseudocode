/*
 * XREFs of ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800FF100
 * Callers:
 *     ?Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAV12@@Z @ 0x1800FEDB4 (-Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPL.c)
 * Callees:
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ??$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@DirectComposition@@@Z @ 0x1800ECFC4 (--$ReleaseInterface@VCYCbCrSurfaceProxy@DirectComposition@@@@YAXAEAPEAVCYCbCrSurfaceProxy@Direct.c)
 *     ?CreateYCbCrSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCYCbCrSurfaceProxy@2@@Z @ 0x1800F14D8 (-CreateYCbCrSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAPEAVCYCbCrSurfaceProxy@2@@Z.c)
 *     ??$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComposition@@@Z @ 0x1800FEB00 (--$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComp.c)
 *     ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC (-Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4D.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::Initialize(
        struct DirectComposition::CSurfaceFactory **this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int SurfaceProxyNoRef; // ebx
  __int64 v9; // r9
  DirectComposition::CBitmapInfo *v10; // r15
  struct DirectComposition::CYCbCrSurfaceProxy *v11; // r13
  DirectComposition::CResourceProxy *v12; // r14
  DirectComposition::CBitmapInfo *v13; // r12
  DirectComposition::CBitmapInfo *v15; // [rsp+30h] [rbp-20h] BYREF
  DirectComposition::CBitmapInfo *v16[2]; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v17; // [rsp+48h] [rbp-8h] BYREF
  struct DirectComposition::CYCbCrSurfaceProxy *v18; // [rsp+90h] [rbp+40h] BYREF

  v4 = (int)a4;
  v18 = 0LL;
  v15 = 0LL;
  v16[0] = 0LL;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v6 = (a2 + 1) >> 1;
    if ( (_DWORD)a4 == 1 )
    {
LABEL_6:
      v7 = (a3 + 1) >> 1;
      goto LABEL_7;
    }
  }
  else
  {
    v6 = a2;
  }
  if ( (_DWORD)a4 == 4 )
    goto LABEL_6;
  v7 = a3;
LABEL_7:
  v17 = (struct IUnknown *)__PAIR64__(v7, v6);
  v16[1] = (DirectComposition::CBitmapInfo *)__PAIR64__(a3, a2);
  SurfaceProxyNoRef = DirectComposition::CYCbCrBitmapInfo::Create(
                        this[3],
                        __SPAIR64__(a3, a2),
                        61,
                        a4,
                        (struct DirectComposition::CYCbCrSurface *)this,
                        &v15);
  if ( SurfaceProxyNoRef >= 0 )
  {
    SurfaceProxyNoRef = DirectComposition::CYCbCrBitmapInfo::Create(
                          this[3],
                          (__int64)v17,
                          49,
                          v9,
                          (struct DirectComposition::CYCbCrSurface *)this,
                          v16);
    if ( SurfaceProxyNoRef >= 0 )
    {
      SurfaceProxyNoRef = DirectComposition::CDevice::CreateYCbCrSurfaceProxy(
                            *((DirectComposition::CDevice **)this[3] + 3),
                            &v18);
      if ( SurfaceProxyNoRef >= 0 )
      {
        v10 = v15;
        SurfaceProxyNoRef = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(
                              *(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)v15 + 2) + 64LL),
                              DXGI_ALPHA_MODE_IGNORE,
                              (struct DirectComposition::CCompositionSurfaceProxy **)&v17);
        if ( SurfaceProxyNoRef >= 0 )
        {
          v11 = v18;
          v12 = (struct DirectComposition::CYCbCrSurfaceProxy *)((char *)v18 + 8);
          SurfaceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(
                                (struct DirectComposition::CYCbCrSurfaceProxy *)((char *)v18 + 8),
                                0,
                                v17);
          if ( SurfaceProxyNoRef >= 0 )
          {
            v13 = v16[0];
            SurfaceProxyNoRef = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(
                                  *(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)v16[0] + 2) + 64LL),
                                  DXGI_ALPHA_MODE_IGNORE,
                                  (struct DirectComposition::CCompositionSurfaceProxy **)&v17);
            if ( SurfaceProxyNoRef >= 0 )
            {
              SurfaceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(v12, 1, v17);
              if ( SurfaceProxyNoRef >= 0 )
              {
                SurfaceProxyNoRef = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v12, 2, v4);
                if ( SurfaceProxyNoRef >= 0 )
                {
                  *((_DWORD *)this + 8) = v4;
                  this[5] = v11;
                  this[6] = v10;
                  this[7] = v13;
                  v18 = 0LL;
                  v15 = 0LL;
                  v16[0] = 0LL;
                }
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<DirectComposition::CYCbCrSurfaceProxy>(&v18);
  ReleaseInterface<DirectComposition::CYCbCrBitmapInfo>((volatile signed __int32 **)&v15);
  ReleaseInterface<DirectComposition::CYCbCrBitmapInfo>((volatile signed __int32 **)v16);
  return (unsigned int)SurfaceProxyNoRef;
}
