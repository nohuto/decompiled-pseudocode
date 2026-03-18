/*
 * XREFs of ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x1801C2950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801C18A8 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 */

CDDisplayRenderTarget *__fastcall CDDisplayRenderTarget::`scalar deleting destructor'(
        CDDisplayRenderTarget *this,
        char a2)
{
  CDDisplayRenderTarget::~CDDisplayRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
