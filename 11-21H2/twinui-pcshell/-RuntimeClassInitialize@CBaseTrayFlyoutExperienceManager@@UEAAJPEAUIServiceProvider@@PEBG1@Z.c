/*
 * XREFs of ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180396380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180394508 (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager *this,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rax
  int v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v10 = a4;
  v5 = CBaseTrayFlyoutExperienceManager::Initialize(
         this,
         a2,
         L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
         a3);
  if ( v5 < 0 )
  {
    v7 = 61LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v11, (const WCHAR **)v10, v6);
  v5 = CSingleViewShellExperience::AddTestAumid(
         (CBaseTrayFlyoutExperienceManager *)((char *)this + 72),
         *(HSTRING *)(v8 + 24));
  if ( v5 < 0 )
  {
    v7 = 62LL;
    goto LABEL_5;
  }
  return (unsigned int)v5;
}
