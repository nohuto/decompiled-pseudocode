/*
 * XREFs of InvokePTStateChange @ 0x1C0009304
 * Callers:
 *     PerfControlPTStates @ 0x1C0009380 (PerfControlPTStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChange(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10

  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 48);
    a1 += 8LL;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a1)(v3, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), a3);
}
