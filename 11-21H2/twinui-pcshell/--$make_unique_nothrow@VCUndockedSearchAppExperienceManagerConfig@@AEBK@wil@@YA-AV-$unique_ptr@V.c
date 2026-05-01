/*
 * XREFs of ??$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x18017D0E4
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4@Z @ 0x1801A0C20 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ??0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z @ 0x1800F4970 (--0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z.c)
 *     ??0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ @ 0x1800FA0AC (--0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::make_unique_nothrow<CUndockedSearchAppExperienceManagerConfig,unsigned long const &>(
        _QWORD *a1,
        int *a2)
{
  _DWORD *v4; // rbx
  int v5; // edx

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *(_QWORD *)v4 = &CUndockedSearchAppExperienceManagerConfig::`vftable';
    v4[2] = v5;
    winrt::Windows::UI::ViewManagement::UISettings::UISettings((winrt::Windows::UI::ViewManagement::UISettings *)(v4 + 4));
    winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout((_QWORD *)v4 + 3);
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  return a1;
}
