/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002DDFC
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18002DF08 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioPositionCalc @ 0x18002E084 (Create_SpatialAudioPositionCalc.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18002E218 (Create_SpatialAudioDeviceStateReader.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int SpatialAudioDeviceStateReader; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int SpatialAudioPositionCalc; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  HRESULT v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LPVOID v23; // rbx
  __int64 (__fastcall *v24)(LPVOID, const unsigned __int16 *, __int64 *); // rdi
  LPVOID v25; // rbx
  __int64 (__fastcall *v26)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, _QWORD, char *); // rsi
  int v29; // [rsp+40h] [rbp-49h] BYREF
  int v30; // [rsp+44h] [rbp-45h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-41h] BYREF
  const CHAR *v32; // [rsp+50h] [rbp-39h] BYREF
  __int64 v33; // [rsp+58h] [rbp-31h] BYREF
  OLECHAR sz[40]; // [rsp+60h] [rbp-29h] BYREF

  v6 = (_QWORD *)((char *)this + 416);
  v7 = *((_QWORD *)this + 52);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, v6);
  v12 = SpatialAudioDeviceStateReader;
  if ( SpatialAudioDeviceStateReader < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v29 = SpatialAudioDeviceStateReader;
      v30 = 209;
      ppv = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (int)&dword_1801953CC,
        v10,
        v11,
        (const CHAR **)&ppv,
        (__int64)&v30,
        (__int64)&v29);
    }
    return v12;
  }
  if ( !a3 )
  {
    ppv = 0LL;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    v19 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
    v12 = v19;
    if ( v19 >= 0 )
    {
      memset_0(sz, 0, 0x4EuLL);
      v19 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
      v12 = v19;
      if ( v19 < 0 )
      {
        if ( (unsigned int)dword_1801CD1E8 <= 2 )
          goto LABEL_18;
        v29 = 225;
        goto LABEL_17;
      }
      if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
      {
        v23 = ppv;
        v24 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        v19 = v24(v23, a2, &v33);
        v12 = v19;
        if ( v19 < 0 )
        {
          if ( (unsigned int)dword_1801CD1E8 <= 2 )
            goto LABEL_18;
          v29 = 235;
          goto LABEL_17;
        }
      }
      else
      {
        v25 = ppv;
        v26 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        v19 = v26(v25, 0LL, 1LL, &v33);
        v12 = v19;
        if ( v19 < 0 )
        {
          if ( (unsigned int)dword_1801CD1E8 <= 2 )
            goto LABEL_18;
          v29 = 230;
          goto LABEL_17;
        }
      }
      v27 = v33;
      v28 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v33 + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 408);
      v19 = v28(v27, 0LL, (char *)this + 408);
      v12 = v19;
      if ( v19 >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
        goto LABEL_7;
      }
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v29 = 239;
        goto LABEL_17;
      }
    }
    else if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v29 = 221;
LABEL_17:
      v30 = v19;
      v32 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v20,
        (int)&dword_1801953CC,
        v21,
        v22,
        &v32,
        (__int64)&v29,
        (__int64)&v30);
    }
LABEL_18:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    return v12;
  }
  if ( *((struct IPropertyStore **)this + 51) != a3 )
  {
    ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
    ppv = (LPVOID)*((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = a3;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  }
LABEL_7:
  v13 = *((_QWORD *)this + 50);
  if ( v13 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc((char *)this + 400);
  v12 = SpatialAudioPositionCalc;
  if ( SpatialAudioPositionCalc < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v29 = 244;
LABEL_38:
      v30 = SpatialAudioPositionCalc;
      v32 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        (int)&dword_1801953CC,
        v16,
        v17,
        &v32,
        (__int64)&v29,
        (__int64)&v30);
    }
  }
  else
  {
    SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL))(this);
    v12 = SpatialAudioPositionCalc;
    if ( SpatialAudioPositionCalc < 0 && (unsigned int)dword_1801CD1E8 > 2 )
    {
      v29 = 248;
      goto LABEL_38;
    }
  }
  return v12;
}
