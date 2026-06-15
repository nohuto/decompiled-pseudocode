/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180012000
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x180011C78 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180011D10 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x1800127AC (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  int DeviceSettings; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int16 v10; // ax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int PositionTable; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // ebx
  int v24; // [rsp+70h] [rbp+30h] BYREF
  int v25; // [rsp+78h] [rbp+38h] BYREF
  const char *v26; // [rsp+80h] [rbp+40h] BYREF
  const char *v27; // [rsp+88h] [rbp+48h] BYREF

  v24 = 1;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v2 = (void *)*((_QWORD *)this + 6);
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
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v24);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_8;
    LODWORD(v26) = 285;
    goto LABEL_18;
  }
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_8;
    LODWORD(v26) = 289;
    goto LABEL_18;
  }
  DeviceSettings = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 24LL))(*((_QWORD *)this + 52));
  if ( DeviceSettings < 0 && (unsigned int)dword_1801C0258 > 2 )
  {
    LODWORD(v26) = 292;
LABEL_18:
    v25 = DeviceSettings;
    v27 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (unsigned int)&unk_18018C41C,
      v8,
      v9,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25);
  }
LABEL_8:
  if ( v24 )
  {
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    *(_QWORD *)((char *)this + 124) = 262142LL;
    *(_OWORD *)((char *)this + 134) = xmmword_180181820;
    *((_WORD *)this + 66) = 0;
    *(_OWORD *)((char *)this + 150) = xmmword_180181830;
    *(_OWORD *)((char *)this + 166) = xmmword_180181840;
    *(_OWORD *)((char *)this + 182) = xmmword_180181850;
    *(_OWORD *)((char *)this + 198) = xmmword_180181860;
    *(_OWORD *)((char *)this + 214) = xmmword_180181870;
    *(_OWORD *)((char *)this + 230) = xmmword_180181880;
    *(_DWORD *)((char *)this + 246) = 0;
    v10 = *((_WORD *)this + 124);
    v11 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v12 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v11;
    v13 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v12;
    v14 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v13;
    v15 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v14;
    v16 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v15;
    v17 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 346) = v16;
    *(_OWORD *)((char *)this + 362) = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 378) = v17;
    *((_WORD *)this + 197) = v10;
  }
  PositionTable = SpatialAudioDevicePropertyReader::AllocatePositionTable(this);
  v22 = PositionTable;
  if ( PositionTable < 0 && (unsigned int)dword_1801C0258 > 2 )
  {
    v24 = PositionTable;
    v25 = 310;
    v26 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      (unsigned int)&unk_18018C41C,
      v20,
      v21,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
  return v22;
}
