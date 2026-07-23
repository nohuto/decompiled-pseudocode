/*
 * XREFs of KiDowngradeIsolationUnitLockHandle @ 0x1403097C4
 * Callers:
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x14057722C (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 * Callees:
 *     KzReleaseAdditionalPrcbLocks @ 0x14056D7E4 (KzReleaseAdditionalPrcbLocks.c)
 */

__int64 __fastcall KiDowngradeIsolationUnitLockHandle(int *a1, int a2)
{
  unsigned __int64 *v2; // r8
  int v3; // r9d
  unsigned __int64 v4; // r10
  int v6; // r9d
  unsigned int v8; // r11d
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 *v11; // rdi
  unsigned __int8 *v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *a1;
  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v14 = v4;
  v6 = v3 & 1;
  v8 = 0;
  if ( v6 != a2 )
  {
    if ( v6 )
    {
      v9 = *(unsigned __int8 **)(v4 + 34904);
      v10 = *v9;
      v11 = (unsigned __int64 *)(v9 + 8);
    }
    else
    {
      v11 = &v14;
      v10 = 1LL;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v12 = *(unsigned __int8 **)(v4 + 34904);
        v8 = *v12;
        v2 = (unsigned __int64 *)(v12 + 8);
      }
    }
    else
    {
      v2 = &v14;
      v8 = 1;
    }
    result = KzReleaseAdditionalPrcbLocks(v11, v10, v2, v8);
    *(_QWORD *)a1 ^= (*a1 ^ a2) & 1;
  }
  return result;
}
