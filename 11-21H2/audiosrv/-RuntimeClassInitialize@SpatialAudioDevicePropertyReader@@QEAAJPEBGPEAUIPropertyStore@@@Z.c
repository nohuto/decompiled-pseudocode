/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038720
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180038528 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioPositionCalc @ 0x180038824 (Create_SpatialAudioPositionCalc.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180038A40 (Create_SpatialAudioDeviceStateReader.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
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
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int SpatialAudioPositionCalc; // eax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  HRESULT v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  LPVOID v24; // rbx
  __int64 (__fastcall *v25)(LPVOID, const unsigned __int16 *, __int64 *); // rdi
  LPVOID v26; // rbx
  __int64 (__fastcall *v27)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, _QWORD, char *); // rsi
  int v30; // [rsp+40h] [rbp-49h] BYREF
  int v31; // [rsp+44h] [rbp-45h] BYREF
  const char *v32; // [rsp+48h] [rbp-41h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-39h] BYREF
  __int64 v34; // [rsp+58h] [rbp-31h] BYREF
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
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v30 = SpatialAudioDeviceStateReader;
      v31 = 209;
      ppv = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned int)&unk_18018C41C,
        v10,
        v11,
        (__int64)&ppv,
        (__int64)&v31,
        (__int64)&v30);
    }
    return v12;
  }
  if ( !a3 )
  {
    ppv = 0LL;
    v34 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    v20 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
    v12 = v20;
    if ( v20 >= 0 )
    {
      memset_0(sz, 0, 0x4EuLL);
      v20 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
      v12 = v20;
      if ( v20 < 0 )
      {
        if ( (unsigned int)dword_1801C0258 <= 2 )
          goto LABEL_19;
        v30 = 225;
        goto LABEL_18;
      }
      if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
      {
        v24 = ppv;
        v25 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
        v20 = v25(v24, a2, &v34);
        v12 = v20;
        if ( v20 < 0 )
        {
          if ( (unsigned int)dword_1801C0258 <= 2 )
            goto LABEL_19;
          v30 = 235;
          goto LABEL_18;
        }
      }
      else
      {
        v26 = ppv;
        v27 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
        v20 = v27(v26, 0LL, 1LL, &v34);
        v12 = v20;
        if ( v20 < 0 )
        {
          if ( (unsigned int)dword_1801C0258 <= 2 )
            goto LABEL_19;
          v30 = 230;
          goto LABEL_18;
        }
      }
      v28 = v34;
      v29 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v34 + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 51);
      v20 = v29(v28, 0LL, (char *)this + 408);
      v12 = v20;
      if ( v20 >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
        goto LABEL_8;
      }
      if ( (unsigned int)dword_1801C0258 > 2 )
      {
        v30 = 239;
        goto LABEL_18;
      }
    }
    else if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v30 = 221;
LABEL_18:
      v31 = v20;
      v32 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v21,
        (unsigned int)&unk_18018C41C,
        v22,
        v23,
        (__int64)&v32,
        (__int64)&v30,
        (__int64)&v31);
    }
LABEL_19:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return v12;
  }
  if ( *((struct IPropertyStore **)this + 51) != a3 )
  {
    ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
    v13 = *((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = a3;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_8:
  v14 = *((_QWORD *)this + 50);
  if ( v14 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc((char *)this + 400);
  v12 = SpatialAudioPositionCalc;
  if ( SpatialAudioPositionCalc < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v30 = 244;
LABEL_39:
      v31 = SpatialAudioPositionCalc;
      v32 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v16,
        (unsigned int)&unk_18018C41C,
        v17,
        v18,
        (__int64)&v32,
        (__int64)&v30,
        (__int64)&v31);
    }
  }
  else
  {
    SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL))(this);
    v12 = SpatialAudioPositionCalc;
    if ( SpatialAudioPositionCalc < 0 && (unsigned int)dword_1801C0258 > 2 )
    {
      v30 = 248;
      goto LABEL_39;
    }
  }
  return v12;
}
