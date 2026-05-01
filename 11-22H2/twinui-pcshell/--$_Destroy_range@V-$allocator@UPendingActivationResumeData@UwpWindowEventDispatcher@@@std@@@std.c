/*
 * XREFs of ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18017EEA8
 * Callers:
 *     ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x18017EA40 (-erase@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPendingActi.c)
 *     ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18017EDBC (--$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UP.c)
 *     ?_Change_array@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAXQEAUPendingActivationResumeData@UwpWindowEventDispatcher@@_K1@Z @ 0x18017EE2C (-_Change_array@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPen.c)
 *     _std::vector_UwpWindowEventDispatcher::PendingActivationResumeData_std::allocator_UwpWindowEventDispatcher::PendingActivationResumeData___::_Emplace_reallocate_UwpWindowEventDispatcher::PendingActivationResumeData__::_1_::catch$3 @ 0x1802C52E6 (_std--vector_UwpWindowEventDispatcher--PendingActivationResumeData_std--allocator_UwpWindowEvent.c)
 *     ??1UwpWindowEventDispatcher@@UEAA@XZ @ 0x1804CF0B0 (--1UwpWindowEventDispatcher@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v3 + 1);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v3);
      v3 += 4;
    }
    while ( v3 != a2 );
  }
}
