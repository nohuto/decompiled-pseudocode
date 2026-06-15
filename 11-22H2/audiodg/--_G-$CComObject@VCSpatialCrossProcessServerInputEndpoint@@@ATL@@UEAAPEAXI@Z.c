/*
 * XREFs of ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140099B10
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002652C (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140099624 (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CSpatialCrossProcessServerEndpoint *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::~CComObject<CSpatialCrossProcessServerInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4, v5);
    }
  }
  return a1;
}
