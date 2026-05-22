/*
 * XREFs of ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180013578 (-Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304 (-Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCompositionColorPartner@@0PEAPEAUIDCompositionPrimitivePartner@@PEAPEAVCBitmapInfoFront@2@3PEAPEAVCVirtualSurface@2@@Z @ 0x1800F6A60 (-ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCom.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreatePrimitive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        struct IDCompositionSurface *a5,
        __int64 a6,
        int a7,
        struct IDCompositionSurface *a8,
        __int64 a9,
        struct IDCompositionPrimitivePartner **a10)
{
  DirectComposition::CDevice *v10; // rsi
  struct IDCompositionPrimitivePartner **v13; // rdi
  int v14; // ebx
  struct DirectComposition::CBitmapInfoFront *v15; // rdx
  char v16; // al
  struct DirectComposition::CBitmapInfoFront *v17; // rax
  struct DirectComposition::CVirtualSurface *v18; // rcx
  struct DirectComposition::CBitmapInfoFront *v20; // [rsp+68h] [rbp-29h] BYREF
  struct DirectComposition::CVirtualSurface *v21; // [rsp+70h] [rbp-21h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp-19h] BYREF
  struct DirectComposition::CBitmapInfoFront *v23; // [rsp+C8h] [rbp+37h] BYREF

  v10 = (DirectComposition::CDevice *)(a1 - 24);
  v22 = (_QWORD *)(a1 + 72);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(a1 + 72));
  v13 = a10;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v14 = DirectComposition::CDevice::ValidatePrimitiveParameters(v10, a5, 0LL, a8, a10, &v23, &v20, &v21);
  if ( v14 >= 0 )
  {
    v15 = v20;
    if ( v20 )
    {
      v16 = *((_BYTE *)v20 + 112);
      v20 = 0LL;
      v14 = DirectComposition::CTexturedRectanglePrimitive::Create(
              (__int64)v10,
              a2,
              a3,
              a4,
              (__int64)v23,
              a6,
              a7,
              (__int64)v15,
              a9,
              (v16 & 4) == 0,
              (__int64 **)&v20);
      if ( v14 >= 0 )
      {
        v17 = v20;
LABEL_8:
        *v13 = v17;
        goto LABEL_12;
      }
    }
    else
    {
      v18 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        v14 = DirectComposition::CVirtualSurfacePrimitive::Create(
                (__int64)v10,
                a2,
                a3,
                a4,
                (__int64)v23,
                a6,
                a7,
                (__int64)v18,
                a9,
                0,
                &v21);
        if ( v14 >= 0 )
        {
          v17 = v21;
          goto LABEL_8;
        }
      }
      else
      {
        v14 = -2147024809;
      }
    }
  }
  if ( v13 )
    *v13 = 0LL;
LABEL_12:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v22);
  return (unsigned int)v14;
}
