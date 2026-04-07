/*
 * XREFs of ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800BF468
 * Callers:
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800BF3AC (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800BF9EC (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C0320 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C05BC (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800C0894 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(int a1, int a2)
{
  int v3; // edx
  int v4; // ecx

  v3 = a2 - 3;
  if ( v3 )
  {
    if ( v3 == 1 )
      v4 = 620;
    else
      v4 = 30;
  }
  else
  {
    v4 = 310;
  }
  return (unsigned int)(MulDiv(v4, a1, 100) + 2);
}
