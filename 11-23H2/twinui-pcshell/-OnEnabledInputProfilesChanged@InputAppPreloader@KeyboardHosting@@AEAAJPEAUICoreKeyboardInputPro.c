/*
 * XREFs of ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1800AD5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsImeInputProfileEnabled @ 0x18017D294 (IsImeInputProfileEnabled.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1805154A0 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::InputAppPreloader::OnEnabledInputProfilesChanged(
        KeyboardHosting::InputAppPreloader *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int32 v6; // ecx
  __int32 v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a3;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *, __int64 *))(v4 + 48))(
         a3,
         &v11);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v6 = ((unsigned __int8)IsImeInputProfileEnabled(v11) != 0) + 1;
  v7 = _InterlockedExchange((volatile __int32 *)this + 8, v6);
  if ( v6 == 2 && v7 != 2 )
    TouchKeyboardExperienceManager::PreloadInputApp(*(TouchKeyboardExperienceManager **)this);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return 0LL;
}
