/*
 * XREFs of ?GetSize@CCompoundBitmapLock@@W7EAAJPEAI0@Z @ 0x180066B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::GetSize(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  return CCompoundBitmapLock::GetSize((CCompoundBitmapLock *)(a1 - 8), a2, a3);
}
