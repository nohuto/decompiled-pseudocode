/*
 * XREFs of ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ @ 0x1800387F8
 * Callers:
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?MaxTextureSizeFromFeatureLevel@CDevice@DirectComposition@@SAIW4D3D_FEATURE_LEVEL@@@Z @ 0x180038880 (-MaxTextureSizeFromFeatureLevel@CDevice@DirectComposition@@SAIW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 */

__int64 __fastcall DirectComposition::CDevice::GetSafeMaxTextureSize(DirectComposition::CDevice *this)
{
  unsigned int v2; // eax
  char v3; // r11
  DirectComposition::CDevice *v4; // rcx
  unsigned int v5; // r9d
  __int64 Next; // r8
  unsigned int v7; // eax

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  v2 = DirectComposition::CDevice::MaxTextureSizeFromFeatureLevel(DirectComposition::CDevice::s_minSafeFeatureLevel);
  v3 = 0;
  v4 = (DirectComposition::CDevice *)*((_QWORD *)this + 77);
  v5 = v2;
  Next = (__int64)v4 - 288;
  if ( v4 == (DirectComposition::CDevice *)((char *)this + 616) )
    Next = 0LL;
  for ( ;
        Next;
        Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
                 (char *)this + 608,
                 Next,
                 Next,
                 v7) )
  {
    v7 = *(_DWORD *)(Next + 132);
    if ( *(_BYTE *)(Next + 249) != v3 )
      v7 = 0x800000;
    if ( v5 < v7 )
      v7 = v5;
  }
  return v5;
}
