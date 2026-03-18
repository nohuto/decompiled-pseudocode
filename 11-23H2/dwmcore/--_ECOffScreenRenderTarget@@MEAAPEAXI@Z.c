/*
 * XREFs of ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801E9640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E954C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::`vector deleting destructor'(
        COffScreenRenderTarget *this,
        char a2)
{
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
