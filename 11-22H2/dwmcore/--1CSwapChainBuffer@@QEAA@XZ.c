/*
 * XREFs of ??1CSwapChainBuffer@@QEAA@XZ @ 0x180101CE0
 * Callers:
 *     ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1800ED120 (-Initialize@CLegacySwapChain@@MEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800EE1C0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuf.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DBB94 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CSwapChainBuffer::~CSwapChainBuffer(void **this)
{
  volatile signed __int32 *v2; // rcx

  FastRegion::CRegion::FreeMemory(this + 13);
  v2 = (volatile signed __int32 *)this[12];
  if ( v2 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
  FastRegion::CRegion::FreeMemory(this + 2);
}
