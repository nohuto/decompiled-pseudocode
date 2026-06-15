/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18001B9D8
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001AD30 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceSettings(SpatialAudioDevicePropertyReader *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  _OWORD *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r14d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rdx
  __int128 v30; // xmm0
  __int128 v32; // xmm0
  int v33; // [rsp+40h] [rbp-59h] BYREF
  int v34; // [rsp+44h] [rbp-55h] BYREF
  const CHAR *v35; // [rsp+48h] [rbp-51h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD *v37; // [rsp+60h] [rbp-39h]
  __int128 v38; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+80h] [rbp-19h] BYREF
  const char *v41; // [rsp+A0h] [rbp+7h]
  int v42; // [rsp+A8h] [rbp+Fh]
  int v43; // [rsp+ACh] [rbp+13h]
  int *v44; // [rsp+B0h] [rbp+17h]
  int v45; // [rsp+B8h] [rbp+1Fh]
  int v46; // [rsp+BCh] [rbp+23h]
  int *v47; // [rsp+C0h] [rbp+27h]
  int v48; // [rsp+C8h] [rbp+2Fh]
  int v49; // [rsp+CCh] [rbp+33h]

  v2 = *((_QWORD *)this + 51);
  *(_OWORD *)pvar = 0LL;
  v37 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v33 = v3;
      v34 = 365;
      v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (int)&dword_180195406,
        v5,
        v6,
        &v35,
        (__int64)&v34,
        (__int64)&v33);
    }
    goto LABEL_18;
  }
  *((_DWORD *)this + 128) = 0;
  v7 = -2004286463;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 76 )
    goto LABEL_19;
  v8 = v37;
  *(_OWORD *)((char *)this + 428) = *v37;
  *(_OWORD *)((char *)this + 444) = v8[1];
  *(_OWORD *)((char *)this + 460) = v8[2];
  *(_OWORD *)((char *)this + 476) = v8[3];
  *(_QWORD *)((char *)this + 492) = *((_QWORD *)v8 + 8);
  *((_DWORD *)this + 125) = *((_DWORD *)v8 + 18);
  v9 = *((_DWORD *)this + 107);
  if ( v9 != 1509949441 )
  {
    if ( v9 == 1509949442 )
      goto LABEL_6;
LABEL_19:
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v47 = &v34;
      v48 = 4;
      v44 = &v33;
      v45 = 4;
      v41 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      v34 = -2004286463;
      v33 = 389;
      v42 = 53;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1801CD1E8, (int)&dword_180195406, 0, 0, 5u, &v40);
    }
    goto LABEL_18;
  }
  v32 = *(_OWORD *)((char *)this + 444);
  *((_DWORD *)this + 124) &= ~0x80u;
  *((_DWORD *)this + 107) = 1509949442;
  *(_OWORD *)((char *)this + 460) = v32;
LABEL_6:
  *((_DWORD *)this + 128) = 1;
  PropVariantClear(pvar);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
          *((_QWORD *)this + 51),
          &PKEY_SpatialAudio_EncoderDescriptor_Count,
          pvar);
  v7 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v34 = v10;
      v33 = 394;
      v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)&dword_180195406,
        v12,
        v13,
        &v35,
        (__int64)&v33,
        (__int64)&v34);
    }
  }
  else if ( LOWORD(pvar[0]) == 2 )
  {
    v14 = SLOWORD(pvar[1]);
    if ( (unsigned int)SLOWORD(pvar[1]) > 9 )
    {
      v7 = -2147024809;
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v34 = -2147024809;
        v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
        v33 = 397;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          (int)&unk_1801953CC,
          v12,
          v13,
          &v35,
          (__int64)&v33,
          (__int64)&v34);
      }
    }
    else
    {
      *((_DWORD *)this + 106) = SLOWORD(pvar[1]);
      v16 = v14;
      v15 = 834LL * v14;
      if ( !is_mul_ok(v16, 0x342uLL) )
        v15 = -1LL;
      v17 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      *((_QWORD *)this + 63) = v17;
      if ( v17 )
      {
        v7 = 0;
        v21 = 0;
        if ( *((_DWORD *)this + 106) )
        {
          while ( 1 )
          {
            v22 = *((_QWORD *)this + 51);
            v39 = v21 + 2;
            v38 = PKEY_SpatialAudio_EncoderDescriptor_Array;
            v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
                    v22,
                    &v38,
                    pvar);
            v7 = v23;
            if ( v23 < 0 )
              break;
            if ( LOWORD(pvar[0]) != 65 )
            {
              v7 = -2147024809;
              if ( (unsigned int)dword_1801CD1E8 > 2 )
              {
                v34 = -2147024809;
                v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
                v33 = 413;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v24,
                  (int)&unk_1801953CC,
                  v25,
                  v26,
                  &v35,
                  (__int64)&v33,
                  (__int64)&v34);
              }
              goto LABEL_18;
            }
            v27 = 6LL;
            v28 = v37;
            v29 = *((_QWORD *)this + 63) + 834LL * v21;
            do
            {
              v30 = *v28;
              v28 += 8;
              *(_OWORD *)v29 = v30;
              v29 += 128LL;
              *(_OWORD *)(v29 - 112) = *(v28 - 7);
              *(_OWORD *)(v29 - 96) = *(v28 - 6);
              *(_OWORD *)(v29 - 80) = *(v28 - 5);
              *(_OWORD *)(v29 - 64) = *(v28 - 4);
              *(_OWORD *)(v29 - 48) = *(v28 - 3);
              *(_OWORD *)(v29 - 32) = *(v28 - 2);
              *(_OWORD *)(v29 - 16) = *(v28 - 1);
              --v27;
            }
            while ( v27 );
            *(_OWORD *)v29 = *v28;
            *(_OWORD *)(v29 + 16) = v28[1];
            *(_OWORD *)(v29 + 32) = v28[2];
            *(_OWORD *)(v29 + 48) = v28[3];
            *(_WORD *)(v29 + 64) = *((_WORD *)v28 + 32);
            PropVariantClear(pvar);
            if ( ++v21 >= *((_DWORD *)this + 106) )
              goto LABEL_18;
          }
          if ( (unsigned int)dword_1801CD1E8 > 2 )
          {
            v34 = v23;
            v33 = 411;
            v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v24,
              (int)&dword_180195406,
              v25,
              v26,
              &v35,
              (__int64)&v33,
              (__int64)&v34);
          }
        }
      }
      else
      {
        v7 = -2147024882;
        if ( (unsigned int)dword_1801CD1E8 > 2 )
        {
          v34 = -2147024882;
          v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
          v33 = 402;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v18,
            (int)&dword_180195406,
            v19,
            v20,
            &v35,
            (__int64)&v33,
            (__int64)&v34);
        }
      }
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v34 = -2147024809;
      v35 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      v33 = 396;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)&unk_1801953CC,
        v12,
        v13,
        &v35,
        (__int64)&v33,
        (__int64)&v34);
    }
  }
LABEL_18:
  PropVariantClear(pvar);
  return v7;
}
