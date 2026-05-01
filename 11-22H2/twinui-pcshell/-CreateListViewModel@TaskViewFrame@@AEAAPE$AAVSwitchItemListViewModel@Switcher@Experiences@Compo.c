/*
 * XREFs of ?CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1800797E4
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModelArgs@1234@@Z @ 0x180069FC8 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSw.c)
 *     ??0Size@Foundation@Windows@@QEAA@MM@Z @ 0x18007198C (--0Size@Foundation@Windows@@QEAA@MM@Z.c)
 *     ??$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV?$Box@VSize@Foundation@Windows@@@Platform@@VSize@Foundation@Windows@@@Z @ 0x1800799EC (--$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV-$Box@VSize@Foundation@Windows@@@Platfor.c)
 *     ??$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x18007B13C (--$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitch.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18007EE48 (--0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TaskViewFrame::CreateListViewModel(__int64 a1)
{
  BOOL v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  Windows::Foundation::Size *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  void **v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h]
  __int64 v22; // [rsp+68h] [rbp+20h]

  v2 = (*(_DWORD *)(a1 + 64) & 1) == 0;
  v3 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModelArgs::SwitchItemListViewModelArgs();
  v4 = __abi_winrt_ptr_ctor(v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v5 = to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(a1 + 88);
  v20 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, v5);
  if ( v6 < 0 )
  {
    __abi_WinRTraiseException(v6);
    goto LABEL_17;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  LOBYTE(v7) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, v7);
  if ( v8 < 0 )
  {
LABEL_17:
    __abi_WinRTraiseException(v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, BOOL))(*(_QWORD *)v4 + 88LL))(v4, v2);
  if ( v9 < 0 )
  {
    __abi_WinRTraiseException(v9);
LABEL_19:
    __abi_WinRTraiseException(v13);
    __debugbreak();
  }
  v10 = Windows::Foundation::Size::Size((Windows::Foundation::Size *)&v20, 16.0, 16.0);
  v11 = __abi_create_box<Windows::Foundation::Size>(*(_QWORD *)v10);
  v21 = v11;
  v12 = __abi_winrt_cast_to(0LL, v11, &_uuidof__AU__IBox_VSize_Foundation_Windows___Platform__);
  v22 = v12;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 136LL))(v4, v12);
  if ( v13 < 0 )
    goto LABEL_19;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v20 = 0LL;
  v17 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v14,
          v4,
          v15,
          v16);
  v20 = v17;
  v18 = __abi_winrt_ptr_ctor(v17);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v18;
}
