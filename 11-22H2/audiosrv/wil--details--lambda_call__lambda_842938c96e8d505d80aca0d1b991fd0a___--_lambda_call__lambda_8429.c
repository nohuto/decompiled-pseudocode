/*
 * XREFs of wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___ @ 0x18014A654
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$8 @ 0x18007D948 (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1288LL) + 48LL));
  }
  return result;
}
