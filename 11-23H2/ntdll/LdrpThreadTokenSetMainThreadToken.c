/*
 * XREFs of LdrpThreadTokenSetMainThreadToken @ 0x180077D08
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     NtOpenThreadToken @ 0x1800A1330 (NtOpenThreadToken.c)
 */

__int64 LdrpThreadTokenSetMainThreadToken()
{
  unsigned int v0; // ebx
  void *v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = NtOpenThreadToken(-2LL, 131100LL, 0LL, &v2);
  LdrpMainThreadToken = v2;
  if ( v0 != -1073741700 )
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3529LL,
      (__int64)"LdrpThreadTokenSetMainThreadToken",
      2LL,
      "Status: 0x%x\n",
      v0);
  return v0;
}
