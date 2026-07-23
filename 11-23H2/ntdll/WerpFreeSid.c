/*
 * XREFs of WerpFreeSid @ 0x1800E91BC
 * Callers:
 *     SendMessageToWERService @ 0x1800E8A8C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800E8EAC (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall WerpFreeSid(void *a1)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 12LL;
  if ( a1 )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
  else
    return -1073741811;
}
