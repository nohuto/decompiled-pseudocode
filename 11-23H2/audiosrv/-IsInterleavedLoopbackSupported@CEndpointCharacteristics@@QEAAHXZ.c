/*
 * XREFs of ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18014E1B4
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cafd355bc8518bdbec11f1f0c823a855_::operator() @ 0x180075118 (_lambda_cafd355bc8518bdbec11f1f0c823a855_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::IsInterleavedLoopbackSupported(CEndpointCharacteristics *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 *v4; // r9
  __int64 v5; // rax
  int v7; // [rsp+48h] [rbp-59h] BYREF
  __int64 v8; // [rsp+50h] [rbp-51h] BYREF
  __int64 v9; // [rsp+58h] [rbp-49h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v11; // [rsp+70h] [rbp-31h]
  PROPVARIANT v12[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v13; // [rsp+88h] [rbp-19h]
  GUID v14; // [rsp+90h] [rbp-11h] BYREF
  int v15; // [rsp+A0h] [rbp-1h]
  int v16; // [rsp+A4h] [rbp+3h]
  __int64 v17; // [rsp+A8h] [rbp+7h]
  _DWORD v18[6]; // [rsp+B0h] [rbp+Fh] BYREF
  __int128 v19; // [rsp+C8h] [rbp+27h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+37h]
  int v21; // [rsp+E0h] [rbp+3Fh]

  v2 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v7 = 0;
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v11 = 0LL;
  v17 = 0LL;
  v14 = GUID_e9ebe550_d619_4c0a_976b_7062322b3006;
  v15 = 1;
  v16 = 1;
  v4 = (__int64 *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    v5 = *v4;
    v18[0] = 590439624;
    v18[1] = 1283267372;
    v18[2] = 1907779772;
    v18[3] = 1730509416;
    v18[4] = 1;
    (*(void (__fastcall **)(__int64 *, _DWORD *, PROPVARIANT *))(v5 + 40))(v4, v18, pvar);
    if ( LOWORD(pvar[0]) != 31
      || ((int (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
           g_DeviceEnumerator,
           pvar[1],
           &v9) < 0
      || (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           &PKEY_Endpoint_KeywordDetector_ConnectorId,
           v12) < 0
      || LOWORD(v12[0]) != 19 )
    {
      goto LABEL_10;
    }
    LODWORD(v17) = LOWORD(v12[1]);
    v3 = v9;
  }
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
         1LL,
         0LL,
         &v8) >= 0 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64, __int128 *, int, int *))(*(_QWORD *)v8 + 24LL))(
           v8,
           &v14,
           32LL,
           &v19,
           28,
           &v7) >= 0 )
      v2 = 1;
  }
LABEL_10:
  PropVariantClear(pvar);
  PropVariantClear(v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  return v2;
}
