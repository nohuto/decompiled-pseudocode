/*
 * XREFs of CmpCallCallBacks @ 0x1407C0568
 * Callers:
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
 * Callees:
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  return CmpCallCallBacksEx(a1, a2, 0LL, 1, a4, a5, a6);
}
