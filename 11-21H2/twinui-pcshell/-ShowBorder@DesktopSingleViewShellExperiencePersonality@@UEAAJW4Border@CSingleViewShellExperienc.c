/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180030EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  char v7; // si
  __int64 v8; // r8
  __int64 v9; // r9
  HWND v10; // r15
  int v11; // ecx
  int v13; // [rsp+20h] [rbp-30h] BYREF
  int *v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-20h]
  int v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+3Ch] [rbp-14h]
  __int64 v18; // [rsp+40h] [rbp-10h]

  v7 = (char)a2;
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)(*(_QWORD *)(a1 + 8) + 24LL), a2);
  v11 = 1024;
  if ( a5 )
    v11 = 3584;
  v17 = v11;
  v16 = a3;
  v18 = a4;
  if ( (v7 & 1) != 0 )
  {
    v11 |= 0x20u;
    v17 = v11;
  }
  if ( (v7 & 2) != 0 )
  {
    v11 |= 0x40u;
    v17 = v11;
  }
  if ( (v7 & 4) != 0 )
  {
    v11 |= 0x80u;
    v17 = v11;
  }
  if ( (v7 & 8) != 0 )
    v17 = v11 | 0x100;
  v13 = 19;
  v14 = &v16;
  v15 = 16;
  SetWindowCompositionAttribute(v10, &v13, v8, v9);
  if ( a5 )
    DwmpUpdateAccentBlurRect(v10, a5);
  return 0LL;
}
