/*
 * XREFs of ??$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@AEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E2F04
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800DF9E0 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E3450 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800E427C (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::emplace_back<tagMANIPULATION_INPUT_INFO const * &>(
        __int64 a1,
        const struct tagMANIPULATION_INPUT_INFO **a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx

  v2 = qword_180242FB0;
  v4 = xmmword_180242FA0;
  if ( (unsigned __int64)xmmword_180242FA0 <= qword_180242FB0 + 1 )
  {
    std::deque<PointerInputMediator::PointerFrame>::_Growmap();
    v2 = qword_180242FB0;
    v4 = xmmword_180242FA0;
  }
  v5 = v4 - 1;
  *((_QWORD *)&xmmword_180242FA0 + 1) &= v5;
  v6 = v5 & (*((_QWORD *)&xmmword_180242FA0 + 1) + v2);
  v7 = *((_QWORD *)&PointerInputMediator::s_frameQueue + 1);
  if ( !*(_QWORD *)(*((_QWORD *)&PointerInputMediator::s_frameQueue + 1) + 8 * v6) )
  {
    *(_QWORD *)(*((_QWORD *)&PointerInputMediator::s_frameQueue + 1) + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x118uLL);
    v7 = *((_QWORD *)&PointerInputMediator::s_frameQueue + 1);
  }
  PointerInputMediator::PointerFrame::PointerFrame(*(PointerInputMediator::PointerFrame **)(v7 + 8 * v6), *a2);
  return *(_QWORD *)(*((_QWORD *)&PointerInputMediator::s_frameQueue + 1)
                   + 8
                   * ((*((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0++) & (*((_QWORD *)&PointerInputMediator::s_frameQueue
                                                                                   + 2)
                                                                                 - 1LL)));
}
