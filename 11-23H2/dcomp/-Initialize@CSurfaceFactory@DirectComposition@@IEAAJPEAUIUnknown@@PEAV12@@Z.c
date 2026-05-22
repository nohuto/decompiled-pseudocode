/*
 * XREFs of ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z @ 0x18001B6BC
 * Callers:
 *     ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554 (-Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z.c)
 * Callees:
 *     ?Create@CScratchSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAPEAV12@@Z @ 0x18001B740 (-Create@CScratchSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAPEAV12@@Z.c)
 *     ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z @ 0x18001B7CC (-Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::Initialize(
        DirectComposition::CSurfaceFactory *this,
        struct IUnknown *a2,
        struct DirectComposition::CSurfaceFactory *a3)
{
  __int64 result; // rax
  struct DirectComposition::CSurfaceManager *v7; // rbx

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL));
  result = DirectComposition::CDxDevice::Initialize((DirectComposition::CSurfaceFactory *)((char *)this + 8), a2);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CScratchSurfaceManager::Create(
               this,
               (struct DirectComposition::CScratchSurfaceManager **)this + 38);
    if ( (int)result >= 0 )
    {
      if ( a3 )
        v7 = (struct DirectComposition::CSurfaceManager *)*((_QWORD *)a3 + 39);
      return DirectComposition::CSurfaceManager::Create(
               this,
               v7,
               (struct DirectComposition::CSurfaceManager **)this + 39);
    }
  }
  return result;
}
