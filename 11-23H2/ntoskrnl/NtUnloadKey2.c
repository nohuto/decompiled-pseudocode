/*
 * XREFs of NtUnloadKey2 @ 0x140698D40
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 */

__int64 NtUnloadKey2()
{
  unsigned int v0; // r10d
  __int64 v1; // r11
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  CmUnloadKey(v1, v0, 0LL, 0LL);
  CmCleanupThreadInfo(v4);
  return v2;
}
