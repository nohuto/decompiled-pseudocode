/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x14029788C
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmpCaptureKeyValueArray @ 0x1406D2448 (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x1406DC350 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtCompactKeys @ 0x140A0D620 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DF10 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateTransientPoolWithQuota(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(257LL, a2, a3);
}
