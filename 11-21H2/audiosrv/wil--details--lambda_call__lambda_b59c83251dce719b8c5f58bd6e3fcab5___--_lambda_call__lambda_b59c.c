/*
 * XREFs of wil::details::lambda_call__lambda_b59c83251dce719b8c5f58bd6e3fcab5___::_lambda_call__lambda_b59c83251dce719b8c5f58bd6e3fcab5___ @ 0x180068430
 * Callers:
 *     _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$8 @ 0x18006A130 (_CEndpointCharacteristics--SetDeviceFormatAndSpatialSettings_--_1_--dtor$8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_b59c83251dce719b8c5f58bd6e3fcab5___::_lambda_call__lambda_b59c83251dce719b8c5f58bd6e3fcab5___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(*(_QWORD *)a1 + 24LL));
  }
  return result;
}
