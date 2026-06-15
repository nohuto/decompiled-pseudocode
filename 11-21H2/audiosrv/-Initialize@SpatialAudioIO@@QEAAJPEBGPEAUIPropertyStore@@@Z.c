/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038D1C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180038AFC (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004ECE0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialAudioIO::Initialize(
        SpatialAudioIO *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  HRESULT v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  LPVOID v18; // rbx
  __int64 (__fastcall *v19)(LPVOID, const unsigned __int16 *, __int64 *); // rdi
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  LPVOID v24; // rbx
  __int64 (__fastcall *v25)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  int v26; // eax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, _QWORD, char *); // rsi
  int v32; // eax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  HRESULT Instance; // eax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // [rsp+40h] [rbp-39h] BYREF
  int v41; // [rsp+44h] [rbp-35h] BYREF
  __int64 v42; // [rsp+48h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-29h] BYREF
  const char *v44; // [rsp+58h] [rbp-21h] BYREF
  OLECHAR sz[40]; // [rsp+60h] [rbp-19h] BYREF

  if ( a3 )
  {
    if ( *((struct IPropertyStore **)this + 66) != a3 )
    {
      ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
      v6 = *((_QWORD *)this + 66);
      *((_QWORD *)this + 66) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *((_QWORD *)this + 67);
    if ( v7 )
    {
      *((_QWORD *)this + 67) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
  }
  ppv = 0LL;
  v42 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
  v10 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v40 = v10;
      v41 = 37;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_18018C41C,
        v12,
        v13,
        (__int64)&v44,
        (__int64)&v41,
        (__int64)&v40);
    }
LABEL_12:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return v8;
  }
  memset_0(sz, 0, 0x4EuLL);
  v14 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v8 = v14;
  if ( v14 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v41 = v14;
      v40 = 41;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        (unsigned int)&unk_18018C41C,
        v16,
        v17,
        (__int64)&v44,
        (__int64)&v40,
        (__int64)&v41);
    }
    goto LABEL_12;
  }
  if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
  {
    v18 = ppv;
    v19 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
    v20 = v19(v18, a2, &v42);
    v8 = v20;
    if ( v20 < 0 )
    {
      if ( (unsigned int)dword_1801C0258 > 2 )
      {
        v41 = v20;
        v40 = 51;
        v44 = "SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v21,
          (unsigned int)&unk_18018C41C,
          v22,
          v23,
          (__int64)&v44,
          (__int64)&v40,
          (__int64)&v41);
      }
      goto LABEL_12;
    }
  }
  else
  {
    v24 = ppv;
    v25 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
    v26 = v25(v24, 0LL, 1LL, &v42);
    v8 = v26;
    if ( v26 < 0 )
    {
      if ( (unsigned int)dword_1801C0258 > 2 )
      {
        v41 = v26;
        v40 = 46;
        v44 = "SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v27,
          (unsigned int)&unk_18018C41C,
          v28,
          v29,
          (__int64)&v44,
          (__int64)&v40,
          (__int64)&v41);
      }
      goto LABEL_12;
    }
  }
  v30 = v42;
  v31 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v42 + 32LL);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 66);
  v32 = v31(v30, 0LL, (char *)this + 528);
  v8 = v32;
  if ( v32 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v41 = v32;
      v40 = 55;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v33,
        (unsigned int)&unk_18018C41C,
        v34,
        v35,
        (__int64)&v44,
        (__int64)&v40,
        (__int64)&v41);
    }
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               1u,
               &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
               (LPVOID *)this + 67);
  v8 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v41 = Instance;
      v40 = 58;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v37,
        (unsigned int)&unk_18018C41C,
        v38,
        v39,
        (__int64)&v44,
        (__int64)&v40,
        (__int64)&v41);
    }
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
  return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
}
