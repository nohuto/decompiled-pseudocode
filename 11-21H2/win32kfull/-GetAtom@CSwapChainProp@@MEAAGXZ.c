/*
 * XREFs of ?GetAtom@CSwapChainProp@@MEAAGXZ @ 0x1C0123CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::GetAtom(CSwapChainProp *this)
{
  return WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
}
