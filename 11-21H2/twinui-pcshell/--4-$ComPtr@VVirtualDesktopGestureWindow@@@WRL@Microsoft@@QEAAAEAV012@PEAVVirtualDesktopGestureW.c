/*
 * XREFs of ??4?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18054F65C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile int **__fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::operator=(
        volatile int **a1,
        volatile int *a2)
{
  volatile int *v3; // r9
  volatile int *v4; // rcx

  v3 = a2;
  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 7), a2);
      v4 = *a1;
    }
    *a1 = v3;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4 + 4);
  }
  return a1;
}
