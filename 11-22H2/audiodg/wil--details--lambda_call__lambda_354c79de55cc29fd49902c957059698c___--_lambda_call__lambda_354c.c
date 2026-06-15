/*
 * XREFs of wil::details::lambda_call__lambda_354c79de55cc29fd49902c957059698c___::_lambda_call__lambda_354c79de55cc29fd49902c957059698c___ @ 0x14005C0A4
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     _CPipeInstance::AddConnectionsAndActivateAPOs_::_1_::dtor$0 @ 0x140035562 (_CPipeInstance--AddConnectionsAndActivateAPOs_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_354c79de55cc29fd49902c957059698c___::_lambda_call__lambda_354c79de55cc29fd49902c957059698c___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 152LL) + 48LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 152LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
