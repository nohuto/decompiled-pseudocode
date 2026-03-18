/*
 * XREFs of ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x18028B998
 * Callers:
 *     ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x1801CA0C0 (-WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplaySwapChain::WaitForVBlank(CDDisplaySwapChain *this, void *a2)
{
  unsigned int result; // eax
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  result = NtDCompositionWaitForCompositorClock(a2 != 0LL, (unsigned __int64)&v3 & -(__int64)(a2 != 0LL), 0xFFFFFFFFLL);
  if ( result > 1 )
  {
    if ( result == -1071775738 )
      return 142213121;
    else
      result |= 0x10000000u;
  }
  return result;
}
