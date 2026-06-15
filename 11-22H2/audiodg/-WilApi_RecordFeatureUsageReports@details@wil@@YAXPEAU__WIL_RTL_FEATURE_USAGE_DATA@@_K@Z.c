/*
 * XREFs of ?WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z @ 0x14002AC3C
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x14002B164 (wil_details_RecordCachedUsage.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140059E40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsageReports(
        wil::details *this,
        struct __WIL_RTL_FEATURE_USAGE_DATA *a2,
        __int64 a3,
        unsigned int a4)
{
  struct __WIL_RTL_FEATURE_USAGE_DATA *v4; // rdi
  unsigned __int16 *v5; // rbx
  const char *v6; // [rsp+20h] [rbp-8h]

  if ( a2 )
  {
    v4 = a2;
    v5 = (unsigned __int16 *)((char *)this + 4);
    do
    {
      wil::details::WilApi_RecordFeatureUsage((wil::details *)*((unsigned int *)v5 - 1), *v5, v5[1], a4, v6);
      v5 += 4;
      v4 = (struct __WIL_RTL_FEATURE_USAGE_DATA *)((char *)v4 - 1);
    }
    while ( v4 );
  }
}
