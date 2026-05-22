/*
 * XREFs of ?GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18003B110
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 *     ?BindDCompVirtualSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionVirtualSurface@@@Z @ 0x18003B064 (-BindDCompVirtualSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionV.c)
 * Callees:
 *     ?EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ @ 0x18003B14C (-EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::GetResourceProxyNoRef(
        DirectComposition::CVirtualSurface *this,
        struct IUnknown **a2)
{
  __int64 result; // rax

  result = DirectComposition::CVirtualSurface::EnsurePrimitiveGroup(this);
  if ( (int)result >= 0 )
    *a2 = *(struct IUnknown **)(*((_QWORD *)this + 37) + 56LL);
  return result;
}
