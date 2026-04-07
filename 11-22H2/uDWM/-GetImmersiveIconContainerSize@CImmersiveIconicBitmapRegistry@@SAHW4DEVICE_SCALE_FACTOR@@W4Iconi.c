/*
 * XREFs of ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800C4278
 * Callers:
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800C41BC (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800C48C4 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4D50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C4FEC (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800C52CC (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(int a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // ecx

  v3 = a2 - 2;
  if ( !v3 )
    goto LABEL_6;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v5 = 310;
    return (unsigned int)(MulDiv(v5, a1, 100) + 2);
  }
  if ( v4 != 1 )
  {
LABEL_6:
    v5 = 30;
    return (unsigned int)(MulDiv(v5, a1, 100) + 2);
  }
  v5 = 620;
  return (unsigned int)(MulDiv(v5, a1, 100) + 2);
}
