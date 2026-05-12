/*
 * XREFs of RaidCompleteMiniportRequestCallback @ 0x1C00587A8
 * Callers:
 *     StorPurgeEventQueue @ 0x1C003FE40 (StorPurgeEventQueue.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     DbgGetAddressLongFromXrb @ 0x1C0031FF0 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

char __fastcall RaidCompleteMiniportRequestCallback(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, _QWORD, __int64))
{
  char result; // al
  __int64 *v10; // rdi
  unsigned int AddressLongFromXrb; // eax
  __int64 v12; // r8

  result = *(_BYTE *)(a4 - 32) & 0x1C;
  if ( result == 12 )
  {
    v10 = (__int64 *)(a4 + 168);
    if ( (qword_1C0092468 & 0x40) != 0 )
    {
      AddressLongFromXrb = DbgGetAddressLongFromXrb(a4 - 48);
      DbgLogRequest(*v10, 13, *(_QWORD *)(a4 + 112), AddressLongFromXrb, *(_QWORD *)(a4 + 120), v12, 0LL);
    }
    if ( (*(_BYTE *)(a4 - 31) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(*v10, *(unsigned int *)(a4 + 700));
      *(_BYTE *)(a4 - 31) &= ~1u;
    }
    a5(a1, a3, a4);
    *(_BYTE *)(*(_QWORD *)(a4 + 120) + 3LL) = a2;
    return (*(__int64 (__fastcall **)(__int64))(a4 + 608))(a4 - 48);
  }
  return result;
}
