/*
 * XREFs of StartPccCommand @ 0x1C00252C0
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C00230F0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00233A4 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     AcquirePccSubspace @ 0x1C0024EA0 (AcquirePccSubspace.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
