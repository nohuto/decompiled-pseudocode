/*
 * XREFs of ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800D9768
 * Callers:
 *     ?CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z @ 0x1800D9850 (-CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800D9C60 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

RefCountedObject **__fastcall Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(
        RefCountedObject **a1,
        volatile signed __int32 *a2)
{
  RefCountedObject *v3; // rcx

  v3 = *a1;
  if ( v3 != (RefCountedObject *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v3 = *a1;
    }
    *a1 = (RefCountedObject *)a2;
    if ( v3 )
      RefCountedObject::Release(v3);
  }
  return a1;
}
