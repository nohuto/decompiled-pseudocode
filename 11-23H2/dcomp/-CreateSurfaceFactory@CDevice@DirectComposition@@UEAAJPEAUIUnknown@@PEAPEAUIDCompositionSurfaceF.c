/*
 * XREFs of ?CreateSurfaceFactory@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x18001B4B0
 * Callers:
 *     ?CreateSurfaceFactory@CDevice@DirectComposition@@W7EAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x1800A8970 (-CreateSurfaceFactory@CDevice@DirectComposition@@W7EAAJPEAUIUnknown@@PEAPEAUIDCompositionSurface.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554 (-Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFactory(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        struct IDCompositionSurfaceFactory **a3)
{
  int v6; // ebx
  DirectComposition::CDevice *v7; // rax
  struct DirectComposition::CSurfaceFactory *v8; // r8
  struct DirectComposition::CSurfaceFactory *v10; // [rsp+50h] [rbp+8h] BYREF
  char *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = (char *)this + 88;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 88));
  v10 = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    goto LABEL_10;
  }
  if ( a2 )
  {
    v7 = (DirectComposition::CDevice *)*((_QWORD *)this + 76);
    v8 = (DirectComposition::CDevice *)((char *)v7 - 288);
    if ( v7 == (DirectComposition::CDevice *)((char *)this + 608) )
      v8 = 0LL;
    v6 = DirectComposition::CSurfaceFactory::Create((DirectComposition::CDevice *)((char *)this - 8), a2, v8, 1, &v10);
    if ( v6 >= 0 )
    {
      *a3 = v10;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  *a3 = 0LL;
LABEL_10:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v11);
  return (unsigned int)v6;
}
