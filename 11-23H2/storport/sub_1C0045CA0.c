/*
 * XREFs of sub_1C0045CA0 @ 0x1C0045CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_1C0045CA0(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v2; // r8
  char v3; // r9
  __int64 v4; // r10

  result = sub_1C000E2EC(a1);
  if ( result )
  {
    LOBYTE(v2) = v3;
    return (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*((_QWORD *)result + 95) + 8LL)
                                                                         + 96LL))(
                       *((_QWORD *)result + 95),
                       v4,
                       v2);
  }
  return result;
}
