/*
 * XREFs of ??1DataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18042EB20
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@EEAAXXZ @ 0x18043A240 (-_Destroy@-$_Ref_count_obj2@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState::~DataViewItemState(
        Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState *this)
{
  int v2; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this, *((_QWORD *)this + 2));
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    __debugbreak();
  }
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
