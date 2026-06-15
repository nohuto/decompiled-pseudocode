/*
 * XREFs of ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180116D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x1801171A8 (-SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointAbilityToBeDefault(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3)
{
  HRESULT v5; // ebx
  struct IMMDevice *v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+50h] [rbp-10h] BYREF
  LPVOID v12; // [rsp+88h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+38h] BYREF

  ppv = 0LL;
  v12 = 0LL;
  v11[0] = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetEndpointAbilityToBeDefault", 1725, v5);
    goto LABEL_17;
  }
  v5 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
         &ppv);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v12);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, 2LL, v11);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, 0LL, &v10);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, struct IMMDevice **))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v7);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = SetNeverSetAsDefaultProperty(v7, a3);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, 2LL, &v9);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, 0LL, &v8);
  if ( v5 < 0 )
    goto LABEL_16;
  if ( v11[0] != v9 )
  {
    v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 88LL))(ppv, v9, 2LL);
    if ( v5 < 0 )
      goto LABEL_16;
  }
  if ( v10 != v8 )
    v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(ppv, v8, 0LL, 0LL);
  if ( v5 < 0 )
    goto LABEL_16;
LABEL_17:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v11);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v5;
}
