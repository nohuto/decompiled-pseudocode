/*
 * XREFs of TppQueueRemoveHead @ 0x180124D54
 * Callers:
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall TppQueueRemoveHead(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *Value; // rdi
  unsigned __int64 v3; // rax
  _RTL_SRWLOCK *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  Value = (_RTL_SRWLOCK *)a1->Value;
  if ( *(_RTL_SRWLOCK **)(a1->Value + 8) != a1 || (v3 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
    __fastfail(3u);
  a1->Value = v3;
  *(_QWORD *)(v3 + 8) = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( Value != a1 )
    return Value;
  return result;
}
