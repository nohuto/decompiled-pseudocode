/*
 * XREFs of ?erase@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@@2@0@Z @ 0x18017EA40
 * Callers:
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180055220 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F53C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@00@Z @ 0x18017EBEC (--$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAU.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18017EEA8 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 */

_QWORD *__fastcall std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax
  void *v8; // rdi

  if ( a3 != a4 )
  {
    v8 = (void *)std::_Move_unchecked<UwpWindowEventDispatcher::PendingActivationResumeData *,UwpWindowEventDispatcher::PendingActivationResumeData *>(
                   a4,
                   *(_QWORD *)(a1 + 8));
    std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(v8);
    *(_QWORD *)(a1 + 8) = v8;
  }
  result = a2;
  *a2 = a3;
  return result;
}
