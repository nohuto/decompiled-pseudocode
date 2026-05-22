/*
 * XREFs of ??1?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180055DF4
 * Callers:
 *     _dynamic_atexit_destructor_for__PointerInputMediator::s_frameLookaside__ @ 0x180083B50 (_dynamic_atexit_destructor_for__PointerInputMediator--s_frameLookaside__.c)
 *     _dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__ @ 0x180083B70 (_dynamic_atexit_destructor_for__PointerInputMediator--s_frameQueue__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x18010C284 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::~deque<PointerInputMediator::PointerFrame>(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  while ( *(_QWORD *)(a1 + 32) )
    std::deque<PointerInputMediator::PointerFrame>::pop_back(a1);
  v2 = *(_QWORD *)(a1 + 16);
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x118uLL);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * *(_QWORD *)(a1 + 16));
  v5 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(v5, 0x10uLL);
}
