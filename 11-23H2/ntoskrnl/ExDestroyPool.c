/*
 * XREFs of ExDestroyPool @ 0x1406073B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolDestroy @ 0x14060D4A4 (ExpSecurePoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(ULONG_PTR a1)
{
  return ExpSecurePoolDestroy(a1);
}
