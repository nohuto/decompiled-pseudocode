/*
 * XREFs of ??0CDynamicPool@DirectComposition@@QEAA@PEAVCAtlasSurfacePool@1@@Z @ 0x180035F64
 * Callers:
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

DirectComposition::CDynamicPool *__fastcall DirectComposition::CDynamicPool::CDynamicPool(
        DirectComposition::CDynamicPool *this,
        struct DirectComposition::CAtlasSurfacePool *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DirectComposition::CDynamicPool::`vftable';
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((struct DirectComposition::CAtlasSurfacePool *)((char *)a2 + 8));
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 19);
  return this;
}
