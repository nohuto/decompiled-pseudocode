/*
 * XREFs of ExecutePccCommand @ 0x1C0024F38
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C00230F0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00233A4 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     ExecutePccWrite @ 0x1C0024F70 (ExecutePccWrite.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutePccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
