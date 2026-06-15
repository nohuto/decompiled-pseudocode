/*
 * XREFs of ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400904C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002652C (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14009028C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

char *__fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint((CCrossProcessBaseClientEndpoint *)a1);
  if ( a1[552] )
  {
    a1[552] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 512));
  }
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
