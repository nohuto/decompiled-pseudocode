/*
 * XREFs of ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0047A58
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C01A7934 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0047E24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

_QWORD *__fastcall DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[1];
  if ( v2 )
    CRefCountedBuffer::RefCountedBufferRelease(v2);
  ExFreePoolWithTag(P, 0);
  return P;
}
