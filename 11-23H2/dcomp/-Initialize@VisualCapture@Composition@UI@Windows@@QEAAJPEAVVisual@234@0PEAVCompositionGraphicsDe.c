/*
 * XREFs of ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20
 * Callers:
 *     ?CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x18010B138 (-CaptureAsync@Visual@Composition@UI@Windows@@QEAAJPEAV1234@PEAVCompositionGraphicsDevice@234@HHW.c)
 *     ?CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z @ 0x180156CA8 (-CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXP.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 *     ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_NPEAPEAVCompositionDrawingSurface@234@@Z @ 0x1800617A4 (-CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics.c)
 *     ?EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x180061A78 (-EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061B00 (-BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUta.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z @ 0x1800F753C (-ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        Windows::UI::Composition::CompositionGraphicsDevice *a4,
        int a5,
        int a6,
        int a7,
        enum DXGI_ALPHA_MODE a8,
        float a9,
        unsigned __int8 a10)
{
  __int64 v10; // r15
  Windows::UI::Composition::DrawingSurfaceBase **v11; // rsi
  __int64 v12; // r12
  int DrawingSurface; // eax
  unsigned int v17; // ebx
  int v18; // r9d
  int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // edx
  struct DirectComposition::CCompositionSurfaceProxy *v23; // [rsp+30h] [rbp-38h] BYREF
  tagPOINT v24; // [rsp+38h] [rbp-30h] BYREF
  struct ID3D11Resource *v25; // [rsp+70h] [rbp+8h] BYREF

  v10 = a5;
  v11 = (Windows::UI::Composition::DrawingSurfaceBase **)(a1 + 248);
  v12 = a6;
  v25 = 0LL;
  v23 = (struct DirectComposition::CCompositionSurfaceProxy *)__PAIR64__(a6, a5);
  DrawingSurface = Windows::UI::Composition::CompositionGraphicsDevice::CreateDrawingSurface(
                     a4,
                     __SPAIR64__(a6, a5),
                     a7,
                     a8,
                     1,
                     (_QWORD *)(a1 + 248));
  v17 = DrawingSurface;
  if ( DrawingSurface < 0 )
  {
    v21 = 115;
  }
  else
  {
    DrawingSurface = Windows::UI::Composition::DrawingSurfaceBase::BeginDraw(
                       *v11,
                       0LL,
                       &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                       (void **)&v25,
                       &v24);
    v17 = DrawingSurface;
    if ( DrawingSurface < 0 )
    {
      v21 = 129;
    }
    else
    {
      DrawingSurface = DirectComposition::CDxDevice::ClearSurface(
                         (DirectComposition::CDevice **)(*(_QWORD *)(*((_QWORD *)*v11 + 20) + 208LL) + 8LL),
                         v25);
      v17 = DrawingSurface;
      if ( DrawingSurface < 0 )
      {
        v21 = 130;
      }
      else
      {
        DrawingSurface = Windows::UI::Composition::DrawingSurfaceBase::EndDraw(*v11);
        v17 = DrawingSurface;
        if ( DrawingSurface < 0 )
        {
          v21 = 131;
        }
        else
        {
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(
            (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 232),
            (volatile signed __int32 *)a3);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(
            (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 240),
            (volatile signed __int32 *)a2);
          if ( a3 )
            v18 = *(_DWORD *)(a3 + 128);
          else
            v18 = 0;
          DirectComposition::CDevice::ResourceSetReferenceProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            0,
            v18);
          if ( a2 )
            v19 = *(_DWORD *)(a2 + 128);
          else
            v19 = 0;
          DirectComposition::CDevice::ResourceSetReferenceProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            1,
            v19);
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            3,
            v10);
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            4,
            v12);
          DirectComposition::CDevice::ResourceSetFloatProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            5,
            a9);
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            6,
            a10);
          DrawingSurface = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(
                             *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v11 + 23)
                                                                                              + 40LL)
                                                                                  + 16LL)
                                                                      + 64LL),
                             a8,
                             &v23);
          v17 = DrawingSurface;
          if ( DrawingSurface < 0 )
          {
            v21 = 165;
          }
          else
          {
            DirectComposition::CDevice::ResourceSetReferenceProperty(
              *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
              *(_DWORD *)(a1 + 128),
              2,
              *((_DWORD *)v23 + 3));
            v20 = (a1 + 152) & -(__int64)(a1 != 0);
            DrawingSurface = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 104LL))(v20);
            v17 = DrawingSurface;
            if ( DrawingSurface >= 0 )
            {
              v17 = 0;
              goto LABEL_21;
            }
            v21 = 169;
          }
        }
      }
    }
  }
  DoStackCaptureDirect(DrawingSurface, v21);
LABEL_21:
  if ( v25 )
    ((void (__fastcall *)(struct ID3D11Resource *))v25->lpVtbl->Release)(v25);
  return v17;
}
