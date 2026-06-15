/*
 * XREFs of ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x180137450
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180136AE0 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 *     ?IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARIANT@@@Z @ 0x180137E70 (-IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARI.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        const CHAR *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned __int16 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v21; // [rsp+40h] [rbp-29h] BYREF
  int v22; // [rsp+44h] [rbp-25h] BYREF
  CHAR *v23; // [rsp+48h] [rbp-21h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+60h] [rbp-9h]
  __int128 v26; // [rsp+68h] [rbp-1h] BYREF
  int v27; // [rsp+78h] [rbp+Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v23 = (CHAR *)a4;
  v25 = 0LL;
  *(_OWORD *)pvar = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v8 = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_Count,
         pvar);
  v13 = v9;
  if ( v9 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 2 )
    {
      v14 = (unsigned __int16)pvar[1];
      v26 = PKEY_SpatialAudio_Metadata_Id_Array;
      v27 = 2;
      PropVariantClear(pvar);
      v25 = 0LL;
      *(_OWORD *)pvar = 0LL;
      if ( v14 )
      {
        while ( 1 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
                  *((_QWORD *)this + 51),
                  &v26,
                  pvar);
          v13 = v15;
          if ( v15 < 0 )
            break;
          if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 18 )
          {
            v13 = -2147024809;
            if ( (unsigned int)dword_1801C0258 > 2 )
            {
              v22 = -2147024809;
              v23 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
              v21 = 488;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v16,
                byte_18018C3E2,
                v17,
                v18,
                (const CHAR **)&v23,
                (__int64)&v21,
                (__int64)&v22);
            }
            goto LABEL_19;
          }
          v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)v25;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)v25 )
            v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v25 + 8);
          if ( !v19 )
          {
            if ( a3 )
              *a3 = *(_WORD *)(v25 + 16);
            *(_DWORD *)v23 = v8;
            goto LABEL_19;
          }
          PropVariantClear(pvar);
          ++v27;
          if ( ++v8 >= v14 )
            goto LABEL_18;
        }
        if ( (unsigned int)dword_1801C0258 > 2 )
        {
          v22 = v15;
          v21 = 486;
          v23 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v16,
            byte_18018C41C,
            v17,
            v18,
            (const CHAR **)&v23,
            (__int64)&v21,
            (__int64)&v22);
        }
      }
      else
      {
LABEL_18:
        v13 = -2004286973;
      }
    }
    else
    {
      v13 = -2147024809;
      if ( (unsigned int)dword_1801C0258 > 2 )
      {
        v22 = -2147024809;
        v23 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
        v21 = 475;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v10,
          byte_18018C3E2,
          v11,
          v12,
          (const CHAR **)&v23,
          (__int64)&v21,
          (__int64)&v22);
      }
    }
  }
  else if ( (unsigned int)dword_1801C0258 > 2 )
  {
    v21 = v9;
    v22 = 473;
    v23 = "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_18018C41C,
      v11,
      v12,
      (const CHAR **)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
LABEL_19:
  PropVariantClear(pvar);
  return v13;
}
