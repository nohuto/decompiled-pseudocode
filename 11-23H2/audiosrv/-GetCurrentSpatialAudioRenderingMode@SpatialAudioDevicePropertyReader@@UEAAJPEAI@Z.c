/*
 * XREFs of ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180143EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     AudioEncoderIdToRenderingMode @ 0x1801437F0 (AudioEncoderIdToRenderingMode.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch] BYREF
  const CHAR *v18; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 52) + 48LL))(*((_QWORD *)this + 52), v19);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v14 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - v19[0];
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == v19[0] )
        v14 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - v19[1];
      if ( v14 )
        *a2 = AudioEncoderIdToRenderingMode(v19, v10, v12, v13);
      else
        return (*(unsigned int (__fastcall **)(SpatialAudioDevicePropertyReader *, unsigned int *))(*(_QWORD *)this
                                                                                                  + 192LL))(
                 this,
                 a2);
    }
    else if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v17 = v9;
      v16 = 813;
      v18 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)&dword_1801953CC,
        v12,
        v13,
        &v18,
        (__int64)&v16,
        (__int64)&v17);
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v16 = -2147024809;
      v18 = "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      v17 = 807;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (int)&unk_1801953FE,
        v6,
        v7,
        &v18,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
  return v8;
}
