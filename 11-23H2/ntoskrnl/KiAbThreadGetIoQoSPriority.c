/*
 * XREFs of KiAbThreadGetIoQoSPriority @ 0x1403190A0
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140318E28 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiAbThreadGetIoQoSPriority(__int64 a1)
{
  return !*(_DWORD *)(a1 + 1448) || *(_DWORD *)(a1 + 1444);
}
