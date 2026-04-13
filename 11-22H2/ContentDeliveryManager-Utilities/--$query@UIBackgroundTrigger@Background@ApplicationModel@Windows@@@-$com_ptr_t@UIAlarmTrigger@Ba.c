/*
 * XREFs of ??$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@?$com_ptr_t@UIAlarmTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D27F8
 * Callers:
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800D2858 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D3374 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::ApplicationModel::Background::IAlarmTrigger,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundTrigger>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
