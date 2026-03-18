/*
 * XREFs of MiLockAwePagesExclusive @ 0x14064AFF0
 * Callers:
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x140A42110 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F760 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
