/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x14073E880
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x1406D31FC (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1406DC350 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402BCA70 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
