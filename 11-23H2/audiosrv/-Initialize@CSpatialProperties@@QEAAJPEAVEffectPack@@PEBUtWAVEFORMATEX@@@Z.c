/*
 * XREFs of ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 * Callees:
 *     MigrateSpatialProperties @ 0x18001997C (MigrateSpatialProperties.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x1800216E0 (Create_SpatialAudioDeviceStateWriter.c)
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180021A10 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     DoesPlatformSupportSpatialAudio @ 0x180021C94 (DoesPlatformSupportSpatialAudio.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002D72C (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18002E218 (Create_SpatialAudioDeviceStateReader.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002EE90 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z @ 0x180044C90 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180152028 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x1801520D8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18015240C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialProperties::Initialize(
        CSpatialProperties *this,
        struct EffectPack *a2,
        struct tWAVEFORMATEX *a3)
{
  struct EffectPack *v4; // r12
  struct IUnknown **v5; // r15
  struct IUnknown **v6; // r14
  int TopologyList; // edi
  HMODULE ModuleHandleW; // rax
  CSpatialAudioTechnologies *v9; // rcx
  _DWORD *v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  struct IUnknown **v14; // rsi
  struct tWAVEFORMATEX *v16; // rax
  unsigned __int16 v17; // si
  struct EffectPack *v18; // r14
  int v19; // ecx
  int v20; // ecx
  _DWORD *v21; // rcx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  bool v25; // dl
  _DWORD *v26; // rcx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // ecx
  _DWORD *v31; // rcx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  _DWORD *v35; // rcx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _DWORD *v39; // rcx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int16 v43; // [rsp+40h] [rbp-39h] BYREF
  _WORD v44[3]; // [rsp+42h] [rbp-37h] BYREF
  struct EffectPack *v45; // [rsp+48h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v46; // [rsp+50h] [rbp-29h]
  CSpatialProperties *v47; // [rsp+58h] [rbp-21h] BYREF
  int v48; // [rsp+60h] [rbp-19h] BYREF
  int v49; // [rsp+64h] [rbp-15h] BYREF
  WAVEFORMATEXTENSIBLE v50; // [rsp+68h] [rbp-11h] BYREF

  v46 = a3;
  v45 = a2;
  v4 = *(struct EffectPack **)(*((_QWORD *)this + 5) + 48LL);
  v5 = (struct IUnknown **)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
  {
    v14 = (struct IUnknown **)((char *)this + 72);
    goto LABEL_59;
  }
  v6 = (struct IUnknown **)((char *)this + 72);
  if ( *((_QWORD *)this + 9) )
  {
    v14 = (struct IUnknown **)((char *)this + 72);
    goto LABEL_59;
  }
  TopologyList = 0;
  if ( *((_BYTE *)this + 97)
    || (ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll"),
        TopologyList = CSpatialAudioTechnologies::CreateTopologyList(v9, ModuleHandleW),
        TopologyList < 0) )
  {
    v14 = v6;
    if ( TopologyList < 0 )
      goto LABEL_60;
  }
  else
  {
    *((_BYTE *)this + 97) = 1;
  }
  LOBYTE(v44[0]) = MigrateSpatialProperties(*((_DWORD **)this + 6), *((_QWORD *)this + 7), (__int64)v4) == 0;
  v10 = (_DWORD *)*((_QWORD *)this + 6);
  if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 16LL) )
  {
    v48 = *((unsigned __int8 *)this + 7706);
    v49 = (unsigned __int8)v13;
    v43 = *((_WORD *)this + 3862);
    v47 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_180198697,
      v12,
      v13,
      (__int64)&v47,
      (__int64)&v43,
      (__int64)&v49,
      (__int64)&v48);
  }
  TopologyList = Create_SpatialAudioConfigureDevice(v4, *((_QWORD *)this + 7), v5);
  v14 = v6;
  if ( TopologyList < 0 )
    goto LABEL_60;
  if ( !*v5 )
    goto LABEL_59;
  TopologyList = Create_SpatialAudioDevicePropertyReader(v4, *((_QWORD *)this + 7), v6);
  if ( TopologyList < 0 )
    goto LABEL_60;
  if ( !*v6 )
    goto LABEL_59;
  TopologyList = Create_SpatialAudioDeviceStateReader(v4, *((_QWORD *)this + 7), (char *)this + 80);
  if ( TopologyList < 0 )
    goto LABEL_60;
  if ( !*((_QWORD *)this + 10) )
  {
LABEL_59:
    TopologyList = -2147418113;
    goto LABEL_60;
  }
  TopologyList = Create_SpatialAudioDeviceStateWriter(v4, *((_QWORD *)this + 7), (char *)this + 88);
  if ( TopologyList >= 0 )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( (unsigned __int8)DoesPlatformSupportSpatialAudio() )
      {
        if ( LOBYTE(v44[0]) )
        {
          ((void (__fastcall *)(struct IUnknown *))(*v5)->lpVtbl[1].AddRef)(*v5);
          return (unsigned int)TopologyList;
        }
        v16 = v46;
        if ( v46 )
        {
          *((_DWORD *)this + 1931) = 1;
          v17 = 0;
          v47 = this;
          v18 = v45;
          while ( 1 )
          {
            memset(&v50, 0, sizeof(v50));
            if ( v17 == 3 )
            {
              v26 = (_DWORD *)*((_QWORD *)this + 6);
              if ( *v26 > 2u )
              {
                if ( tlgKeywordOn((__int64)v26, 16LL) )
                {
                  v43 = *((_WORD *)this + 3862);
                  v45 = v4;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
                    v27,
                    (unsigned int)&unk_180198642,
                    v28,
                    v29,
                    (__int64)&v45,
                    (__int64)&v43);
                }
                v16 = v46;
              }
            }
            CSpatialProperties::SetSpatialAudioSettingsInternal(this, v18, 0, v16, &v50);
            EnterCriticalSection((LPCRITICAL_SECTION)this);
            v19 = *((_DWORD *)this + 1931);
            if ( !v19 )
              goto LABEL_44;
            v20 = v19 - 1;
            if ( !v20 )
              goto LABEL_26;
            v30 = v20 - 1;
            if ( v30 )
            {
              if ( v30 != 1 )
              {
                ((void (__fastcall *)(struct IUnknown *))(*v5)->lpVtbl[1].AddRef)(*v5);
LABEL_44:
                v31 = (_DWORD *)*((_QWORD *)this + 6);
                if ( *v31 > 2u && tlgKeywordOn((__int64)v31, 16LL) )
                {
                  v43 = *((_WORD *)this + 3862);
                  v44[0] = v17;
                  v45 = v4;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                    v32,
                    (unsigned int)&unk_18019855D,
                    v33,
                    v34,
                    (__int64)&v45,
                    (__int64)v44,
                    (__int64)&v43);
                }
LABEL_26:
                *((_DWORD *)this + 1931) = 0;
                goto LABEL_27;
              }
              v35 = (_DWORD *)*((_QWORD *)this + 6);
              if ( *v35 > 4u && tlgKeywordOn((__int64)v35, 16LL) )
              {
                v43 = *((_WORD *)this + 3862);
                v44[0] = v17;
                v45 = v4;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                  v36,
                  (unsigned int)&unk_1801985B6,
                  v37,
                  v38,
                  (__int64)&v45,
                  (__int64)v44,
                  (__int64)&v43);
              }
              *((_DWORD *)this + 1931) = 1;
            }
            else
            {
              v39 = (_DWORD *)*((_QWORD *)this + 6);
              if ( *v39 > 4u && tlgKeywordOn((__int64)v39, 16LL) )
              {
                v43 = *((_WORD *)this + 3862);
                v44[0] = v17;
                v45 = v4;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                  v40,
                  (unsigned int)&unk_1801985B6,
                  v41,
                  v42,
                  (__int64)&v45,
                  (__int64)v44,
                  (__int64)&v43);
              }
              *((_DWORD *)this + 1931) = 0;
              ((void (__fastcall *)(struct IUnknown *))(*v5)->lpVtbl[1].AddRef)(*v5);
            }
LABEL_27:
            if ( !*((_DWORD *)this + 1931) )
            {
              LeaveCriticalSection((LPCRITICAL_SECTION)this);
              return (unsigned int)TopologyList;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)this);
            ++v17;
            v16 = v46;
            if ( v17 >= 5u )
              return (unsigned int)TopologyList;
          }
        }
        v25 = 0;
      }
      else
      {
        v21 = (_DWORD *)*((_QWORD *)this + 6);
        if ( *v21 > 4u && tlgKeywordOn((__int64)v21, 16LL) )
        {
          v47 = v4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v22,
            (unsigned int)&unk_180198609,
            v23,
            v24,
            (__int64)&v47);
        }
        v25 = 1;
      }
      CSpatialProperties::ClearSpatialAudioSettings(this, v25);
      return (unsigned int)TopologyList;
    }
    goto LABEL_59;
  }
LABEL_60:
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( *v5 )
    ATL::AtlComPtrAssign(v5, 0LL);
  if ( *v14 )
    ATL::AtlComPtrAssign(v14, 0LL);
  if ( *((_QWORD *)this + 10) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 10, 0LL);
  if ( *((_QWORD *)this + 11) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 11, 0LL);
  return (unsigned int)TopologyList;
}
