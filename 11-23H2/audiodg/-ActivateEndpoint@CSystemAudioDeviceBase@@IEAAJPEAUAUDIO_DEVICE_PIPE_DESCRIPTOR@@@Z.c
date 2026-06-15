/*
 * XREFs of ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400557C0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140057EE0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B570 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140014B4C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14001C3AC (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140055E88 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2)
{
  int v4; // r12d
  int v5; // ebx
  struct IUnknown *v6; // rcx
  int v7; // eax
  unsigned __int16 *v8; // rsi
  __int64 v9; // rcx
  char *v10; // rbx
  int v11; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  _QWORD *v13; // r14
  int v14; // r13d
  __int64 (__fastcall ***v16)(_QWORD, GUID *, char *); // [rsp+30h] [rbp-99h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-91h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-89h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-81h] BYREF
  char *v20; // [rsp+58h] [rbp-71h]
  __int64 v21; // [rsp+60h] [rbp-69h] BYREF
  _WORD v22[12]; // [rsp+70h] [rbp-59h] BYREF
  __int128 v23; // [rsp+88h] [rbp-41h]
  int v24; // [rsp+9Ch] [rbp-2Dh]
  CSystemAudioDeviceBase *v25; // [rsp+A0h] [rbp-29h]
  int v26; // [rsp+A8h] [rbp-21h]
  int v27; // [rsp+B0h] [rbp-19h]
  int v28; // [rsp+B4h] [rbp-15h]
  int v29; // [rsp+B8h] [rbp-11h]
  int v30; // [rsp+BCh] [rbp-Dh]
  int v31; // [rsp+C0h] [rbp-9h]
  int v32; // [rsp+C4h] [rbp-5h]
  int v33; // [rsp+C8h] [rbp-1h]
  int v34; // [rsp+CCh] [rbp+3h]
  int v35; // [rsp+D0h] [rbp+7h]
  int v36; // [rsp+D4h] [rbp+Bh]
  int v37; // [rsp+D8h] [rbp+Fh]
  int v38; // [rsp+DCh] [rbp+13h]
  int v39; // [rsp+E0h] [rbp+17h]
  struct IUnknown *v40; // [rsp+140h] [rbp+77h] BYREF
  struct IUnknown *v41; // [rsp+148h] [rbp+7Fh] BYREF

  v4 = 0;
  ppv = 0LL;
  v40 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v41 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v5 = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)a2);
  if ( v5 >= 0 )
  {
    v5 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(
             ppv,
             *((_QWORD *)a2 + 7),
             &v40);
      if ( v5 >= 0 )
      {
        v6 = v41;
        if ( v41 != v40 )
        {
          ATL::AtlComQIPtrAssign(&v41, v40, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
          v6 = v41;
        }
        if ( !v6 )
        {
          v5 = -2147467262;
          goto LABEL_23;
        }
        LOWORD(pvar[0]) = 65;
        v7 = ((__int64 (__fastcall *)(struct IUnknown *))v6->lpVtbl[2].QueryInterface)(v6);
        v8 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
        v9 = v8[8];
        if ( v7 )
        {
          v10 = (char *)CoTaskMemAlloc(v9 + 32);
          if ( !v10 )
            goto LABEL_10;
          *(_DWORD *)v10 = v8[8] + 32;
          *((_DWORD *)v10 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v10 + 2) = *((_DWORD *)a2 + 25);
          memcpy_0(v10 + 12, v8, v8[8] + 18LL);
          v11 = v8[8] + 32;
        }
        else
        {
          v10 = (char *)CoTaskMemAlloc(v9 + 64);
          if ( !v10 )
          {
LABEL_10:
            v5 = -2147024882;
            goto LABEL_23;
          }
          *(_DWORD *)v10 = v8[8] + 64;
          *((_DWORD *)v10 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v10 + 2) = *((_DWORD *)a2 + 25);
          *(_OWORD *)(v10 + 12) = *(_OWORD *)((char *)a2 + 104);
          *(_OWORD *)(v10 + 28) = *(_OWORD *)((char *)a2 + 148);
          memcpy_0(v10 + 44, v8, v8[8] + 18LL);
          v11 = v8[8] + 64;
        }
        v20 = v10;
        LODWORD(pvar[1]) = v11;
        lpVtbl = v40->lpVtbl;
        if ( *((_DWORD *)a2 + 18) )
        {
          v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))lpVtbl[1].QueryInterface)(
                 v40,
                 &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                 1LL,
                 pvar,
                 &v17);
          if ( v5 < 0 )
            goto LABEL_23;
          v13 = (_QWORD *)((char *)this + 232);
          v5 = (**v17)(v17, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 232);
        }
        else
        {
          v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))lpVtbl[1].QueryInterface)(
                 v40,
                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                 1LL,
                 pvar,
                 &v16);
          if ( v5 < 0 )
            goto LABEL_23;
          v13 = (_QWORD *)((char *)this + 232);
          v5 = (**v16)(v16, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 232);
        }
        v14 = *((_DWORD *)a2 + 24);
        LOBYTE(v4) = *((_DWORD *)a2 + 20) != 0;
        if ( g_u32AEWMILogLevel >= 4 )
        {
          memset_0(v22, 0, 0x40uLL);
          v22[0] = 120;
          v24 = 0x20000;
          v23 = AEWMIGUID_ENDPOINT_ACTIVATION;
          v22[2] = 1025;
          v25 = this;
          v26 = 0;
          v27 = *((_DWORD *)a2 + 34);
          v28 = *((_DWORD *)a2 + 25);
          v29 = *((_DWORD *)a2 + 18);
          v30 = *((_DWORD *)a2 + 35);
          v31 = *v8;
          v32 = *((_DWORD *)v8 + 1);
          v33 = v8[7];
          v34 = v8[1];
          v35 = *((_DWORD *)a2 + 8);
          v36 = *((_DWORD *)this + 56);
          v37 = v4;
          v38 = v14;
          v39 = v5;
          EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
        }
        if ( v5 >= 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v13 + 48LL))(*v13, *((unsigned int *)this + 56));
      }
    }
  }
LABEL_23:
  PropVariantClear(pvar);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14,
        (unsigned int)&WPP_17ee35be398e333f76426bebeb3cbce6_Traceguids,
        v5,
        (__int64)"CSystemAudioDeviceBase::ActivateEndpoint");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceBase::ActivateEndpoint", 0x217u, v5);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v41);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v40);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v5;
}
