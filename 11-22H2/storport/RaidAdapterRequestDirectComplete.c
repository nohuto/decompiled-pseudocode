/*
 * XREFs of RaidAdapterRequestDirectComplete @ 0x1C00377E4
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C000E780 (RaidLogMiniportCompletion.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

void __fastcall RaidAdapterRequestDirectComplete(__int64 a1, __int64 a2)
{
  KIRQL CurrentIrql; // al
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  BugCheckParameter4 = CurrentIrql;
  if ( CurrentIrql > 2u )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v6, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *(_QWORD *)(a2 + 168), BugCheckParameter4);
  }
  if ( (*(_BYTE *)(a1 + 584) & 2) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5024));
  if ( (qword_1C0092468 & 8) != 0 )
    RaidLogMiniportCompletion((_QWORD *)a2);
  if ( (*(_BYTE *)(a1 + 564) & 0x10) == 0 || _InterlockedExchange((volatile __int32 *)(a2 + 776), 4) != 1 )
  {
    v7 = *(_QWORD *)(a2 + 160);
    if ( v7 )
      *(_BYTE *)(v7 + 141) = -85;
    v8 = (*(_BYTE *)(a2 + 17) & 1) == 0;
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    if ( !v8 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(a2 + 748));
      *(_BYTE *)(a2 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a2 + 656) )
    {
      if ( (unsigned __int8)BugCheckParameter4 < 2u )
        LOBYTE(BugCheckParameter4) = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64))(a2 + 656))(a2);
      if ( (unsigned __int8)BugCheckParameter4 < 2u )
        KeLowerIrql(BugCheckParameter4);
    }
  }
}
