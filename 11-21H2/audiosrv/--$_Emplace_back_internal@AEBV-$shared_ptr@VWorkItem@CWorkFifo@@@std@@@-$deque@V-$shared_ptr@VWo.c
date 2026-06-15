/*
 * XREFs of ??$_Emplace_back_internal@AEBV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@1@@Z @ 0x18012564C
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180128B00 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18012974C (-_Growmap@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@.c)
 */

__int64 __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Emplace_back_internal<std::shared_ptr<CWorkFifo::WorkItem> const &>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[2];
  if ( v5 <= v4 + 1 )
  {
    std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Growmap(a1);
    v5 = a1[2];
    v4 = a1[4];
  }
  a1[3] &= v5 - 1;
  v6 = v5 - 1;
  v7 = a1[1];
  v8 = v6 & (v4 + a1[3]);
  if ( !*(_QWORD *)(v7 + 8 * v8) )
  {
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v7 = a1[1];
  }
  v9 = *(_QWORD **)(v7 + 8 * v8);
  *v9 = 0LL;
  v9[1] = 0LL;
  v10 = a2[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *v9 = *a2;
  result = a2[1];
  v9[1] = result;
  ++a1[4];
  return result;
}
