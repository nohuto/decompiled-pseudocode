/*
 * XREFs of NtUnloadKeyEx @ 0x140875ED0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  void *v2; // r9
  __int64 v3; // r10
  NTSTATUS v4; // r8d
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v6);
  CmUnloadKey(v3, 0, 1, v2);
  CmCleanupThreadInfo(v6);
  return v4;
}
