/*
 * XREFs of RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800F38C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 */

bool __fastcall RtlTryConvertSRWLockSharedToExclusiveOrRelease(volatile signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rax
  signed __int64 v5; // rtt
  _QWORD *i; // rax
  __int64 v8; // rcx

  v3 = *a1;
  if ( (*a1 & 1) == 0 )
    RtlRaiseStatus(-1073741212, (__int64)a1, a3);
  while ( (v3 & 2) == 0 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, v3 - 16, v3);
    if ( v5 == v3 )
      return (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 16;
  }
  if ( (v3 & 8) != 0 )
  {
    for ( i = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
    {
      v8 = i[1];
      if ( v8 )
        break;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 32), 0xFFFFFFFF) > 1 )
      return 0;
    _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 1;
}
