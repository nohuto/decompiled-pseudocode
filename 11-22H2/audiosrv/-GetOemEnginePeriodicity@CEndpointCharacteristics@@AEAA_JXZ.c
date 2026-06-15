/*
 * XREFs of ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x18001E80C
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E154 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD60 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetOemEnginePeriodicity(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 9);
  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  v3 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_AudioEngine_PeriodUseDefault,
         pvar) >= 0
    && LOWORD(pvar[0]) == 11
    && LOWORD(pvar[1]) == 0xFFFF )
  {
    v3 = 100000LL;
  }
  else
  {
    PropVariantClear(pvar);
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           &PKEY_AudioEngine_OEMPeriod,
           pvar) >= 0
      && LOWORD(pvar[0]) == 65
      && LODWORD(pvar[1]) == 8
      && (unsigned __int64)(*v6 - 50000) <= 0xC350 )
    {
      v3 = *v6;
    }
  }
  PropVariantClear(pvar);
  return v3;
}
