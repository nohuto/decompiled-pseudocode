/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x14073E690
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x1406D31CC (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1406DC320 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402BC7E0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
