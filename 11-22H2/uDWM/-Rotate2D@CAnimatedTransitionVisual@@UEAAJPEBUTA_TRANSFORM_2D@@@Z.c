/*
 * XREFs of ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800A72E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  int v3; // eax
  CVisual *v4; // rcx

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 197) != v2
    || *((float *)this + 200) != *((float *)a2 + 9)
    || *((float *)this + 201) != *((float *)a2 + 10) )
  {
    *((float *)this + 197) = v2;
    *((_QWORD *)this + 99) = 0LL;
    if ( !*((_BYTE *)this + 973) )
    {
      *((_DWORD *)this + 200) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 804) = *((unsigned int *)a2 + 10);
    }
    v3 = *((_DWORD *)this + 24);
    v4 = (CAnimatedTransitionVisual *)((char *)this + 8);
    if ( (v3 & 0x1000) == 0 )
    {
      *((_DWORD *)v4 + 22) = v3 | 0x1000;
      CVisual::PropagateDirtyChildren(v4);
    }
  }
  return 0LL;
}
