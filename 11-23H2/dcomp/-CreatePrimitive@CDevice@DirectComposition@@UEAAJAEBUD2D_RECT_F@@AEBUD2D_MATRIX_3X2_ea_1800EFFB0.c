/*
 * XREFs of ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIDCompositionPrimitivePartner@@@@IEAAKXZ @ 0x180081BCC (-InternalRelease@-$CMILRefCountBaseT@UIDCompositionPrimitivePartner@@@@IEAAKXZ.c)
 *     ?ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCompositionColorPartner@@0PEAPEAUIDCompositionPrimitivePartner@@PEAPEAVCBitmapInfoFront@2@3PEAPEAVCVirtualSurface@2@@Z @ 0x1800F6A60 (-ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCom.c)
 *     ?Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAV12@@Z @ 0x1800F7B7C (-Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBU.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreatePrimitive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IDCompositionSurface *a5,
        __int64 a6,
        __int64 a7,
        struct IDCompositionColorPartner *a8,
        struct IDCompositionPrimitivePartner **a9)
{
  DirectComposition::CDevice *v9; // rbp
  int v12; // ebx
  struct DirectComposition::CBitmapInfoFront *v14; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+58h] [rbp-30h] BYREF

  v9 = (DirectComposition::CDevice *)(a1 - 24);
  v15 = (_QWORD *)(a1 + 72);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(a1 + 72));
  v14 = 0LL;
  if ( DirectComposition::CDevice::ValidatePrimitiveParameters(v9, a5, a8, 0LL, a9, &v14, 0LL, 0LL) >= 0 && a8 )
  {
    v12 = DirectComposition::CDynamicColorRectanglePrimitive::Create(v9, a2, a3);
    if ( v12 >= 0 )
    {
      *a9 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = -2147024809;
  }
  if ( a9 )
    *a9 = 0LL;
LABEL_9:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v15);
  return (unsigned int)v12;
}
