/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00B3444
 * Callers:
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C014F1C8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01510C0 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceObject), 1u);
  *a2 = Prop;
  return Prop != 0;
}
