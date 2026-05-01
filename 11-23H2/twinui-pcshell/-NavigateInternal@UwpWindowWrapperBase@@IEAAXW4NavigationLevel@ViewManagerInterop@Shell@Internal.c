/*
 * XREFs of ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180175258
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801751D0 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     _lambda_ddf5be15f7d4f7988c2c3bff9280b548_::operator() @ 0x1804E2224 (_lambda_ddf5be15f7d4f7988c2c3bff9280b548_--operator().c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1804EF9A8 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EFAF4 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_048a96d3662c681a0b7978326510b206___ @ 0x1801F622C (Windows--Internal--ComTaskPool--QueueTask__lambda_048a96d3662c681a0b7978326510b206___.c)
 *     _lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_ @ 0x1801F7628 (_lambda_048a96d3662c681a0b7978326510b206_--__lambda_048a96d3662c681a0b7978326510b206_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v10; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( a2 != *(_DWORD *)(a1 + 484) )
  {
    *(_DWORD *)(a1 + 484) = a2;
    v5 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 280) + 152LL))(
                       *(_QWORD *)(a1 + 280),
                       &v10);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 352), a2);
      if ( v10 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else if ( a2 - 3 <= 1 )
    {
      v10 = 0LL;
      v7 = Windows::Internal::String::Initialize(&v10, (HSTRING *)(a1 + 312));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC67,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
      Windows::Internal::ComTaskPool::QueueTask__lambda_048a96d3662c681a0b7978326510b206___(v8, &v10);
      lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_(&v10);
    }
    LOBYTE(v5) = a2 - 4 <= 1;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, 0LL, v5);
  }
  return result;
}
