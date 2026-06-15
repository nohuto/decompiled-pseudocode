/*
 * XREFs of ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x180011C78
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180012000 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18013A4B4 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceProperties(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-28h] BYREF
  _OWORD *v17; // [rsp+50h] [rbp-18h]
  int v18; // [rsp+90h] [rbp+28h] BYREF
  int v19; // [rsp+98h] [rbp+30h] BYREF
  const char *v20; // [rsp+A0h] [rbp+38h] BYREF
  const char *v21; // [rsp+A8h] [rbp+40h] BYREF

  *a2 = 1;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_DeviceProperties,
         pvar);
  v8 = v4;
  if ( v4 >= 0 )
  {
    if ( LODWORD(pvar[1]) == 146 && LOWORD(pvar[0]) == 65 )
    {
      v10 = v17;
      *(_OWORD *)((char *)this + 104) = *v17;
      *(_OWORD *)((char *)this + 120) = v10[1];
      *(_OWORD *)((char *)this + 136) = v10[2];
      *(_OWORD *)((char *)this + 152) = v10[3];
      *(_OWORD *)((char *)this + 168) = v10[4];
      *(_OWORD *)((char *)this + 184) = v10[5];
      *(_OWORD *)((char *)this + 200) = v10[6];
      *(_OWORD *)((char *)this + 216) = v10[7];
      *(_OWORD *)((char *)this + 232) = v10[8];
      *((_WORD *)this + 124) = *((_WORD *)v10 + 72);
      if ( *((_DWORD *)this + 26) == 1509949441 )
      {
        *a2 = 0;
        v8 = 0;
      }
    }
    if ( *a2 )
      goto LABEL_4;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
    v12 = Create_SpatialAudioEncoderProperties((char *)this + 108, v11, &v20);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(const char *, char *))(*(_QWORD *)v20 + 32LL))(v20, (char *)this + 250);
      v8 = v12;
      if ( v12 >= 0 || (unsigned int)dword_1801C0258 <= 2 )
        goto LABEL_17;
      v19 = 348;
    }
    else
    {
      if ( (unsigned int)dword_1801C0258 <= 2 )
      {
LABEL_17:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
        goto LABEL_4;
      }
      v19 = 345;
    }
    v18 = v12;
    v21 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_18018C41C,
      v14,
      v15,
      (__int64)&v21,
      (__int64)&v19,
      (__int64)&v18);
    goto LABEL_17;
  }
  if ( (unsigned int)dword_1801C0258 > 2 )
  {
    v18 = v4;
    v19 = 326;
    v20 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_18018C41C,
      v6,
      v7,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
LABEL_4:
  PropVariantClear(pvar);
  return v8;
}
