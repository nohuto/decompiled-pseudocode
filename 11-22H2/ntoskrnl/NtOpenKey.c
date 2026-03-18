/*
 * XREFs of NtOpenKey @ 0x1407ACA00
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC5E0 (ExpWatchProductTypeWork.c)
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8650 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140B74EE0 (IopProtectSystemPartition.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 */

__int64 NtOpenKey()
{
  __int64 v0; // r8
  int v1; // r10d
  HANDLE *v2; // r11
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  CmOpenKey(v2, v1, v0, 0, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v5);
  return v3;
}
