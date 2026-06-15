/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800CF06C
 * Callers:
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180064BC8 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D629C (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_::_Do_call @ 0x1800EE6D0 (std--_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_87bf9f13687bedce95b5ee608297e79e__void_::_Do_call @ 0x18010ADD0 (std--_Func_impl_no_alloc__lambda_87bf9f13687bedce95b5ee608297e79e__void_--_Do_call.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180136560 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CDAE4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x932, v2, v3);
}
