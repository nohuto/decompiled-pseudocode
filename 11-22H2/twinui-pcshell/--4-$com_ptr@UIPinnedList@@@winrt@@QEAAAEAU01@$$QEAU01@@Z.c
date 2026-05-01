/*
 * XREFs of ??4?$com_ptr@UIPinnedList@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180287728
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIPinnedList@@@winrt@@AEAAXXZ @ 0x180289548 (-unconditional_release_ref@-$com_ptr@UIPinnedList@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall winrt::com_ptr<IPinnedList>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<IPinnedList>::unconditional_release_ref();
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
