/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@UIUnknown@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0260
 * Callers:
 *     ?QueryInterface@CCompositionTexture@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9450 (-QueryInterface@CCompositionTexture@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CMILCOMBaseT<IUnknown>::QueryInterface()
{
  return CMILCOMBaseT<IUnknown>::InternalQueryInterface();
}
