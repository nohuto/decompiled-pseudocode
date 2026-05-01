/*
 * XREFs of ?_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x180568B68
 * Callers:
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1802E1088 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ?ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1805675B0 (-ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveListener@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAJPEAX@Z @ 0x180567BA0 (-RemoveListener@-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Int.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::_UnregisterItemForTitleChanges(
        SwitchItemFilteredCollection *this,
        struct IObservableItem *a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct IObservableItem *))(*(_QWORD *)a2 + 24LL))(a2);
  v4 = ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::RemoveListener(
         v3,
         (__int64)this);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
