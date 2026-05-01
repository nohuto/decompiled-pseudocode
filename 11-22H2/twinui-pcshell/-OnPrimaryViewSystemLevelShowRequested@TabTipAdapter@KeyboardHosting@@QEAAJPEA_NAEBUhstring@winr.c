/*
 * XREFs of ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x180527DF8
 * Callers:
 *     ?OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180514A70 (-OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528C18 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x180521718 (--B-$ComPtrRef@V-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI.c)
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180522364 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewSystemLevelShowRequested(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // edi
  __int64 result; // rax
  char v12; // di
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64); // r12
  __int64 v20; // r15
  winrt::hstring *v21; // rax
  int v22; // esi
  int v23; // eax
  IhmNotification *v24; // rcx
  bool v25; // r8
  unsigned int v26; // ebx
  char v27; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v28[3]; // [rsp+41h] [rbp-37h] BYREF
  int v29; // [rsp+44h] [rbp-34h] BYREF
  int v30; // [rsp+48h] [rbp-30h] BYREF
  __int64 v31; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v32; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v34; // [rsp+9Ch] [rbp+24h]

  v34 = BYTE4(a4);
  v4 = a4;
  try
  {
    KeyboardHosting::TabTipAdapter::EnsureTabTip((KeyboardHosting::TabTipAdapter *)a1);
    *a2 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 120) + 320LL))(*(_QWORD *)(a1 + 120), &v30);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x822,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
      return v10;
    }
    if ( v30 == 1 )
    {
      *a2 = 1;
      v12 = v34;
      if ( !v34 )
      {
        v28[0] = 0;
        v27 = 0;
        v31 = 0LL;
        v29 = 0;
        v13 = *(_QWORD *)(a1 + 120);
        v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v13 + 304LL);
        v32 = &v31;
        v15 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *(&v32);
        v16 = v14(v13, 0LL, v28, &v27, &v29, v15);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x830,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v31);
          return v17;
        }
        LODWORD(v32) = v29;
        BYTE4(v32) = 1;
        v4 = v29;
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v31);
        v12 = 1;
      }
      v18 = *(_QWORD *)(a1 + 128);
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 320LL);
      v20 = *a3;
      v21 = winrt::hstring::hstring((winrt::hstring *)&v32, L"BUTTON");
      v22 = v19(v18, *(_QWORD *)v21, v20);
      winrt::hstring::~hstring((void **)&v32);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x835,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v22);
        return (unsigned int)v22;
      }
      if ( !v12 )
        std::_Throw_bad_optional_access();
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, v4, 0LL);
      v26 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x836,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v23);
        return v26;
      }
      LOBYTE(v24) = 1;
      IhmNotification::SendKeyboardSetVisible(v24, 0, v25);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x83D,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           v9);
  }
  return result;
}
