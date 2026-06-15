/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180135C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801365B8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  struct _tagpropertykey v9; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v10; // [rsp+60h] [rbp-20h] BYREF
  char v11; // [rsp+B0h] [rbp+30h] BYREF
  int v12; // [rsp+B8h] [rbp+38h] BYREF
  int v13; // [rsp+C0h] [rbp+40h] BYREF
  const CHAR *v14; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v11 = 0;
  memset(&v10, 0, sizeof(v10));
  v10.iVal = 0;
  v10.vt = 2;
  v9.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  v9.pid = 2;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v9, &v10);
  v7 = v3;
  if ( v3 >= 0 )
  {
    *(_OWORD *)&v10.vt = 0LL;
    v10.vt = 65;
    v10.lVal = 1;
    v10.bstrblobVal.pData = (BYTE *)&v11;
    v9.pid = 2;
    v9.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v9, &v10);
    v7 = v3;
    if ( v3 < 0 )
    {
      if ( (unsigned int)dword_1801C0258 <= 2 )
        return v7;
      v13 = 235;
      goto LABEL_6;
    }
    if ( !*((_DWORD *)this + 24) )
      (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
  }
  else if ( (unsigned int)dword_1801C0258 > 2 )
  {
    v13 = 226;
LABEL_6:
    v12 = v3;
    v14 = "SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_18018C41C,
      v5,
      v6,
      &v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  return v7;
}
