/*
 * XREFs of LdrpWaitForInitializationComplete @ 0x180002CAC
 * Callers:
 *     LdrpInitializeInternal @ 0x180073EC8 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
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
      1209,
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
        1227,
        (unsigned int)"LdrpWaitForInitializationComplete",
        1,
        "Delaying execution for hot patch initialization failed with status 0x%08lx\n",
        v4);
  }
}
