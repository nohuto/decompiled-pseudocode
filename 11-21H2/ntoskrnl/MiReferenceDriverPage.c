/*
 * XREFs of MiReferenceDriverPage @ 0x1402DB710
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140337EA0 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = MiAreChargesNeededToLockPage(a1, a2, a3, a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v4 + 35) |= 0x20u;
  ++*(_WORD *)(v4 + 32);
  return result;
}
