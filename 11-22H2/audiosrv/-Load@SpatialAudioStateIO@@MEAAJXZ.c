/*
 * XREFs of ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x18003F350
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioStateIO::Load(SpatialAudioStateIO *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  _OWORD *v9; // rax
  __int128 v10; // [rsp+40h] [rbp-40h] BYREF
  int v11; // [rsp+50h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  const CHAR *v16; // [rsp+B0h] [rbp+30h] BYREF

  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  v2 = *((_QWORD *)this + 66);
  v11 = 2;
  v10 = PKEY_SpatialAudio_Endpoint_State;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &v10, pvar);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v14 = v3;
      v16 = "SpatialAudioStateIO::Load";
      v15 = 28;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (int)&dword_180195406,
        v5,
        v6,
        &v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  else if ( LOWORD(pvar[0]) != 65
         || LODWORD(pvar[1]) != 24
         || (v9 = v13,
             *((_OWORD *)this + 34) = *v13,
             *((_QWORD *)this + 70) = *((_QWORD *)v9 + 2),
             *((int *)this + 136) >= 4) )
  {
    *((_OWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
  }
  PropVariantClear(pvar);
  return v7;
}
