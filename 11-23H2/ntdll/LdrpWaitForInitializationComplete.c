/*
 * XREFs of LdrpWaitForInitializationComplete @ 0x180002CDC
 * Callers:
 *     LdrpInitializeInternal @ 0x180074538 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     ZwDelayExecution @ 0x1800A1530 (ZwDelayExecution.c)
 */

void __fastcall LdrpWaitForInitializationComplete(_DWORD *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  int v4; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v3 = NtWaitForSingleObject(*a2, 0, 0LL);
    if ( v3 >= 0 )
      return;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1211,
      (unsigned int)"LdrpWaitForInitializationComplete",
      1,
      "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
      v3);
  }
  v5 = -300000LL;
  while ( *a1 == 1 )
  {
    v4 = ZwDelayExecution(0LL, &v5);
    if ( v4 < 0 )
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        1229,
        (unsigned int)"LdrpWaitForInitializationComplete",
        1,
        "Delaying execution for hot patch initialization failed with status 0x%08lx\n",
        v4);
  }
}
