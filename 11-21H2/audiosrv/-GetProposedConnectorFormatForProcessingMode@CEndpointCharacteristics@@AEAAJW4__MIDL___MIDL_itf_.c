/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002C580
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002318 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb___ @ 0x1801402A0 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801506EC (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rsi
  int v8; // ebx
  __int64 v9; // rax
  void *v10; // rcx
  char *v12; // rdi
  struct tWAVEFORMATEX *v13; // rbx
  void *v14; // [rsp+30h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-81h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-79h] BYREF
  __int64 v17; // [rsp+48h] [rbp-71h] BYREF
  __int64 v18; // [rsp+50h] [rbp-69h]
  __int64 v19; // [rsp+58h] [rbp-61h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+70h] [rbp-49h]
  PROPVARIANT v22[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v23; // [rsp+88h] [rbp-31h]
  __int128 v24; // [rsp+90h] [rbp-29h] BYREF
  _DWORD v25[6]; // [rsp+A0h] [rbp-19h] BYREF
  struct _tagpropertykey v26; // [rsp+B8h] [rbp-1h] BYREF

  v7 = 0LL;
  v14 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  pv = 0LL;
  *(_OWORD *)pvar = 0LL;
  v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == eOffloadConnector )
    {
      v26 = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId;
    }
    else
    {
      if ( a2 != eKeywordDetectorConnector )
      {
        v8 = -2147024809;
        goto LABEL_10;
      }
      v26 = PKEY_Endpoint_KeywordDetector_ConnectorId;
    }
  }
  else
  {
    *(_QWORD *)&v26.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v26.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v26.pid = 1;
  }
  v25[0] = 590439624;
  v25[1] = 1283267372;
  v25[2] = 1907779772;
  v25[3] = 1730509416;
  v25[4] = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         v25,
         pvar);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &v26,
           v22);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
             g_DeviceEnumerator,
             pvar[1],
             &v19);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v19 + 24LL))(
               v19,
               &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
               23LL);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL))(
                 v18,
                 LODWORD(v22[1]),
                 &v17);
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 **))(*(_QWORD *)v17 + 104LL))(
                   v17,
                   23LL,
                   &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                   &v16);
            if ( v8 >= 0 )
            {
              v9 = *v16;
              v24 = (__int128)*a3;
              v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, LPVOID *))(v9 + 24))(v16, &v24, &pv);
              if ( v8 >= 0 )
              {
                v12 = (char *)pv;
                v8 = CTCoAllocPolicy::Alloc(v10, 1u, *((unsigned __int16 *)pv + 40) + 18LL, &v14);
                if ( v8 < 0 )
                {
                  v7 = v14;
                }
                else
                {
                  v13 = (struct tWAVEFORMATEX *)v14;
                  memcpy_0(v14, v12 + 64, *((unsigned __int16 *)v12 + 40) + 18LL);
                  *a4 = v13;
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
  PropVariantClear(v22);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  if ( v16 )
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v8;
}
