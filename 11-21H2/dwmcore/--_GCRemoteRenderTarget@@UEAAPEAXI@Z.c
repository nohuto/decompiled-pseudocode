/*
 * XREFs of ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x1800FF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x1800FF814 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::`scalar deleting destructor'(CRemoteRenderTarget *this, char a2)
{
  CRemoteRenderTarget::~CRemoteRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
