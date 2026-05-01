/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801B97D0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18016A474 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 */

void __fastcall _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rsi
  int v5; // edx
  int v6; // r8d

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
