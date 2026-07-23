/*
 * XREFs of sub_14074D510 @ 0x14074D510
 * Callers:
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14074D510(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i - 5), 0LL);
    if ( (_InterlockedExchangeAdd64(i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(i - 5);
    result = sub_1402AFC00((ULONG_PTR)(i - 5));
  }
  return result;
}
