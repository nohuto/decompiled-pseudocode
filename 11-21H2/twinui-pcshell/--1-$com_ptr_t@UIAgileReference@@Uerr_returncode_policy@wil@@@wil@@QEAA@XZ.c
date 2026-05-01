/*
 * XREFs of ??1?$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800FA2EC
 * Callers:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800F7E9C (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     CreationThreadDispatcher::RunSync__lambda_5ea9e0d66c10f711b3db559ea9842d24___ @ 0x18049EB08 (CreationThreadDispatcher--RunSync__lambda_5ea9e0d66c10f711b3db559ea9842d24___.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x18049ECC0 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--__lambda_33b4202f4967ef1cd2a31cded00016d1_.c)
 *     _lambda_5ea9e0d66c10f711b3db559ea9842d24_::__lambda_5ea9e0d66c10f711b3db559ea9842d24_ @ 0x18049ECF0 (_lambda_5ea9e0d66c10f711b3db559ea9842d24_--__lambda_5ea9e0d66c10f711b3db559ea9842d24_.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x18049ED18 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_2509a4ecc3ed89a3306d425d8ffcf7d3___::_scalar_deleting_destructor_ @ 0x18049EEE0 (CAsyncCallbackWithLambda__lambda_2509a4ecc3ed89a3306d425d8ffcf7d3___--_scalar_deleting_destructo.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18049F070 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 *     ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1804E70DC (--1CopyToViewValueSetBase@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAgileReference,wil::err_returncode_policy>::~com_ptr_t<IAgileReference,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
