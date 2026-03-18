/*
 * XREFs of ?GetDevice@CDummyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1801082BC
 * Callers:
 *     ?GetDevice@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011F230 (-GetDevice@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDummyRemotingSwapChain::GetDevice(CDummyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 27);
}
