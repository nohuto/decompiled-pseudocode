/*
 * XREFs of ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x1801EA480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801EA3A4 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::`vector deleting destructor'(
        CRemoteAppRenderTarget *this,
        char a2)
{
  CRemoteAppRenderTarget::~CRemoteAppRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
