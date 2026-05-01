/*
 * XREFs of ??1?$com_ptr@UIPinnedList@@@winrt@@QEAA@XZ @ 0x1802875EC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$6 @ 0x1802C51A2 (_GetPidlsFromTaskbarLayout_--_1_--dtor$6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIPinnedList@@@winrt@@AEAAXXZ @ 0x180289548 (-unconditional_release_ref@-$com_ptr@UIPinnedList@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IPinnedList>::~com_ptr<IPinnedList>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IPinnedList>::unconditional_release_ref();
  return result;
}
