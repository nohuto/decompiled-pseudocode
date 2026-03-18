/*
 * XREFs of ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C000E9C8
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0121E78 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00E28B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

__int64 __fastcall HasFallbackInteractionSink(const struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v2) )
    return (*(_DWORD *)(v2 + 52) >> 1) & 1;
  else
    return 0LL;
}
