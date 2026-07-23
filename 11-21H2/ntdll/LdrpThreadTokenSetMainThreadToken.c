/*
 * XREFs of LdrpThreadTokenSetMainThreadToken @ 0x1800542D4
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     NtOpenThreadToken @ 0x1800A44F0 (NtOpenThreadToken.c)
 */

__int64 LdrpThreadTokenSetMainThreadToken()
{
  unsigned __int32 v0; // ebx
  HANDLE TokenHandle; // [rsp+40h] [rbp+8h] BYREF

  TokenHandle = 0LL;
  v0 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x2001Cu, 0, &TokenHandle);
  LdrpMainThreadToken = TokenHandle;
  if ( v0 != -1073741700 )
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3528,
      (__int64)"LdrpThreadTokenSetMainThreadToken",
      2u,
      "Status: 0x%x\n",
      v0);
  return v0;
}
