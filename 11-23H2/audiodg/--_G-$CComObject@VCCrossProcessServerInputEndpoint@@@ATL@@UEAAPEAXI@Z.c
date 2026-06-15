/*
 * XREFs of ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140002B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14000430C (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002652C (-__global_delete@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessBaseServerEndpoint *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *a1,
        char a2)
{
  void *v4; // rax

  ATL::CComObject<CCrossProcessServerInputEndpoint>::~CComObject<CCrossProcessServerInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(a1, 0x2C8uLL);
    }
    else
    {
      v4 = AERTGetDLLRTHeap();
      AERTFree(a1, v4);
    }
  }
  return a1;
}
