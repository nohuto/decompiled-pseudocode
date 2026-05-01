/*
 * XREFs of ??_E?$_Ref_count_obj2@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@UEAAPEAXI@Z @ 0x180430C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
