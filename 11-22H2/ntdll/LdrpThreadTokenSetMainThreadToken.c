/*
 * XREFs of LdrpThreadTokenSetMainThreadToken @ 0x180077698
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     NtOpenThreadToken @ 0x18009F270 (NtOpenThreadToken.c)
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
