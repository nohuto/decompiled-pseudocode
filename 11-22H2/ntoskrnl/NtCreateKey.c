/*
 * XREFs of NtCreateKey @ 0x1406923A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 */

NTSTATUS __cdecl NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // r10
  NTSTATUS v10; // r8d
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  *(_OWORD *)v12 = 0LL;
  CmpInitializeThreadInfo((__int64)v12);
  CmCreateKey(v9, v7, v8);
  CmCleanupThreadInfo(v12);
  return v10;
}
