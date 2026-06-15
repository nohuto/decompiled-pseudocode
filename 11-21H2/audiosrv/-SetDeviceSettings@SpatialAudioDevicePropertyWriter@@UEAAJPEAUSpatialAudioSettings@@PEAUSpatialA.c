/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1801362B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801365B8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  int v23; // eax
  unsigned __int8 *v24; // rdx
  unsigned int v25; // r15d
  int v26; // eax
  int v28; // [rsp+40h] [rbp-99h] BYREF
  int v29; // [rsp+44h] [rbp-95h] BYREF
  const CHAR *v30; // [rsp+48h] [rbp-91h] BYREF
  struct tagPROPVARIANT v31; // [rsp+50h] [rbp-89h] BYREF
  struct _tagpropertykey v32; // [rsp+70h] [rbp-69h] BYREF
  int v33; // [rsp+90h] [rbp-49h] BYREF
  __int128 v34; // [rsp+94h] [rbp-45h]
  __int128 v35; // [rsp+A4h] [rbp-35h]
  __int128 v36; // [rsp+B4h] [rbp-25h]
  __int128 v37; // [rsp+C4h] [rbp-15h]
  __int64 v38; // [rsp+D4h] [rbp-5h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v11 = v5;
  v12 = v5 / 0x342;
  v13 = v11 - 834 * v12;
  if ( !a2 || v13 )
  {
    v22 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      return v22;
    v28 = 473;
    v24 = byte_18018C3E2;
LABEL_24:
    v29 = -2147024809;
    goto LABEL_25;
  }
  v14 = *(_OWORD *)a2;
  v33 = 1509949442;
  v15 = *((_OWORD *)a2 + 1);
  v31.bstrblobVal.pData = (BYTE *)&v33;
  v34 = v14;
  v16 = *((_OWORD *)a2 + 2);
  v32.pid = 2;
  v35 = v15;
  v17 = *((_OWORD *)a2 + 3);
  v36 = v16;
  v38 = *((_QWORD *)a2 + 8);
  v37 = v17;
  v32.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
  *(_OWORD *)&v31.vt = 0LL;
  v31.vt = 65;
  v31.lVal = 76;
  v18 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, &v31);
  v22 = v18;
  if ( v18 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v28 = v18;
      v29 = 489;
      v30 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        byte_18018C41C,
        v20,
        v21,
        &v30,
        (__int64)&v29,
        (__int64)&v28);
    }
    return v22;
  }
  memset(&v31, 0, sizeof(v31));
  v32.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
  v31.vt = 2;
  v31.iVal = v12;
  v32.pid = 2;
  v23 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, &v31);
  v22 = v23;
  if ( v23 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      return v22;
    v29 = v23;
    v24 = byte_18018C41C;
    v28 = 496;
LABEL_25:
    v30 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      v24,
      v9,
      v10,
      &v30,
      (__int64)&v28,
      (__int64)&v29);
    return v22;
  }
  if ( (_DWORD)v12 )
  {
    if ( !a3 )
    {
      v22 = -2147024809;
      if ( (unsigned int)dword_1801C0258 <= 2 )
        return v22;
      v28 = 500;
      v24 = byte_18018C3E2;
      goto LABEL_24;
    }
    v25 = 0;
    while ( 1 )
    {
      v32.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
      *(_OWORD *)&v31.vt = 0LL;
      v32.pid = v25 + 2;
      v31.vt = 65;
      v31.bstrblobVal.pData = (BYTE *)a3 + 834 * v25;
      v31.lVal = 834;
      v26 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v32, &v31);
      v22 = v26;
      if ( v26 < 0 )
        break;
      if ( ++v25 >= (unsigned int)v12 )
        goto LABEL_18;
    }
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v29 = v26;
      v24 = byte_18018C41C;
      v28 = 513;
      goto LABEL_25;
    }
  }
  else
  {
LABEL_18:
    if ( !*((_DWORD *)this + 24) )
      (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
  }
  return v22;
}
