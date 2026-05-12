/*
 * XREFs of RaCallMiniportHwInitialize @ 0x1C0033E8C
 * Callers:
 *     RaidAdapterReInitialize @ 0x1C003715C (RaidAdapterReInitialize.c)
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportHwInitialize(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 8LL))(*(_QWORD *)(a1 + 240) + 16LL) == 0
       ? 0xC0000001
       : 0;
}
