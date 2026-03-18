/*
 * XREFs of ?AddRef@CCompSwapChain@@UEAAKXZ @ 0x18029DC1C
 * Callers:
 *     ?AddRef@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ @ 0x18011FC70 (-AddRef@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::AddRef(CCompSwapChain *this)
{
  return CMILRefCountImpl::AddReference((CCompSwapChain *)((char *)this - 376));
}
