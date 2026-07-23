/*
 * XREFs of LdrpWaitForInitializationComplete @ 0x18007B404
 * Callers:
 *     LdrpInitializeInternal @ 0x18007B218 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 */

void __fastcall LdrpWaitForInitializationComplete(_DWORD *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  LARGE_INTEGER DelayInterval; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v3 = NtWaitForSingleObject(*a2, 0, 0LL);
    if ( v3 >= 0 )
      return;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1208,
      (__int64)"LdrpWaitForInitializationComplete",
      1u,
      "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
      v3);
  }
  DelayInterval.QuadPart = -300000LL;
  while ( *a1 == 1 )
  {
    v4 = ZwDelayExecution(0, &DelayInterval);
    if ( v4 < 0 )
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        1226,
        (__int64)"LdrpWaitForInitializationComplete",
        1u,
        "Delaying execution for hot patch initialization failed with status 0x%08lx\n",
        v4);
  }
}
