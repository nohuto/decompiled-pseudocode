/*
 * XREFs of NtUnloadKey2 @ 0x140698D40
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  NTSTATUS v4; // r8d
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v6);
  CmUnloadKey(v3, v2, 0LL, 0LL);
  CmCleanupThreadInfo(v6);
  return v4;
}
