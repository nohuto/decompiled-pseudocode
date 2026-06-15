/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180143330
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180143644 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  int v22; // eax
  const int *v23; // rdx
  unsigned int v24; // r15d
  int v25; // eax
  int v27; // [rsp+40h] [rbp-99h] BYREF
  int v28; // [rsp+44h] [rbp-95h] BYREF
  const CHAR *v29; // [rsp+48h] [rbp-91h] BYREF
  struct tagPROPVARIANT v30; // [rsp+50h] [rbp-89h] BYREF
  struct _tagpropertykey v31; // [rsp+70h] [rbp-69h] BYREF
  int v32; // [rsp+90h] [rbp-49h] BYREF
  __int128 v33; // [rsp+94h] [rbp-45h]
  __int128 v34; // [rsp+A4h] [rbp-35h]
  __int128 v35; // [rsp+B4h] [rbp-25h]
  __int128 v36; // [rsp+C4h] [rbp-15h]
  __int64 v37; // [rsp+D4h] [rbp-5h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v10 = v5;
  v11 = 0x13A524387AC82261LL;
  v12 = v5 / 0x342;
  if ( !a2 || v10 != 834 * (v10 / 0x342) )
  {
    v21 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      return v21;
    v27 = 473;
    v23 = (const int *)&unk_1801953FE;
LABEL_24:
    v28 = -2147024809;
    goto LABEL_25;
  }
  v13 = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 1);
  v30.bstrblobVal.pData = (BYTE *)&v32;
  v33 = v13;
  v32 = 1509949442;
  v15 = *((_OWORD *)a2 + 2);
  v31.pid = 2;
  v34 = v14;
  v16 = *((_OWORD *)a2 + 3);
  v35 = v15;
  v37 = *((_QWORD *)a2 + 8);
  v36 = v16;
  v31.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
  *(_OWORD *)&v30.vt = 0LL;
  v30.vt = 65;
  v30.lVal = 76;
  v17 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
  v21 = v17;
  if ( v17 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v27 = v17;
      v28 = 489;
      v29 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        (int)&dword_1801953CC,
        v19,
        v20,
        &v29,
        (__int64)&v28,
        (__int64)&v27);
    }
    return v21;
  }
  memset(&v30, 0, sizeof(v30));
  v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
  v30.vt = 2;
  v30.iVal = v12;
  v31.pid = 2;
  v22 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
  v21 = v22;
  if ( v22 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      return v21;
    v28 = v22;
    v23 = &dword_1801953CC;
    v27 = 496;
LABEL_25:
    v29 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (int)v23,
      v11,
      v9,
      &v29,
      (__int64)&v27,
      (__int64)&v28);
    return v21;
  }
  if ( (_DWORD)v12 )
  {
    if ( !a3 )
    {
      v21 = -2147024809;
      if ( (unsigned int)dword_1801CD1E8 <= 2 )
        return v21;
      v27 = 500;
      v23 = (const int *)&unk_1801953FE;
      goto LABEL_24;
    }
    v24 = 0;
    while ( 1 )
    {
      v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
      *(_OWORD *)&v30.vt = 0LL;
      v31.pid = v24 + 2;
      v30.vt = 65;
      v30.bstrblobVal.pData = (BYTE *)a3 + 834 * v24;
      v30.lVal = 834;
      v25 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
      v21 = v25;
      if ( v25 < 0 )
        break;
      if ( ++v24 >= (unsigned int)v12 )
        goto LABEL_18;
    }
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v28 = v25;
      v23 = &dword_1801953CC;
      v27 = 513;
      goto LABEL_25;
    }
  }
  else
  {
LABEL_18:
    if ( !*((_DWORD *)this + 24) )
      (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
  }
  return v21;
}
