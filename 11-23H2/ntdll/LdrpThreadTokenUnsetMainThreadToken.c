/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x180077CAC
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 LdrpThreadTokenUnsetMainThreadToken()
{
  unsigned __int32 v0; // ebx

  v0 = NtClose(LdrpMainThreadToken);
  LdrpMainThreadToken = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    3567,
    (__int64)"LdrpThreadTokenUnsetMainThreadToken",
    2u,
    "Status: 0x%x\n",
    v0);
  return v0;
}
