/*
 * XREFs of ?GetDevice@CDDisplaySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180108114
 * Callers:
 *     ?GetDevice@CDDisplaySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011E910 (-GetDevice@CDDisplaySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDDisplaySwapChain::GetDevice(CDDisplaySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 63);
}
