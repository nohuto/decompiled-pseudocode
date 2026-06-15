/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180011D10
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180012000 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceSettings(SpatialAudioDevicePropertyReader *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // esi
  unsigned int v8; // ebx
  bool v9; // zf
  _OWORD *v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // kr00_8
  void *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v24; // xmm0
  void *v25; // rdx
  int v26; // [rsp+40h] [rbp+7h] BYREF
  int v27; // [rsp+44h] [rbp+Bh] BYREF
  const char *v28; // [rsp+48h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp+17h] BYREF
  _OWORD *v30; // [rsp+60h] [rbp+27h]
  __int128 v31; // [rsp+68h] [rbp+2Fh] BYREF
  unsigned int v32; // [rsp+78h] [rbp+3Fh]

  v2 = *((_QWORD *)this + 51);
  *(_OWORD *)pvar = 0LL;
  v30 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v26 = v3;
      v27 = 365;
      v28 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_18018C41C,
        v5,
        v6,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26);
    }
    goto LABEL_18;
  }
  v7 = -2004286463;
  v8 = 0;
  v9 = LOWORD(pvar[0]) == 65;
  *((_DWORD *)this + 128) = 0;
  if ( !v9 || LODWORD(pvar[1]) != 76 )
    goto LABEL_34;
  v10 = v30;
  *(_OWORD *)((char *)this + 428) = *v30;
  *(_OWORD *)((char *)this + 444) = v10[1];
  *(_OWORD *)((char *)this + 460) = v10[2];
  *(_OWORD *)((char *)this + 476) = v10[3];
  *(_QWORD *)((char *)this + 492) = *((_QWORD *)v10 + 8);
  *((_DWORD *)this + 125) = *((_DWORD *)v10 + 18);
  v11 = *((_DWORD *)this + 107);
  if ( v11 != 1509949441 )
  {
    if ( v11 == 1509949442 )
      goto LABEL_6;
LABEL_34:
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_18;
    v27 = -2004286463;
    v25 = &unk_18018C41C;
    v26 = 389;
    goto LABEL_36;
  }
  v24 = *(_OWORD *)((char *)this + 444);
  *((_DWORD *)this + 124) &= ~0x80u;
  *((_DWORD *)this + 107) = 1509949442;
  *(_OWORD *)((char *)this + 460) = v24;
LABEL_6:
  *((_DWORD *)this + 128) = 1;
  PropVariantClear(pvar);
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
          *((_QWORD *)this + 51),
          &PKEY_SpatialAudio_EncoderDescriptor_Count,
          pvar);
  v7 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_18;
    v27 = v12;
    v25 = &unk_18018C41C;
    v26 = 394;
LABEL_36:
    v28 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (_DWORD)v25,
      v5,
      v6,
      (__int64)&v28,
      (__int64)&v26,
      (__int64)&v27);
    goto LABEL_18;
  }
  if ( LOWORD(pvar[0]) != 2 )
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_18;
    v27 = -2147024809;
    v25 = &unk_18018C3E2;
    v26 = 396;
    goto LABEL_36;
  }
  v13 = SLOWORD(pvar[1]);
  if ( (unsigned int)SLOWORD(pvar[1]) > 9 )
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_18;
    v27 = -2147024809;
    v25 = &unk_18018C3E2;
    v26 = 397;
    goto LABEL_36;
  }
  *((_DWORD *)this + 106) = SLOWORD(pvar[1]);
  v15 = v13;
  v14 = 834LL * v13;
  if ( !is_mul_ok(v15, 0x342uLL) )
    v14 = -1LL;
  v16 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 63) = v16;
  if ( !v16 )
  {
    v7 = -2147024882;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_18;
    v27 = -2147024882;
    v25 = &unk_18018C41C;
    v26 = 402;
    goto LABEL_36;
  }
  v7 = 0;
  if ( *((_DWORD *)this + 106) )
  {
    while ( 1 )
    {
      v17 = *((_QWORD *)this + 51);
      v32 = v8 + 2;
      v31 = PKEY_SpatialAudio_EncoderDescriptor_Array;
      v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(v17, &v31, pvar);
      v7 = v18;
      if ( v18 < 0 )
        break;
      if ( LOWORD(pvar[0]) != 65 )
      {
        v7 = -2147024809;
        if ( (unsigned int)dword_1801C0258 <= 2 )
          goto LABEL_18;
        v27 = -2147024809;
        v25 = &unk_18018C3E2;
        v26 = 413;
        goto LABEL_36;
      }
      v19 = 6LL;
      v20 = v30;
      v21 = *((_QWORD *)this + 63) + 834LL * v8;
      do
      {
        v21 += 128LL;
        v22 = *v20;
        v20 += 8;
        *(_OWORD *)(v21 - 128) = v22;
        *(_OWORD *)(v21 - 112) = *(v20 - 7);
        *(_OWORD *)(v21 - 96) = *(v20 - 6);
        *(_OWORD *)(v21 - 80) = *(v20 - 5);
        *(_OWORD *)(v21 - 64) = *(v20 - 4);
        *(_OWORD *)(v21 - 48) = *(v20 - 3);
        *(_OWORD *)(v21 - 32) = *(v20 - 2);
        *(_OWORD *)(v21 - 16) = *(v20 - 1);
        --v19;
      }
      while ( v19 );
      *(_OWORD *)v21 = *v20;
      *(_OWORD *)(v21 + 16) = v20[1];
      *(_OWORD *)(v21 + 32) = v20[2];
      *(_OWORD *)(v21 + 48) = v20[3];
      *(_WORD *)(v21 + 64) = *((_WORD *)v20 + 32);
      PropVariantClear(pvar);
      if ( ++v8 >= *((_DWORD *)this + 106) )
        goto LABEL_18;
    }
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_18;
    v27 = v18;
    v25 = &unk_18018C41C;
    v26 = 411;
    goto LABEL_36;
  }
LABEL_18:
  PropVariantClear(pvar);
  return v7;
}
