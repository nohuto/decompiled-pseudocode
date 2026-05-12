/*
 * XREFs of StorExtAcquireMSISpinLock @ 0x1C0045390
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

_DWORD *__fastcall StorExtAcquireMSISpinLock(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v2; // r9

  result = RaidpPortGetAdapter(a1);
  if ( result )
    return (_DWORD *)KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)result + 536) + 48 * v2 + 24));
  return result;
}
