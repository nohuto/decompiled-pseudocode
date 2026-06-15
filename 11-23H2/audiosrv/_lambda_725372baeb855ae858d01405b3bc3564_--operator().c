/*
 * XREFs of _lambda_725372baeb855ae858d01405b3bc3564_::operator() @ 0x18013BFA4
 * Callers:
 *     wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18013BE14 (wil--details--lambda_call__lambda_725372baeb855ae858d01405b3bc3564___--_lambda_call__lambda_7253.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18013C090 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
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
