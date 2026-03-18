/*
 * XREFs of DestroyUnlockedCursor @ 0x1C00B9690
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

bool __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return _DestroyCursor(a1, 2u);
}
