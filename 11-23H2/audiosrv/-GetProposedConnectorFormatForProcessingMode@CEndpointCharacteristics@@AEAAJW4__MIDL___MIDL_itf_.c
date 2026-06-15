/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800291A8
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180017DDC (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032A30 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157AD8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rdi
  int v8; // ebx
  __int64 v9; // rax
  void *v10; // rcx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  char *v14; // rdi
  struct tWAVEFORMATEX *v15; // rbx
  void *v16; // [rsp+30h] [rbp-79h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-71h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+58h] [rbp-51h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v23; // [rsp+70h] [rbp-39h]
  PROPVARIANT v24[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int128 v26; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v27[6]; // [rsp+A0h] [rbp-9h] BYREF
  GUID v28; // [rsp+B8h] [rbp+Fh] BYREF
  int v29; // [rsp+C8h] [rbp+1Fh]

  v7 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  pv = 0LL;
  *a4 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v23 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == eOffloadConnector )
    {
      fmtid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.fmtid;
      pid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.pid;
    }
    else
    {
      if ( a2 != eKeywordDetectorConnector )
      {
        v8 = -2147024809;
        goto LABEL_10;
      }
      fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
      pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
    }
    v28 = fmtid;
    v29 = pid;
  }
  else
  {
    *(_QWORD *)&v28.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v28.Data4 = 0xFC181731B718BA83uLL;
    v29 = 1;
  }
  v27[0] = 590439624;
  v27[1] = 1283267372;
  v27[2] = 1907779772;
  v27[3] = 1730509416;
  v27[4] = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         v27,
         pvar);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           &v28,
           v24);
    if ( v8 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
             g_DeviceEnumerator,
             pvar[1],
             &v21);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v21 + 24LL))(
               v21,
               &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
               23LL);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 56LL))(
                 v20,
                 LODWORD(v24[1]),
                 &v19);
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 **))(*(_QWORD *)v19 + 104LL))(
                   v19,
                   23LL,
                   &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                   &v18);
            if ( v8 >= 0 )
            {
              v9 = *v18;
              v26 = (__int128)*a3;
              v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, LPVOID *))(v9 + 24))(v18, &v26, &pv);
              if ( v8 >= 0 )
              {
                v14 = (char *)pv;
                v8 = CTCoAllocPolicy::Alloc(v10, 1u, *((unsigned __int16 *)pv + 40) + 18LL, &v16);
                if ( v8 < 0 )
                {
                  v7 = v16;
                }
                else
                {
                  v15 = (struct tWAVEFORMATEX *)v16;
                  memcpy_0(v16, v14 + 64, *((unsigned __int16 *)v14 + 40) + 18LL);
                  *a4 = v15;
                  v7 = 0LL;
                  v8 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_10:
  PropVariantClear(pvar);
  PropVariantClear(v24);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
  return (unsigned int)v8;
}
