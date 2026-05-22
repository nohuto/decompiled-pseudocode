/*
 * XREFs of ?ReclumpVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x1800FE7E4
 * Callers:
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfaceOptimizer::ReclumpVirtualSurface(
        DirectComposition::CVirtualSurfaceOptimizer *this,
        struct DirectComposition::CVirtualSurface *a2)
{
  _DWORD *v3; // rdx
  int v5; // edi
  struct DirectComposition::CVirtualSurface *v6; // rax
  const struct FastRegion::Internal::CRgnData **v7; // rbx
  struct DirectComposition::CVirtualSurface *v8; // rcx
  _DWORD *v10; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v11[18]; // [rsp+28h] [rbp-70h] BYREF

  v3 = v11;
  v11[0] = 0;
  v10 = v11;
  v5 = 0;
  v6 = (struct DirectComposition::CVirtualSurface *)*((_QWORD *)a2 + 32);
  v7 = (const struct FastRegion::Internal::CRgnData **)((char *)v6 - 16);
  if ( v6 == (struct DirectComposition::CVirtualSurface *)((char *)a2 + 256) )
    v7 = 0LL;
  if ( !v7 )
    goto LABEL_13;
  do
  {
    if ( (unsigned int)(*(_DWORD *)this - *((_DWORD *)v7 + 42)) >= 8 && !*((_QWORD *)v7[9] + 15) && v5 >= 0 )
      v5 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)&v10, v7 + 12);
    v8 = v7[2];
    v7 = (const struct FastRegion::Internal::CRgnData **)((char *)v8 - 16);
    if ( v8 == (struct DirectComposition::CVirtualSurface *)((char *)a2 + 256) )
      v7 = 0LL;
  }
  while ( v7 );
  if ( v5 >= 0 )
  {
    v3 = v10;
LABEL_13:
    if ( *v3 )
      v5 = DirectComposition::CVirtualSurface::ReclumpRegion(a2, (const struct CRegion *)&v10);
  }
  FastRegion::CRegion::FreeMemory((void **)&v10);
  return (unsigned int)v5;
}
