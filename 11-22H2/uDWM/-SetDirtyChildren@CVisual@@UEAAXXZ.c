/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180058670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 22) |= 1u;
}
