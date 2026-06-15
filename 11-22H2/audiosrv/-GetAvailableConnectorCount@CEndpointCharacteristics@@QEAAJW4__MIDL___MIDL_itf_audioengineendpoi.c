/*
 * XREFs of ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18014C1D8
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x18011B06C (wil--details--lambda_call__lambda_bb75d7955c525a160db854778f06b41a___--_lambda_call__lambda_bb75.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetAvailableConnectorCount(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r14d
  int v12; // eax
  int v13; // eax
  int v15[2]; // [rsp+30h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h]
  PROPVARIANT *v18; // [rsp+50h] [rbp-9h] BYREF
  char v19; // [rsp+58h] [rbp-1h]
  _DWORD v20[6]; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v21[6]; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)v15 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 5);
  v6 = *v5;
  *(_QWORD *)v15 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64))(v6 + 24))(
         v5,
         &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
         1LL) < 0 )
  {
    *a3 = 1;
    goto LABEL_16;
  }
  v20[0] = -1702713381;
  v20[1] = 1102331579;
  v20[2] = -1223116157;
  v20[3] = -65530063;
  v20[4] = 1;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  v18 = pvar;
  v19 = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         v20,
         pvar);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( LOWORD(pvar[0]) != 19 )
    {
      v10 = 7387LL;
LABEL_10:
      v8 = -2147418113;
      v9 = 2147549183LL;
      goto LABEL_11;
    }
    v11 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    v21[0] = 590439624;
    v21[1] = 1283267372;
    v21[2] = 1907779772;
    v21[3] = 1730509416;
    v21[4] = 1;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
            *((_QWORD *)this + 9),
            v21,
            pvar);
    v8 = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v10 = 7392LL;
      goto LABEL_11;
    }
    if ( LOWORD(pvar[0]) != 31 )
    {
      v10 = 7393LL;
      goto LABEL_10;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD, unsigned int *))(**(_QWORD **)v15 + 24LL))(
            *(_QWORD *)v15,
            pvar[1],
            v11,
            a3);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CE4,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13);
      PropVariantClear(pvar);
      goto LABEL_17;
    }
    PropVariantClear(pvar);
LABEL_16:
    v8 = 0;
    goto LABEL_17;
  }
  v9 = (unsigned int)v7;
  v10 = 7386LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v9);
  wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___((__int64)&v18);
LABEL_17:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v15);
  return v8;
}
