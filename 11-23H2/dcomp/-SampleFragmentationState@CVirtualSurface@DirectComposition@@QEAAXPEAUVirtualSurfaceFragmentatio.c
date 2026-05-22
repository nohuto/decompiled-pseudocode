/*
 * XREFs of ?SampleFragmentationState@CVirtualSurface@DirectComposition@@QEAAXPEAUVirtualSurfaceFragmentationState@2@@Z @ 0x180037E64
 * Callers:
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 * Callees:
 *     ?GetArea@CRegion@@QEBA_KXZ @ 0x1800383CC (-GetArea@CRegion@@QEBA_KXZ.c)
 */

void __fastcall DirectComposition::CVirtualSurface::SampleFragmentationState(
        DirectComposition::CVirtualSurface *this,
        struct DirectComposition::VirtualSurfaceFragmentationState *a2)
{
  char *v2; // r14
  DirectComposition::CVirtualSurface *v3; // rax
  DirectComposition::CVirtualSurface *v5; // r11
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  char *v8; // rdi
  __int64 Area; // rcx
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // xmm1_8

  v2 = (char *)this + 256;
  v3 = (DirectComposition::CVirtualSurface *)*((_QWORD *)this + 32);
  v5 = this;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (char *)v3 - 16;
  if ( v3 == (DirectComposition::CVirtualSurface *)((char *)this + 256) )
    v8 = 0LL;
  if ( !v8 )
    goto LABEL_13;
  do
  {
    v7 += *((unsigned int *)v8 + 23);
    Area = (unsigned int)CRegion::GetArea((CRegion *)(v8 + 96));
    v10 = (char *)*((_QWORD *)v8 + 2);
    v6 += Area;
    v8 = v10 - 16;
    if ( v10 == v2 )
      v8 = 0LL;
  }
  while ( v8 );
  if ( v7 )
    v11 = 100 * v6 / v7;
  else
LABEL_13:
    LODWORD(v11) = 100;
  v12 = *((_DWORD *)v5 + 62);
  if ( v12 )
    v13 = v7 / v12;
  else
    LODWORD(v13) = 0;
  *((_QWORD *)v5 + 34) += (unsigned int)v11;
  *((_QWORD *)v5 + 35) += (unsigned int)v13;
  ++*((_DWORD *)v5 + 72);
  v14 = *((_QWORD *)v5 + 36);
  *(_OWORD *)a2 = *((_OWORD *)v5 + 17);
  *((_QWORD *)a2 + 2) = v14;
}
