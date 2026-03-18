/*
 * XREFs of ?IsHardwareProtected@CCompSwapChain@@UEBA_NXZ @ 0x1801084BC
 * Callers:
 *     ?IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011FD10 (-IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompSwapChain::IsHardwareProtected(CCompSwapChain *this)
{
  return *((_BYTE *)this - 276);
}
