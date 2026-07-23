/*
 * XREFs of NtUnloadKey @ 0x140698D90
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  __int64 v1; // r10
  NTSTATUS v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  CmUnloadKey(v1, 0LL, 0LL, 0LL);
  CmCleanupThreadInfo(v4);
  return v2;
}
