/*
 * XREFs of wil::details::lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___::_lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___ @ 0x1801441C4
 * Callers:
 *     _CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9____::_1_::dtor$0 @ 0x18014259C (_CEndpointCharacteristics--GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9____--_1_--d.c)
 *     _CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b____::_1_::dtor$0 @ 0x18014288A (_CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b____--_1_--d.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___::_lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = 0LL;
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(*(_QWORD *)a1 + 40LL) + 48LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 40LL),
             &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
             &v2);
  }
  return result;
}
