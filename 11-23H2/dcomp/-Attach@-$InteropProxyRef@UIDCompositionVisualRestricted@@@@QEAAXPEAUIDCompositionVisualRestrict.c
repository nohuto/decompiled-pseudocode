/*
 * XREFs of ?Attach@?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestricted@@@Z @ 0x1800A3580
 * Callers:
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 *     ?RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180198848 (-RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

__int64 __fastcall InteropProxyRef<IDCompositionVisualRestricted>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset(a1);
  *a1 = a2;
  return result;
}
