/*
 * XREFs of ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180144FE8
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18014CE3C (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    *(_OWORD *)pvar = 0LL;
    v5 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      LOBYTE(v2) = LODWORD(pvar[1]) == 1;
    }
    PropVariantClear(pvar);
  }
  return v2;
}
