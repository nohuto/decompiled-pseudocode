/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180009360
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004C2C (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rsi
  const struct __WIL__WNF_TYPE_ID *v5; // rdx
  const void *v6; // r8

  if ( *Context )
  {
    v4 = (RTL_SRWLOCK *)(Context + 40);
    AcquireSRWLockExclusive((PSRWLOCK)Context + 5);
    if ( *((_QWORD *)Context + 30) - *((_QWORD *)Context + 29) >= 0xCuLL )
    {
      wil_details_WriteSRUMWnfUsageBuffer((__int64 *)Context + 29, v5, v6);
      *((_QWORD *)Context + 30) = *((_QWORD *)Context + 29);
    }
    Context[64] = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
