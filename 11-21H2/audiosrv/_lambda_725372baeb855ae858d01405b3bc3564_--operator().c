/*
 * XREFs of _lambda_725372baeb855ae858d01405b3bc3564_::operator() @ 0x18012E990
 * Callers:
 *     wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18012E800 (wil--details--lambda_call__lambda_725372baeb855ae858d01405b3bc3564___--_lambda_call__lambda_7253.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180130100 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18012EA80 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 */

PhoneCallAudio *__fastcall lambda_725372baeb855ae858d01405b3bc3564_::operator()(PhoneCallAudio **a1)
{
  PhoneCallAudio *result; // rax

  PhoneCallAudio::CleanupRouting(*a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 17) + 488LL))(*((_QWORD *)*a1 + 17), 0LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)*a1 + 17);
  result = *a1;
  *((_DWORD *)*a1 + 17) = 0;
  return result;
}
