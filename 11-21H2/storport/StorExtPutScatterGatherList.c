/*
 * XREFs of StorExtPutScatterGatherList @ 0x1C0042AF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall StorExtPutScatterGatherList(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v2; // r8
  char v3; // r9
  __int64 v4; // r10

  result = RaidpPortGetAdapter(a1);
  if ( result )
  {
    LOBYTE(v2) = v3;
    return (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*((_QWORD *)result + 94) + 8LL)
                                                                         + 96LL))(
                       *((_QWORD *)result + 94),
                       v4,
                       v2);
  }
  return result;
}
