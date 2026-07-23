/*
 * XREFs of RtlpTraceDatabaseFree @ 0x18010F754
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x18010F4A0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

bool __fastcall RtlpTraceDatabaseFree(void *a1)
{
  ULONG_PTR v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a1;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v3, &v2, 0x8000u) >= 0;
}
