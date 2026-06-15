/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001AD30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x18001B004 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18001B12C (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18001B214 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18001B9D8 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  int v6; // eax
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int DeviceSettings; // eax
  int v12; // eax
  unsigned __int16 MaxDynamicObjectCountPC; // ax
  __int16 v14; // ax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int PositionTable; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  int *v28; // rax
  int *v29; // [rsp+38h] [rbp-39h]
  int v30; // [rsp+48h] [rbp-29h] BYREF
  int v31; // [rsp+4Ch] [rbp-25h] BYREF
  int v32; // [rsp+50h] [rbp-21h] BYREF
  const CHAR *v33[2]; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+68h] [rbp-9h] BYREF
  const char *v35; // [rsp+88h] [rbp+17h]
  int v36; // [rsp+90h] [rbp+1Fh]
  int v37; // [rsp+94h] [rbp+23h]
  int *v38; // [rsp+98h] [rbp+27h]
  int v39; // [rsp+A0h] [rbp+2Fh]
  int v40; // [rsp+A4h] [rbp+33h]
  int *v41; // [rsp+A8h] [rbp+37h]
  int v42; // [rsp+B0h] [rbp+3Fh]
  int v43; // [rsp+B4h] [rbp+43h]

  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v2 = (void *)*((_QWORD *)this + 6);
  v32 = 1;
  if ( v2 )
  {
    _aligned_free(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    _aligned_free(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  *((_QWORD *)this + 63) = 0LL;
  v6 = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v32);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      goto LABEL_8;
    v30 = v6;
    v31 = 285;
    v29 = &v30;
    v28 = &v31;
    goto LABEL_18;
  }
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v43 = 0;
      v40 = 0;
      v37 = 0;
      v31 = DeviceSettings;
      v42 = 4;
      v41 = &v31;
      v38 = &v30;
      v39 = 4;
      v30 = 289;
      v35 = "SpatialAudioDevicePropertyReader::ReloadProperties";
      v36 = 51;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1801CD1E8, (int)&dword_180195406, 0, 0, 5u, &v34);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 24LL))(*((_QWORD *)this + 52));
    if ( v12 < 0 && (unsigned int)dword_1801CD1E8 > 2 )
    {
      v31 = v12;
      v30 = 292;
      v29 = &v31;
      v28 = &v30;
LABEL_18:
      v33[0] = "SpatialAudioDevicePropertyReader::ReloadProperties";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (int)&dword_180195406,
        v9,
        v10,
        v33,
        (__int64)v28,
        (__int64)v29);
    }
  }
LABEL_8:
  if ( v32 )
  {
    *((_DWORD *)this + 31) = 262142;
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    MaxDynamicObjectCountPC = SpatialAudio::GetMaxDynamicObjectCountPC(
                                (SpatialAudioDevicePropertyReader *)((char *)this + 108),
                                v7);
    *((_DWORD *)this + 32) = 0;
    *(_OWORD *)((char *)this + 134) = xmmword_180187A70;
    *((_WORD *)this + 66) = MaxDynamicObjectCountPC;
    *(_OWORD *)((char *)this + 150) = xmmword_180187A80;
    *(_OWORD *)((char *)this + 166) = xmmword_180187A90;
    *(_OWORD *)((char *)this + 182) = xmmword_180187AA0;
    *(_OWORD *)((char *)this + 198) = xmmword_180187AB0;
    *(_OWORD *)((char *)this + 214) = xmmword_180187AC0;
    *(_OWORD *)((char *)this + 230) = xmmword_180187AD0;
    *(_DWORD *)((char *)this + 246) = 0;
    v14 = *((_WORD *)this + 124);
    v15 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v16 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v15;
    v17 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v16;
    v18 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v17;
    v19 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v18;
    v20 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v19;
    v21 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 346) = v20;
    *(_OWORD *)((char *)this + 362) = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 378) = v21;
    *((_WORD *)this + 197) = v14;
  }
  PositionTable = SpatialAudioDevicePropertyReader::AllocatePositionTable(this);
  v26 = PositionTable;
  if ( PositionTable < 0 && (unsigned int)dword_1801CD1E8 > 2 )
  {
    v31 = PositionTable;
    v30 = 310;
    v33[0] = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (int)&dword_180195406,
      v24,
      v25,
      v33,
      (__int64)&v30,
      (__int64)&v31);
  }
  return v26;
}
