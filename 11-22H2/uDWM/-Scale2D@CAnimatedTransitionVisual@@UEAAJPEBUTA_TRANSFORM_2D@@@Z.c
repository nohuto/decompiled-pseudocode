/*
 * XREFs of ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800147B0
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D6E78 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEF90 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf
  int v4; // eax
  CVisual *v5; // rcx

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 191) != v2
    || *((float *)this + 192) != *((float *)a2 + 6)
    || *((float *)this + 194) != *((float *)a2 + 9)
    || *((float *)this + 195) != *((float *)a2 + 10) )
  {
    v3 = *((_BYTE *)this + 974) == 0;
    *((float *)this + 191) = v2;
    *((_DWORD *)this + 192) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 193) = 1065353216;
    if ( v3 )
    {
      *((_DWORD *)this + 194) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 780) = *((unsigned int *)a2 + 10);
    }
    v4 = *((_DWORD *)this + 24);
    v5 = (CAnimatedTransitionVisual *)((char *)this + 8);
    if ( (v4 & 0x1000) == 0 )
    {
      *((_DWORD *)v5 + 22) = v4 | 0x1000;
      CVisual::PropagateDirtyChildren(v5);
    }
  }
  return 0LL;
}
