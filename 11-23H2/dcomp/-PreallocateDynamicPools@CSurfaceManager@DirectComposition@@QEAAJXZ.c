/*
 * XREFs of ?PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x18001BB98
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ??$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectComposition@@@Z @ 0x18001BC1C (--$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectCompos.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::PreallocateDynamicPools(
        DirectComposition::CSurfaceManager *this)
{
  _DWORD *v2; // rax
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = DefaultHeap::AllocClear(0x38uLL);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    v2[2] = 0;
    *((_QWORD *)v2 + 2) = this;
    *(_QWORD *)v2 = &DirectComposition::CDynamicPoolSet::`vftable';
    *((_QWORD *)v2 + 5) = v2 + 8;
    *((_QWORD *)v2 + 4) = v2 + 8;
    v2[6] = 0;
    *((_QWORD *)v2 + 6) = 0LL;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
    *((_QWORD *)this + 2) = v4;
    v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
    v3 = -2147024882;
  }
  ReleaseInterface<DirectComposition::CDynamicPoolSet>(&v6);
  return v3;
}
