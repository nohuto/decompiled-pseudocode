/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x180054278
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

__int64 LdrpThreadTokenUnsetMainThreadToken()
{
  unsigned __int32 v0; // ebx

  v0 = NtClose(LdrpMainThreadToken);
  LdrpMainThreadToken = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    3566,
    (__int64)"LdrpThreadTokenUnsetMainThreadToken",
    2u,
    "Status: 0x%x\n",
    v0);
  return v0;
}
