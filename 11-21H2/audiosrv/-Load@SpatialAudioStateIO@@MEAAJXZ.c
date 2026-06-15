/*
 * XREFs of ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x18000E130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioStateIO::Load(SpatialAudioStateIO *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edi
  _OWORD *v9; // rax
  __int128 v10; // [rsp+40h] [rbp-40h] BYREF
  int v11; // [rsp+50h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  const char *v16; // [rsp+B0h] [rbp+30h] BYREF

  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  v2 = *((_QWORD *)this + 66);
  v11 = 2;
  v10 = PKEY_SpatialAudio_Endpoint_State;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &v10, pvar);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v14 = v3;
      v16 = "SpatialAudioStateIO::Load";
      v15 = 28;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_18018C41C,
        v5,
        v6,
        (__int64)&v16,
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
