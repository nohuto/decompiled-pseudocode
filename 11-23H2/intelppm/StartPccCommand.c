/*
 * XREFs of StartPccCommand @ 0x1C003AD90
 * Callers:
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00374CC (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0037788 (CpcHighestNotifyWorker.c)
 *     AcquirePccSubspace @ 0x1C003A990 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
