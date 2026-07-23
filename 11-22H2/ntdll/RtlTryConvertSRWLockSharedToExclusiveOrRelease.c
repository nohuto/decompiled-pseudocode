/*
 * XREFs of RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x1800F35E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

bool __fastcall RtlTryConvertSRWLockSharedToExclusiveOrRelease(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rtt
  _QWORD *i; // rax
  __int64 v6; // rcx

  v1 = *a1;
  if ( (*a1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  while ( (v1 & 2) == 0 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1, v1 - 16, v1);
    if ( v3 == v1 )
      return (v1 & 0xFFFFFFFFFFFFFFF0uLL) == 16;
  }
  if ( (v1 & 8) != 0 )
  {
    for ( i = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
    {
      v6 = i[1];
      if ( v6 )
        break;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 32), 0xFFFFFFFF) > 1 )
      return 0;
    _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 1;
}
