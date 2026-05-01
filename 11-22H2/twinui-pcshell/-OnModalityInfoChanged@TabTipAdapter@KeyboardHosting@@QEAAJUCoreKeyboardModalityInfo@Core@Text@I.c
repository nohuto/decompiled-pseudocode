/*
 * XREFs of ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD7D6
 * Callers:
 *     ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1802DB392 (-HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180133248 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD3B4 (-GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180528ED8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(__int64 a1, int *a2)
{
  int v4; // r14d
  char v5; // al
  int Focus; // ebx
  __int64 v7; // rdx
  const WCHAR *ModalityString; // rax
  unsigned int v10; // r8d
  HSTRING Reserved1; // rbx
  int v12; // eax
  __int64 *v13; // r9
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-49h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-41h] BYREF
  __int64 v17; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+38h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v20; // [rsp+58h] [rbp-11h]
  HSTRING_HEADER v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+78h] [rbp+Fh]
  _QWORD v23[4]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(_BYTE *)(a1 + 484);
    *(_BYTE *)(a1 + 484) = 1;
    if ( !v5 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus((KeyboardHosting::TabTipAdapter *)a1);
      if ( Focus < 0 )
      {
        v7 = 2838LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)Focus);
        return (unsigned int)Focus;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 488) != v4 )
  {
    ModalityString = (const WCHAR *)KeyboardHosting::TabTipAdapter::GetModalityString(a1, v23, v4);
    if ( *((_QWORD *)ModalityString + 3) >= 8uLL )
      ModalityString = *(const WCHAR **)ModalityString;
    v16 = ModalityString;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, &v16, v10)[1].Reserved.Reserved1;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LastInputModality", 0x12u, 0x11u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v20, Reserved1);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB1B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
    v20 = 0LL;
    v22 = 0LL;
    std::wstring::_Tidy_deallocate((__int64)v23);
    _InterlockedExchange((volatile __int32 *)(a1 + 488), v4);
  }
  if ( !*(_QWORD *)(a1 + 120) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB20,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x80070490LL);
  v13 = *(__int64 **)(a1 + 120);
  if ( v13 )
  {
    v14 = *v13;
    v17 = *(_QWORD *)a2;
    v18 = a2[2];
    Focus = (*(__int64 (__fastcall **)(__int64 *, __int64 *, int *))(v14 + 208))(v13, &v17, &v15);
    if ( Focus < 0 )
    {
      v7 = 2852LL;
      goto LABEL_5;
    }
    if ( v15 == 2 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(a1, 2LL, *(unsigned int *)(a1 + 480));
      if ( Focus < 0 )
      {
        v7 = 2856LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
