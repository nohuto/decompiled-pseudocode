/*
 * XREFs of NtRIMGetDevicePreparsedDataLockfree @ 0x1C0174E00
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0177D10 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedDataLockfree(__int64 a1, __int64 a2, __int64 a3)
{
  return RIMGetDevicePreparsedDataLockfree(a1, a2, a3, 1LL);
}
