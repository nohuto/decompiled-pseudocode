/*
 * XREFs of ?GetDisplayAdapterLuid@CDDisplaySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800F9C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDisplaySwapChain::GetDisplayAdapterLuid(CDDisplaySwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 324);
  return (struct _LUID)a2;
}
