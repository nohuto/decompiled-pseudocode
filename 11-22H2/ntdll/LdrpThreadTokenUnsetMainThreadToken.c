/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x18007763C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
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
