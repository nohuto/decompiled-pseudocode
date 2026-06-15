/*
 * XREFs of ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180035920
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180035780 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x180142080 (-OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180036070 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CDefaultDeviceManager::GetDefaultEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  unsigned int v5; // r14d
  _QWORD *v7; // r15
  struct IUnknown *v8; // rdi
  struct IUnknown *v9; // rbx
  unsigned int v10; // r12d
  HRESULT v11; // esi
  __int64 v13; // rdx
  int v14; // r15d
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  int v17; // r14d
  struct IUnknown *v18; // rcx
  struct IUnknown *v19; // rsi
  unsigned int v20; // r15d
  struct IUnknown *v21; // r14
  int v22; // r15d
  struct IUnknown *v23; // rcx
  struct IUnknown *v24; // r15
  struct IUnknown *v25; // r14
  unsigned int v26; // r15d
  struct IUnknown *v27; // rax
  unsigned __int16 *v28; // rdx
  char *v29; // r10
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // r15
  unsigned int v33; // eax
  unsigned int v34; // [rsp+30h] [rbp-D0h]
  unsigned int v35; // [rsp+34h] [rbp-CCh]
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v37; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v38; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h]
  unsigned int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h]
  struct _FILETIME FileTime; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  struct IUnknown *v49; // [rsp+90h] [rbp-70h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h]
  FILETIME FileTime2; // [rsp+B0h] [rbp-50h] BYREF
  FILETIME v54; // [rsp+B8h] [rbp-48h] BYREF
  PROPVARIANT v55[2]; // [rsp+C0h] [rbp-40h] BYREF
  SYSTEMTIME *v56; // [rsp+D0h] [rbp-30h]
  _QWORD *v57; // [rsp+D8h] [rbp-28h]
  struct IUnknown *v58; // [rsp+E0h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h]
  SYSTEMTIME SystemTime; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 v62[16]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v63[16]; // [rsp+130h] [rbp+30h] BYREF

  v57 = a4;
  v5 = a3;
  v42 = a3;
  v7 = a5;
  v48 = (__int64)a5;
  ppv = 0LL;
  v46 = 0LL;
  v8 = 0LL;
  v49 = 0LL;
  v52 = -1LL;
  v35 = 0;
  FileTime2 = 0LL;
  v9 = 0LL;
  v58 = 0LL;
  v10 = 0;
  v34 = 0;
  v54 = 0LL;
  v11 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, a2, 1LL, &v46);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v46 + 24LL))(v46, &v43);
      if ( v11 >= 0 )
      {
        if ( !v43 )
          goto LABEL_5;
        v11 = StringCchPrintfW(v63, 0xDuLL, L"Level:%x", v5);
        if ( v11 >= 0 )
        {
          v13 = 0LL;
          v44 = 0;
          if ( !v43 )
            goto LABEL_124;
          while ( 1 )
          {
            v14 = 0;
            v37 = 0LL;
            v39 = 0LL;
            pv = 0LL;
            FileTime = 0LL;
            v11 = (*(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v46 + 32LL))(
                    v46,
                    v13,
                    &v37);
            if ( v11 < 0 )
              goto LABEL_127;
            v40 = 0;
            if ( (int)GetNeverSetAsDefaultProperty(v37, a2, v5, &v40) >= 0 && v40 )
              goto LABEL_83;
            v11 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))v37->lpVtbl[1].Release)(v37, &pv);
            if ( v11 < 0 )
              goto LABEL_127;
            if ( v57 )
            {
              v15 = (_QWORD *)*v57;
              if ( *v57 )
              {
                while ( 1 )
                {
                  v28 = (unsigned __int16 *)v15[2];
                  v29 = (char *)((_BYTE *)pv - (_BYTE *)v28);
                  do
                  {
                    v30 = *(unsigned __int16 *)&v29[(_QWORD)v28];
                    v31 = *v28 - v30;
                    if ( v31 )
                      break;
                    ++v28;
                  }
                  while ( v30 );
                  if ( !v31 )
                    break;
                  v15 = (_QWORD *)*v15;
                  if ( !v15 )
                    goto LABEL_23;
                }
LABEL_83:
                CoTaskMemFree(pv);
                pv = 0LL;
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
                v26 = v35;
                goto LABEL_76;
              }
            }
LABEL_23:
            v38 = 0LL;
            *(_OWORD *)pvar = 0LL;
            v60 = 0LL;
            if ( v37 )
            {
              v16 = 0;
              if ( v5 != 1 )
                v16 = v5;
              v14 = 0;
              v17 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v37->lpVtbl[1].AddRef)(
                      v37,
                      0LL,
                      &v38);
              if ( v17 >= 0 )
              {
                v17 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *, PROPVARIANT *))v38->lpVtbl[1].Release)(
                        v38,
                        &PKEY_AudioEndpoint_AvoidSelection,
                        pvar);
                if ( v17 >= 0
                  && LOWORD(pvar[0]) == 19
                  && (!v16 && ((__int64)pvar[1] & 1) != 0 || v16 == 2 && ((__int64)pvar[1] & 4) != 0)
                  && (((__int64)pvar[1] & 0x100) != 0 && !a2 || ((__int64)pvar[1] & 0x200) != 0 && a2 == 1) )
                {
                  v14 = 1;
                }
              }
              v10 = v34;
            }
            else
            {
              v17 = -2147024809;
            }
            PropVariantClear(pvar);
            if ( v38 )
              ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
            if ( v17 < 0 || !v14 )
              break;
            CoTaskMemFree(pv);
            pv = 0LL;
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
            v26 = v35;
LABEL_75:
            v5 = v42;
LABEL_76:
            v13 = (unsigned int)(v44 + 1);
            v44 = v13;
            if ( (unsigned int)v13 >= v43 )
            {
              if ( v9 && (!v8 || v10 > v26 || v10 >= 0x60000000) )
              {
                v27 = v9;
                v9 = 0LL;
                v7 = (_QWORD *)v48;
                goto LABEL_80;
              }
              v7 = (_QWORD *)v48;
LABEL_124:
              if ( v8 )
              {
                v27 = v8;
                v8 = 0LL;
                v49 = 0LL;
LABEL_80:
                *v7 = v27;
              }
              if ( !*v7 )
LABEL_5:
                v11 = -2147023728;
              goto LABEL_6;
            }
          }
          v18 = v39;
          if ( v39 != v37 )
          {
            v19 = v39;
            v18 = 0LL;
            v39 = 0LL;
            if ( v37 )
            {
              ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v37->lpVtbl->QueryInterface)(
                v37,
                &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                &v39);
              v18 = v39;
            }
            if ( v19 )
            {
              ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
              v18 = v39;
            }
          }
          if ( !v18 )
          {
            v11 = -2147024809;
LABEL_127:
            CoTaskMemFree(pv);
            pv = 0LL;
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
            goto LABEL_6;
          }
          v20 = v42;
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v18->lpVtbl[3].QueryInterface)(
                  v18,
                  v42,
                  &v41);
          if ( v11 < 0 )
            goto LABEL_127;
          v38 = 0LL;
          *(_DWORD *)&SystemTime.wYear = 67137;
          *(_QWORD *)&SystemTime.wDayOfWeek = 65537LL;
          *(_DWORD *)&SystemTime.wSecond = 0;
          *(_OWORD *)v55 = 0LL;
          v56 = 0LL;
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v37->lpVtbl[1].AddRef)(
                  v37,
                  0LL,
                  &v38);
          if ( v11 >= 0 )
          {
            v11 = ((__int64 (__fastcall *)(struct IUnknown *, void *, PROPVARIANT *))v38->lpVtbl[1].Release)(
                    v38,
                    &PKEY_Endpoint_CreationTime,
                    v55);
            if ( v11 >= 0 )
            {
              if ( LOWORD(v55[0]) != 65
                || LODWORD(v55[1]) != 16
                || !v56
                || (SystemTime = *v56, !SystemTimeToFileTime(&SystemTime, &FileTime)) )
              {
                v11 = -2147467259;
              }
            }
          }
          PropVariantClear(v55);
          if ( v38 )
            ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
          if ( v11 < 0 )
            goto LABEL_127;
          v21 = v37;
          v38 = 0LL;
          v40 = 0;
          v51 = 0LL;
          v22 = StringCchPrintfW(v62, 0xDuLL, L"Level:%x", v20);
          if ( v22 < 0 )
            goto LABEL_58;
          v23 = v38;
          if ( v38 != v21 )
          {
            v24 = v38;
            v23 = 0LL;
            v38 = 0LL;
            if ( v21 )
            {
              ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v21->lpVtbl->QueryInterface)(
                v21,
                &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                &v38);
              v23 = v38;
            }
            if ( v24 )
            {
              ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
              v23 = v38;
            }
          }
          if ( v23 )
          {
            v40 = 8;
            v22 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 *, __int64, __int64 *, int *))v23->lpVtbl[5].QueryInterface)(
                    v23,
                    v62,
                    11LL,
                    &v51,
                    &v40);
            if ( v22 < 0 )
            {
LABEL_58:
              v23 = v38;
              goto LABEL_59;
            }
            v23 = v38;
            if ( v40 == 8 )
              v47 = v51;
            else
              v22 = -2147024809;
          }
          else
          {
            v22 = -2147024809;
          }
LABEL_59:
          if ( v23 )
            ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
          if ( v22 < 0 )
          {
            if ( v41 > v10 || v41 == v10 && CompareFileTime(&FileTime, &v54) == 1 )
            {
              v25 = v37;
              if ( v9 != v37 )
              {
                if ( v37 )
                  ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->AddRef)(v37);
                if ( v9 )
                  ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
                v9 = v25;
                v58 = v25;
              }
              v10 = v41;
              v34 = v41;
              v54 = FileTime;
            }
            v26 = v35;
            goto LABEL_71;
          }
          v32 = v47;
          if ( v47 <= v52 )
          {
            v26 = v35;
            if ( v47 != v52 )
              goto LABEL_71;
            v33 = v41;
            if ( v41 > v35 )
            {
              v32 = v47;
              goto LABEL_115;
            }
            if ( v41 != v35 || CompareFileTime(&FileTime, &FileTime2) != 1 )
            {
LABEL_71:
              CoTaskMemFree(pv);
              pv = 0LL;
              if ( v39 )
                ((void (__fastcall *)(struct IUnknown *))v39->lpVtbl->Release)(v39);
              if ( v37 )
                ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
              goto LABEL_75;
            }
            v32 = v47;
          }
          v33 = v41;
LABEL_115:
          if ( v8 != v37 )
          {
            ATL::AtlComPtrAssign(&v49, v37);
            v8 = v49;
            v33 = v41;
          }
          v52 = v32;
          v26 = v33;
          v35 = v33;
          FileTime2 = FileTime;
          goto LABEL_71;
        }
      }
    }
  }
LABEL_6:
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
