/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x180136620
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801365B8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  struct _tagpropertykey v9; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v10; // [rsp+60h] [rbp-20h] BYREF
  int v11; // [rsp+B0h] [rbp+30h] BYREF
  int v12; // [rsp+B8h] [rbp+38h] BYREF
  const CHAR *v13; // [rsp+C0h] [rbp+40h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  memset(&v10, 0, sizeof(v10));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v10.iVal = 0;
  v9.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  v10.vt = 2;
  v9.pid = 2;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v9, &v10);
  v7 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 24) = 0;
  }
  else if ( (unsigned int)dword_1801C0258 > 2 )
  {
    v11 = v3;
    v12 = 191;
    v13 = "SpatialAudioDevicePropertyWriter::SignalChange";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_18018C41C,
      v5,
      v6,
      &v13,
      (__int64)&v12,
      (__int64)&v11);
  }
  return v7;
}
