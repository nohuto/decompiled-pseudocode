/*
 * XREFs of std::_Func_impl_no_alloc__lambda_61c5e62474d0286cbc3b24e8797afd30__void_::_Do_call @ 0x1800FD6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_61c5e62474d0286cbc3b24e8797afd30__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rax
  PTP_TIMER *v3; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(PTP_TIMER **)(v1 + 240);
  *(_QWORD *)(v1 + 240) = 0LL;
  if ( v3 )
  {
    _RecurringTask::~_RecurringTask(v3);
    operator delete(v3);
  }
  CBtLeAudioResourceManager::ReevaluateGameModeOperation(*(CBtLeAudioResourceManager **)(a1 + 8));
}
