/*
 * XREFs of ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1800ACEF0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_3416a85c86fc69abb3665606740a8de1__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x180208F10 (wistd--__function--__func__lambda_3416a85c86fc69abb3665606740a8de1__void___cdecl(enum_Windows--I.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnHolographicDisplayChanged(
        TouchKeyboardExperienceManager *this,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  char v3; // si
  KeyboardHosting::TabTipAdapter *v4; // r14
  HSTRING v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  HSTRING v9; // rbx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v11; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v12; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = *(_DWORD *)a2 == 1;
  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( v4 && *((_BYTE *)this + 968) != v3 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v11 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
      v6 = v11;
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"HeadMountedDisplayAttached", 0x1Bu, 0x1Au);
      v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v13, v6);
      if ( v7 < 0 )
      {
        v8 = 6040LL;
LABEL_9:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v8,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          (int)hstringHeader.Reserved.Reserved1);
      }
    }
    else
    {
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"0", 2u, 1u);
      v9 = v13;
      v11 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"HeadMountedDisplayAttached",
        0x1Bu,
        0x1Au);
      v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v11, v9);
      if ( v7 < 0 )
      {
        v8 = 6044LL;
        goto LABEL_9;
      }
    }
    *((_BYTE *)this + 968) = v3;
  }
  return 0LL;
}
