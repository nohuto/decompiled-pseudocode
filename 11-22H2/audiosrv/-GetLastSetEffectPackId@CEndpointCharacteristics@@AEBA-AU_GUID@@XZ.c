/*
 * XREFs of ?GetLastSetEffectPackId@CEndpointCharacteristics@@AEBA?AU_GUID@@XZ @ 0x180025E88
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct _GUID *__fastcall CEndpointCharacteristics::GetLastSetEffectPackId(
        CEndpointCharacteristics *this,
        struct _GUID *__return_ptr retstr)
{
  int v4; // r8d
  int v5; // r9d
  _DWORD *v7; // rcx
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  PROPVARIANT v10; // [rsp+60h] [rbp+8h] BYREF

  *retstr = GUID_00000000_0000_0000_0000_000000000000;
  *(_OWORD *)pvar = 0LL;
  v9 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEndpoint_LastSetEffectPack,
         pvar) >= 0
    && LOWORD(pvar[0]) == 31 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 1036);
    if ( *v7 > 5u )
    {
      v10 = pvar[1];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (_DWORD)v7,
        (unsigned int)&unk_1801962FF,
        v4,
        v5,
        (__int64)&v10);
    }
    if ( CLSIDFromString((LPCOLESTR)pvar[1], retstr) < 0 )
      *retstr = GUID_00000000_0000_0000_0000_000000000000;
  }
  PropVariantClear(pvar);
  return retstr;
}
