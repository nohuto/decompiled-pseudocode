/*
 * XREFs of ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400224B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x14002244C (--1-$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002E29C (-__global_delete@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAudioProcessor *__fastcall ATL::CComObject<CAudioProcessor>::`scalar deleting destructor'(
        CAudioProcessor *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  ATL::CComObject<CAudioProcessor>::~CComObject<CAudioProcessor>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(a1, 0x340uLL);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4, v5);
    }
  }
  return a1;
}
