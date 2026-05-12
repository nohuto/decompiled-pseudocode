/*
 * XREFs of sub_1C0045960 @ 0x1C0045960
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

_DWORD *__fastcall sub_1C0045960(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v2; // r9

  result = sub_1C000E2EC(a1);
  if ( result )
    return (_DWORD *)KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)result + 536) + 48 * v2 + 24));
  return result;
}
