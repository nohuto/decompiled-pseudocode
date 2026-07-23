/*
 * XREFs of NtOpenKeyEx @ 0x1407AC2B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  __int64 v5; // r8
  int v6; // r9d
  int v7; // r11d
  NTSTATUS v8; // r8d
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v10 = 0LL;
  CmpInitializeThreadInfo((__int64)v10);
  CmOpenKey(KeyHandle, v7, v5, v6, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v10);
  return v8;
}
