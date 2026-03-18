/*
 * XREFs of CcReferenceVacbArray @ 0x140285868
 * Callers:
 *     CcGetVacbFromFreeList @ 0x1402857B4 (CcGetVacbFromFreeList.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14053B160 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_DWORD *__fastcall CcReferenceVacbArray(unsigned int a1)
{
  _DWORD *v1; // r8
  _DWORD *v2; // r9

  v1 = 0LL;
  v2 = *(_DWORD **)(CcVacbArrays + 8LL * a1);
  if ( v2 )
  {
    ++v2[1];
    v1 = v2;
    if ( *v2 != a1 )
      KeBugCheckEx(0x34u, 0x13FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
