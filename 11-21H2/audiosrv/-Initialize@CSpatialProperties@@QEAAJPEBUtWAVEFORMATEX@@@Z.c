/*
 * XREFs of ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180038A40 (Create_SpatialAudioDeviceStateReader.c)
 *     MigrateSpatialProperties @ 0x180047F10 (MigrateSpatialProperties.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004EB08 (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x18004EBA0 (Create_SpatialAudioDeviceStateWriter.c)
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F4BC (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     DoesPlatformSupportSpatialAudio @ 0x180055020 (DoesPlatformSupportSpatialAudio.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x18013C37C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x18013C42C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18013C760 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ @ 0x18013D594 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialProperties::Initialize(CSpatialProperties *this, const struct tWAVEFORMATEX *a2)
{
  const unsigned __int16 *v4; // r15
  struct IUnknown **v5; // r14
  _QWORD *v6; // rsi
  int TopologyList; // edi
  HMODULE ModuleHandleW; // rax
  CSpatialAudioTechnologies *v9; // rcx
  int v10; // r8d
  int v11; // r9d
  bool v12; // r12
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r8d
  int v18; // r9d
  __int16 v19; // si
  int v20; // r8d
  int v21; // r9d
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _WORD v31[2]; // [rsp+40h] [rbp-29h] BYREF
  int v32; // [rsp+44h] [rbp-25h] BYREF
  const unsigned __int16 *v33; // [rsp+48h] [rbp-21h] BYREF
  CSpatialProperties *v34; // [rsp+50h] [rbp-19h] BYREF
  WAVEFORMATEXTENSIBLE v35; // [rsp+58h] [rbp-11h] BYREF

  v4 = *(const unsigned __int16 **)(*((_QWORD *)this + 5) + 24LL);
  v5 = (struct IUnknown **)((char *)this + 64);
  if ( *((_QWORD *)this + 8) || (v6 = (_QWORD *)((char *)this + 72), *((_QWORD *)this + 9)) )
  {
    TopologyList = -2147418113;
    goto LABEL_31;
  }
  TopologyList = 0;
  if ( *((_BYTE *)this + 97)
    || (ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll"),
        TopologyList = CSpatialAudioTechnologies::CreateTopologyList(v9, ModuleHandleW),
        TopologyList < 0) )
  {
    if ( TopologyList < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_BYTE *)this + 97) = 1;
  }
  v12 = !MigrateSpatialProperties(*((_QWORD *)this + 6), *((_QWORD *)this + 7), (__int64)v4);
  v13 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)v13 > 4u
    && (*(_BYTE *)(v13 + 16) & 0x10) != 0
    && (*(_QWORD *)(v13 + 24) & 0x10LL) == *(_QWORD *)(v13 + 24) )
  {
    v32 = *((unsigned __int8 *)this + 7706);
    LODWORD(v34) = v12;
    v31[0] = *((_WORD *)this + 3862);
    v33 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_18018E3C0,
      v10,
      v11,
      (__int64)&v33,
      (__int64)v31,
      (__int64)&v34,
      (__int64)&v32);
  }
  TopologyList = Create_SpatialAudioConfigureDevice(v4, *((_QWORD *)this + 7), v5);
  if ( TopologyList < 0 )
    goto LABEL_31;
  if ( !*v5 )
    goto LABEL_30;
  TopologyList = Create_SpatialAudioDevicePropertyReader(v4, *((struct IPropertyStore **)this + 7), v6, v14);
  if ( TopologyList < 0 )
    goto LABEL_31;
  if ( !*v6 )
  {
LABEL_30:
    TopologyList = -2147418113;
    goto LABEL_31;
  }
  TopologyList = Create_SpatialAudioDeviceStateReader((__int64)v4, *((_QWORD *)this + 7), (_QWORD *)this + 10, v15);
  if ( TopologyList < 0 )
  {
LABEL_31:
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    if ( *v5 )
      ATL::AtlComPtrAssign(v5, 0LL);
    if ( *((_QWORD *)this + 9) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 9, 0LL);
    if ( *((_QWORD *)this + 10) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 10, 0LL);
    if ( *((_QWORD *)this + 11) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 11, 0LL);
    return (unsigned int)TopologyList;
  }
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_30;
  TopologyList = Create_SpatialAudioDeviceStateWriter((__int64)v4, *((_QWORD *)this + 7), (_QWORD *)this + 11, v16);
  if ( TopologyList < 0 )
    goto LABEL_31;
  if ( !*((_QWORD *)this + 11) )
    goto LABEL_30;
  if ( !(unsigned __int8)DoesPlatformSupportSpatialAudio() )
  {
    v25 = *((_QWORD *)this + 6);
    if ( *(_DWORD *)v25 > 4u
      && (*(_BYTE *)(v25 + 16) & 0x10) != 0
      && (*(_QWORD *)(v25 + 24) & 0x10LL) == *(_QWORD *)(v25 + 24) )
    {
      v33 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v25,
        (unsigned int)&unk_18018E43A,
        v17,
        v18,
        (__int64)&v33);
    }
LABEL_43:
    CSpatialProperties::ClearSpatialAudioSettings(this);
    return (unsigned int)TopologyList;
  }
  if ( v12 )
  {
    ((void (__fastcall *)(struct IUnknown *))(*v5)->lpVtbl[1].AddRef)(*v5);
    return (unsigned int)TopologyList;
  }
  if ( !a2 )
    goto LABEL_43;
  *((_DWORD *)this + 1931) = 1;
  v19 = 0;
  v34 = this;
  while ( 1 )
  {
    memset(&v35, 0, sizeof(v35));
    if ( v19 == 3 )
    {
      v26 = *((_QWORD *)this + 6);
      if ( *(_DWORD *)v26 > 2u
        && (*(_BYTE *)(v26 + 16) & 0x10) != 0
        && (*(_QWORD *)(v26 + 24) & 0x10LL) == *(_QWORD *)(v26 + 24) )
      {
        v31[0] = *((_WORD *)this + 3862);
        v33 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
          v26,
          (unsigned int)&unk_18018E36B,
          v17,
          v18,
          (__int64)&v33,
          (__int64)v31);
      }
    }
    CSpatialProperties::SetSpatialAudioSettingsInternal(this, 0, a2, &v35);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    v22 = *((_DWORD *)this + 1931);
    if ( !v22 )
      goto LABEL_52;
    v23 = v22 - 1;
    if ( !v23 )
      break;
    v27 = v23 - 1;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        v29 = *((_QWORD *)this + 6);
        if ( *(_DWORD *)v29 > 4u
          && (*(_BYTE *)(v29 + 16) & 0x10) != 0
          && (*(_QWORD *)(v29 + 24) & 0x10LL) == *(_QWORD *)(v29 + 24) )
        {
          v31[0] = *((_WORD *)this + 3862);
          LOWORD(v32) = v19;
          v33 = v4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
            v29,
            (unsigned int)&unk_18018E318,
            v20,
            v21,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)v31);
        }
        *((_DWORD *)this + 1931) = 1;
        goto LABEL_58;
      }
      ((void (__fastcall *)(struct IUnknown *))(*v5)->lpVtbl[1].AddRef)(*v5);
LABEL_52:
      v28 = *((_QWORD *)this + 6);
      if ( *(_DWORD *)v28 > 2u
        && (*(_BYTE *)(v28 + 16) & 0x10) != 0
        && (*(_QWORD *)(v28 + 24) & 0x10LL) == *(_QWORD *)(v28 + 24) )
      {
        LOWORD(v32) = *((_WORD *)this + 3862);
        v31[0] = v19;
        v33 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
          v28,
          (unsigned int)&unk_18018E2BF,
          v20,
          v21,
          (__int64)&v33,
          (__int64)v31,
          (__int64)&v32);
      }
      *((_DWORD *)this + 1931) = 0;
      goto LABEL_57;
    }
    v30 = *((_QWORD *)this + 6);
    if ( *(_DWORD *)v30 > 4u
      && (*(_BYTE *)(v30 + 16) & 0x10) != 0
      && (*(_QWORD *)(v30 + 24) & 0x10LL) == *(_QWORD *)(v30 + 24) )
    {
      LOWORD(v32) = *((_WORD *)this + 3862);
      v31[0] = v19;
      v33 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        v30,
        (unsigned int)&unk_18018E318,
        v20,
        v21,
        (__int64)&v33,
        (__int64)v31,
        (__int64)&v32);
    }
    *((_DWORD *)this + 1931) = 0;
    ((void (__fastcall *)(struct IUnknown *))(*v5)->lpVtbl[1].AddRef)(*v5);
LABEL_57:
    if ( !*((_DWORD *)this + 1931) )
      goto LABEL_24;
LABEL_58:
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    if ( (unsigned __int16)++v19 >= 5u )
      return (unsigned int)TopologyList;
  }
  *((_DWORD *)this + 1931) = 0;
LABEL_24:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return (unsigned int)TopologyList;
}
