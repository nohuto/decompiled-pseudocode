/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180371C94
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180373BC0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180374980 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1805F1994 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  PCWSTR StringRawBuffer; // rdi
  const wchar_t *v3; // rdx
  HRESULT v4; // eax
  int v5; // eax
  UINT32 length; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string; // [rsp+28h] [rbp-40h] BYREF
  wchar_t *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10[2]; // [rsp+40h] [rbp-28h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[45], &length);
  *(_QWORD *)v10 = 0LL;
  v11 = 7LL;
  LOWORD(Src[0]) = 0;
  std::wstring::reserve(Src, length + 43);
  std::wstring::append(Src, L"Windows.Internal.ShellExperience.JumpView", 0x29uLL);
  std::wstring::append((wchar_t *)Src, 1uLL, 32);
  std::wstring::append(Src, StringRawBuffer, length);
  string = 0LL;
  v3 = (const wchar_t *)Src;
  if ( v11 >= 8 )
    v3 = Src[0];
  v4 = Microsoft::WRL::Wrappers::HString::Set(&string, v3, v10[0]);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x38A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      length);
  v5 = CSingleViewShellExperience::SetArgs((CSingleViewShellExperience *)(this + 19), string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x38B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      length);
  WindowsDeleteString(string);
  string = 0LL;
  std::wstring::_Tidy_deallocate((__int64)Src);
  return 0LL;
}
