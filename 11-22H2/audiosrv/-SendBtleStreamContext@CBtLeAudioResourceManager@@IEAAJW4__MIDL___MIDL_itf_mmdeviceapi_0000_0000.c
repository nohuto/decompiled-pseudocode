/*
 * XREFs of ?SendBtleStreamContext@CBtLeAudioResourceManager@@IEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800FD0A0
 * Callers:
 *     ?GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800FB910 (-GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUS.c)
 *     ?UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FD5C8 (-UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CBtLeAudioResourceManager::SendBtleStreamContext(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  int *v17; // [rsp+20h] [rbp-69h]
  __int64 *v18; // [rsp+40h] [rbp-49h] BYREF
  int v19[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v20; // [rsp+50h] [rbp-39h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-21h]
  _BYTE v23[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v24; // [rsp+78h] [rbp-11h] BYREF
  GUID v25; // [rsp+80h] [rbp-9h] BYREF
  int v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+94h] [rbp+Bh]
  _DWORD v28[6]; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v3 = a3;
  v4 = a2;
  v20 = 0LL;
  v6 = *(_QWORD *)((a2 != 0 ? 8 : 0) + a1 + 64);
  if ( !v6
    || (v20 = 0LL,
        (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
          v6,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v20) < 0)
    || !v20 )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_20;
  }
  v28[0] = 590439624;
  v28[1] = 1283267372;
  v28[2] = 1907779772;
  v28[3] = 1730509416;
  v28[4] = 1;
  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(v20 + 72) + 40LL))(
         *(_QWORD *)(v20 + 72),
         v28,
         pvar);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 404LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)v9);
    goto LABEL_7;
  }
  if ( LOWORD(pvar[0]) != 31 )
  {
    v8 = -2147418113;
    v9 = 2147549183LL;
    v10 = 405LL;
    goto LABEL_6;
  }
  v18 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v18 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))lpVtbl->GetDevice)(
          g_DeviceEnumerator,
          pvar[1],
          &v18);
  v8 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)v19 = 0LL;
    v13 = *v18;
    *(_QWORD *)v19 = 0LL;
    v17 = v19;
    v14 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v13 + 24))(
            v18,
            &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
            23LL);
    v8 = v14;
    if ( v14 >= 0 )
    {
      v25 = GUID_33889d99_1226_4016_a0d5_18875cf7c5cf;
      v26 = 1;
      v27 = 2;
      v24 = v3;
      LODWORD(v17) = 8;
      v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, __int64 *, int *, _BYTE *))(**(_QWORD **)v19 + 24LL))(
              *(_QWORD *)v19,
              &v25,
              24LL,
              &v24,
              v17,
              v23);
      v8 = v14;
      if ( v14 >= 0 )
      {
        *(_DWORD *)(a1 + 4 * v4 + 492) = v3;
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v19);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
        PropVariantClear(pvar);
        v8 = 0;
        goto LABEL_20;
      }
      v15 = 425LL;
    }
    else
    {
      v15 = 413LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v14);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
LABEL_7:
  PropVariantClear(pvar);
LABEL_20:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v20);
  return v8;
}
