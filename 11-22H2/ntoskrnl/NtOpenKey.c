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

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v3; // r8
  int v4; // r10d
  HANDLE *v5; // r11
  NTSTATUS v6; // r8d
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v8 = 0LL;
  CmpInitializeThreadInfo((__int64)v8);
  CmOpenKey(v5, v4, v3, 0, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v8);
  return v6;
}
