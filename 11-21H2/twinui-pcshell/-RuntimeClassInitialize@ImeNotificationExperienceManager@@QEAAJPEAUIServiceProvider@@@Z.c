/*
 * XREFs of ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18036076C
 * Callers:
 *     ??$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18035FE9C (--$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImeNotificationExperienceManager::RuntimeClassInitialize(
        ImeNotificationExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-68h] BYREF
  HSTRING v9; // [rsp+48h] [rbp-50h]
  HSTRING_HEADER v10; // [rsp+50h] [rbp-48h] BYREF
  HSTRING v11; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ImeStatusNotification",
    0x37u,
    0x36u);
  v4 = v9;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v10,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 6,
         (struct IWeakReferenceSource *)(-(__int64)(this != 0LL) & ((unsigned __int64)this + 8)),
         a2,
         v11,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 27) = 4;
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 32, (__int64)this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
