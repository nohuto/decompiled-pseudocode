/*
 * XREFs of ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x180143240
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180143694 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceProperties(
        SpatialAudioDevicePropertyWriter *this,
        BYTE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  const int *v9; // rdx
  int v10; // eax
  struct _tagpropertykey v12; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v13; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  const CHAR *v16; // [rsp+B0h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_DWORD *)a2 = 1509949441;
    *(_OWORD *)&v13.vt = 0LL;
    v13.vt = 65;
    v12.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v13.lVal = 146;
    v13.bstrblobVal.pData = a2;
    v12.pid = 2;
    v10 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v12, &v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 <= 2 )
        return v8;
      v14 = v10;
      v9 = &dword_180195406;
      v15 = 342;
      goto LABEL_6;
    }
    if ( !*((_DWORD *)this + 24) )
      (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
  }
  else
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v14 = -2147024809;
      v9 = (const int *)&unk_1801953CC;
      v15 = 331;
LABEL_6:
      v16 = "SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (int)v9,
        v6,
        v7,
        &v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  return v8;
}
