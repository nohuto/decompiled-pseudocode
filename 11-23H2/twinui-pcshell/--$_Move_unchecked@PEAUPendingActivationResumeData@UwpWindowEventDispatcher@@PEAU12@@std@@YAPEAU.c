/*
 * XREFs of ??$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@00@Z @ 0x18017EBEC
 * Callers:
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x18017EA40 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPendingActi.c)
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@@Z @ 0x18017EB80 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator_ea_18017EB80.c)
 * Callees:
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x18017EC40 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<UwpWindowEventDispatcher::PendingActivationResumeData *,UwpWindowEventDispatcher::PendingActivationResumeData *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    UwpWindowEventDispatcher::PendingActivationResumeData::operator=(a3, i);
    a3 += 32LL;
  }
  return a3;
}
