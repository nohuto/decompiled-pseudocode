/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180142E80
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1801425BC (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005E814 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z @ 0x180142780 (--4-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        char *a2,
        struct IPropertyStore *a3)
{
  unsigned int v6; // ebx
  unsigned __int16 *v7; // r15
  char *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  HRESULT v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  LPVOID v17; // rbx
  __int64 (__fastcall *v18)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  HRESULT Instance; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LPVOID v23; // rbx
  __int64 (__fastcall *v24)(LPVOID, unsigned __int16 *, __int64 *); // rdi
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, _QWORD, char *); // rsi
  int v28; // [rsp+40h] [rbp-59h] BYREF
  int v29; // [rsp+44h] [rbp-55h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-41h] BYREF
  const CHAR *v33; // [rsp+60h] [rbp-39h] BYREF
  OLECHAR sz[40]; // [rsp+70h] [rbp-29h] BYREF

  v6 = 0;
  *((_DWORD *)this + 24) = 0;
  v7 = (unsigned __int16 *)((char *)this + 112);
  v8 = (char *)this + 112;
  if ( a2 )
    StringCchCopyW(v8, 260LL, a2);
  else
    memset_0(v8, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v30 = 0LL;
    memset_0(sz, 0, 0x4EuLL);
    v9 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v28 = v9;
        v29 = 127;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v10,
          (int)&dword_180195406,
          v11,
          v12,
          (const CHAR **)&pv,
          (__int64)&v29,
          (__int64)&v28);
      }
      goto LABEL_28;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    v13 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
    v6 = v13;
    if ( v13 < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v29 = v13;
        v28 = 130;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v14,
          (int)&dword_180195406,
          v15,
          v16,
          (const CHAR **)&pv,
          (__int64)&v28,
          (__int64)&v29);
      }
      goto LABEL_28;
    }
    if ( !a2 || !(unsigned int)_o__wcsicmp(a2, sz) )
    {
      v17 = ppv;
      v18 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
      Instance = v18(v17, 0LL, 1LL, &v30);
      v6 = Instance;
      if ( Instance < 0 )
      {
        if ( (unsigned int)dword_1801CD1E8 > 2 )
        {
          v28 = 135;
LABEL_27:
          v29 = Instance;
          v33 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v20,
            (int)&dword_180195406,
            v21,
            v22,
            &v33,
            (__int64)&v28,
            (__int64)&v29);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
      pv = 0LL;
      (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v30 + 40LL))(v30, &pv);
      StringCbPrintfW(v7, 0x104uLL, L"%s", pv);
      CoTaskMemFree(pv);
    }
    v23 = ppv;
    v24 = *(__int64 (__fastcall **)(LPVOID, unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
    Instance = v24(v23, v7, &v30);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      v25 = v30;
      v26 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v30 + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 11);
      Instance = v26(v25, 0LL, (char *)this + 88);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 13);
        Instance = CoCreateInstance(
                     &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                     0LL,
                     1u,
                     &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
                     (LPVOID *)this + 13);
        v6 = Instance;
        if ( Instance >= 0 || (unsigned int)dword_1801CD1E8 <= 2 )
          goto LABEL_28;
        v28 = 151;
        goto LABEL_27;
      }
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        v28 = 148;
        goto LABEL_27;
      }
    }
    else if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v28 = 145;
      goto LABEL_27;
    }
LABEL_28:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return v6;
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::operator=((__int64 *)this + 11, (__int64)a3);
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 13);
  return v6;
}
