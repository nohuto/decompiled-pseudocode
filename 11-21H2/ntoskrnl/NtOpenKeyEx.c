/*
 * XREFs of NtOpenKeyEx @ 0x1407CA940
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(int a1)
{
  int v2; // r8d
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
