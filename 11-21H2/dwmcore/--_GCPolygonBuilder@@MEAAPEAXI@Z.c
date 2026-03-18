/*
 * XREFs of ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x1800CF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CF4E4 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_p.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800CF50C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::`scalar deleting destructor'(CPolygonBuilder *this, char a2)
{
  void **v2; // rbx
  void *v5; // rcx
  bool v6; // zf
  struct CPolygonBuilder *v7; // rcx
  struct CObjectCache *ObjectCache; // rax

  v2 = (void **)((char *)this + 16);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear((char *)this + 16);
  v5 = *v2;
  v6 = *v2 == v2 + 3;
  *v2 = 0LL;
  if ( v6 )
    v5 = 0LL;
  DefaultHeap::Free(v5);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x168uLL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v7);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        DefaultHeap::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
