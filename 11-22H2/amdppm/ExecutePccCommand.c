/*
 * XREFs of ExecutePccCommand @ 0x1C0025B88
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0023D6C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0024014 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     ExecutePccWrite @ 0x1C0025BC0 (ExecutePccWrite.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutePccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
