/*
 * XREFs of ??4?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z @ 0x18003E7BC
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003CC50 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x18003E734 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<KernelContextProvider>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 16));
    v3 = *a1;
    *a1 = a2;
    if ( v3 )
      RefCountedObject::Release((RefCountedObject *)(v3 + 8));
  }
  return a1;
}
