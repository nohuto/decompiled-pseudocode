/*
 * XREFs of StorEnableAdapterEtwTracing @ 0x1C005A430
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     StorEtwEnableCallback @ 0x1C005A5CC (StorEtwEnableCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorEnableAdapterEtwTracing(__int64 a1, char a2)
{
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 568);
  if ( !v4 )
    return 3221225485LL;
  v5 = *(void (__fastcall **)(__int64))(v4 + 176);
  if ( !v5 )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 109) & 2) != 0) != a2 )
  {
    v5(*(_QWORD *)(a1 + 576) + 16LL);
    *(_BYTE *)(a1 + 109) ^= (*(_BYTE *)(a1 + 109) ^ (2 * a2)) & 2;
  }
  return 0LL;
}
