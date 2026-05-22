/*
 * XREFs of ?Release@?$CMILCOMBaseT@UIUnknown@@@@UEAAKXZ @ 0x1800A0270
 * Callers:
 *     ?Release@CCompositionTexture@DirectComposition@@WBA@EAAKXZ @ 0x1800A9470 (-Release@CCompositionTexture@DirectComposition@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILCOMBaseT<IUnknown>::Release(volatile signed __int32 *a1)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease(a1);
}
