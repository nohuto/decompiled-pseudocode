/*
 * XREFs of MiUnlockNestedProtoPoolPage @ 0x14035A7BC
 * Callers:
 *     MiUnlockDataCopyPages @ 0x14035026C (MiUnlockDataCopyPages.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiUnlockNestedProtoPoolPage(__int64 a1)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1);
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
