/*
 * XREFs of ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400999B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002652C (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400997C8 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

char *__fastcall ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`scalar deleting destructor'(
        char *a1,
        int a2,
        int a3)
{
  char v3; // di
  void *v5; // rax
  int v6; // r8d

  v3 = a2;
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(
    (CSpatialCrossProcessClientEndpoint *)a1,
    a2,
    a3);
  if ( a1[1448] )
  {
    a1[1448] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 1408));
  }
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      __global_delete(a1);
    }
    else
    {
      v5 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v5, v6);
    }
  }
  return a1;
}
