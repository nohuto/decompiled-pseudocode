/*
 * XREFs of BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags @ 0x1803976B0
 * Callers:
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803965E8 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBGAEAPEBGAEAW4LIGHT_DISMISS_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG2AEAW4LIGHT_DISMISS_FLAGS@@@Z @ 0x1803928D4 (--$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 */

__int64 __fastcall BaseTrayFlyoutExperienceManager_CreateInstanceWithTestAndDismissFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  const wchar_t *v9; // [rsp+30h] [rbp-10h] BYREF
  const WCHAR *v10; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = a4;
  v12 = a1;
  v5 = a5;
  v13 = 0LL;
  v9 = L"StartExperienceHostVS_ccv6fwk6gx0xp!App";
  v10 = L"Windows.Internal.ShellExperience.MeetNow";
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager,IInspectable,IServiceProvider * &,unsigned short const * &,unsigned short const * &,enum LIGHT_DISMISS_FLAGS &>(
         &v13,
         &v12,
         &v10,
         &v9,
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v7 = 0;
    *v5 = v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v7;
}
