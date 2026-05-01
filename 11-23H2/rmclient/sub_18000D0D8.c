/*
 * XREFs of sub_18000D0D8 @ 0x18000D0D8
 * Callers:
 *     sub_18000CFDC @ 0x18000CFDC (sub_18000CFDC.c)
 *     sub_18000D00C @ 0x18000D00C (sub_18000D00C.c)
 * Callees:
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 */

void __fastcall sub_18000D0D8(struct _RTL_CRITICAL_SECTION *a1)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = a1[1].LockSemaphore;
  a1[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    sub_18000DD90();
  DeleteCriticalSection(a1);
}
