/*
 * XREFs of NtOpenKeyEx @ 0x1407ABD00
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(HANDLE *a1)
{
  __int64 v2; // r8
  int v3; // r9d
  int v4; // r11d
  unsigned int v5; // r8d
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v7 = 0LL;
  CmpInitializeThreadInfo((__int64)v7);
  CmOpenKey(a1, v4, v2, v3, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v7);
  return v5;
}
