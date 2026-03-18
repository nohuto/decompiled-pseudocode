/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@VIOverlaySwapChain@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180287C84
 * Callers:
 *     ?QueryInterface@?$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180108610 (-QueryInterface@-$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IOverlaySwapChain>::QueryInterface(__int64 a1, _QWORD *a2, __int64 *a3)
{
  return CMILCOMBaseT<IOverlaySwapChain>::InternalQueryInterface((_QWORD *)(a1 - 32), a2, a3);
}
