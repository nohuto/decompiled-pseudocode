/*
 * XREFs of ?Translate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A7C50
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  int v6; // eax
  CVisual *v7; // rcx

  switch ( *((_DWORD *)this + 241) )
  {
    case 2:
      v5 = *((float *)a2 + 5);
      if ( *((float *)this + 188) == v5 )
        return 0LL;
      *((float *)this + 188) = v5;
      break;
    case 3:
      v4 = *((float *)a2 + 6);
      if ( *((float *)this + 189) == v4 )
        return 0LL;
      *((float *)this + 189) = v4;
      break;
    case 4:
      v3 = *((float *)a2 + 7);
      if ( *((float *)this + 190) == v3 )
        return 0LL;
      *((float *)this + 190) = v3;
      break;
    default:
      v2 = *((float *)a2 + 5);
      if ( *((float *)this + 188) == v2
        && *((float *)this + 189) == *((float *)a2 + 6)
        && *((float *)this + 190) == *((float *)a2 + 7) )
      {
        return 0LL;
      }
      *((float *)this + 188) = v2;
      *((_DWORD *)this + 189) = *((_DWORD *)a2 + 6);
      *((_DWORD *)this + 190) = *((_DWORD *)a2 + 7);
      break;
  }
  v6 = *((_DWORD *)this + 24);
  v7 = (CAnimatedTransitionVisual *)((char *)this + 8);
  if ( (v6 & 0x1000) == 0 )
  {
    *((_DWORD *)v7 + 22) = v6 | 0x1000;
    CVisual::PropagateDirtyChildren(v7);
  }
  return 0LL;
}
