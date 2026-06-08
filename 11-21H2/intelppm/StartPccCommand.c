/*
 * XREFs of StartPccCommand @ 0x1C0039AA0
 * Callers:
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00362A0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0036564 (CpcHighestNotifyWorker.c)
 *     AcquirePccSubspace @ 0x1C00396A0 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartPccCommand(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 104))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) = ((int)result >= 0) | *(_DWORD *)(a1 + 144) & 0xFFFFFFFE;
  return result;
}
