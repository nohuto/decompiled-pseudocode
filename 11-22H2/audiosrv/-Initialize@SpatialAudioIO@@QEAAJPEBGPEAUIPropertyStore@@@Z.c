/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002E520
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800217F0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18002E2D4 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LPVOID v18; // rbx
  __int64 (__fastcall *v19)(LPVOID, const unsigned __int16 *, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  LPVOID v24; // rbx
  __int64 (__fastcall *v25)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, _QWORD, char *); // rsi
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  HRESULT Instance; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // [rsp+40h] [rbp-39h] BYREF
  int v41; // [rsp+44h] [rbp-35h] BYREF
  __int64 v42; // [rsp+48h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-29h] BYREF
  const CHAR *v44; // [rsp+58h] [rbp-21h] BYREF
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
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  v10 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v40 = v10;
      v41 = 37;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)&dword_180195406,
        v12,
        v13,
        &v44,
        (__int64)&v41,
        (__int64)&v40);
    }
LABEL_12:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    return v8;
  }
  memset_0(sz, 0, 0x4EuLL);
  v14 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v8 = v14;
  if ( v14 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v41 = v14;
      v40 = 41;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        (int)&dword_180195406,
        v16,
        v17,
        &v44,
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
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v41 = v20;
        v40 = 51;
        v44 = "SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v21,
          (int)&dword_180195406,
          v22,
          v23,
          &v44,
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
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v41 = v26;
        v40 = 46;
        v44 = "SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v27,
          (int)&dword_180195406,
          v28,
          v29,
          &v44,
          (__int64)&v40,
          (__int64)&v41);
      }
      goto LABEL_12;
    }
  }
  v30 = v42;
  v31 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v42 + 32LL);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 528);
  v32 = v31(v30, 0LL, (char *)this + 528);
  v8 = v32;
  if ( v32 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v41 = v32;
      v40 = 55;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v33,
        (int)&dword_180195406,
        v34,
        v35,
        &v44,
        (__int64)&v40,
        (__int64)&v41);
    }
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((char *)this + 536);
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               1u,
               &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
               (LPVOID *)this + 67);
  v8 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v41 = Instance;
      v40 = 58;
      v44 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v37,
        (int)&dword_180195406,
        v38,
        v39,
        &v44,
        (__int64)&v40,
        (__int64)&v41);
    }
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
}
