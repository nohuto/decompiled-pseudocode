/*
 * XREFs of ExDestroyPool @ 0x140606E60
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolDestroy @ 0x14060CF54 (ExpSecurePoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(ULONG_PTR a1)
{
  return ExpSecurePoolDestroy(a1);
}
