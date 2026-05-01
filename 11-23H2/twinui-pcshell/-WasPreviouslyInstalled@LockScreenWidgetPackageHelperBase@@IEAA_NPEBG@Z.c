/*
 * XREFs of ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NPEBG@Z @ 0x180247AEC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     <none>
 */

bool __fastcall LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(
        LockScreenWidgetPackageHelperBase *this,
        const unsigned __int16 *a2)
{
  bool v2; // bl
  LSTATUS ValueW; // eax
  int v4; // ecx
  bool v5; // zf
  bool v6; // sf
  LockScreenWidgetPackageHelperBase *v8; // [rsp+50h] [rbp+8h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF
  DWORD v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = this;
  v10 = 4;
  v2 = 0;
  v9 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Dsh\\Widgets\\WidgetOnLock",
             a2,
             0x10000012u,
             &v9,
             &v8,
             &v10);
  v4 = ValueW;
  if ( ValueW )
  {
    if ( ValueW != 234 )
    {
LABEL_9:
      v6 = v4 < 0;
      if ( v4 <= 0 )
        return !v6 && v2;
    }
  }
  else if ( v9 == 4 )
  {
    if ( (unsigned int)v8 <= 1 )
    {
      v4 = 0;
      v5 = (_DWORD)v8 == 1;
LABEL_8:
      v2 = v5;
      goto LABEL_9;
    }
  }
  else if ( v10 == 4 && (unsigned __int16)((_WORD)v8 - 48) <= 1u )
  {
    v4 = 0;
    v5 = (_WORD)v8 == 49;
    goto LABEL_8;
  }
  v6 = 1;
  return !v6 && v2;
}
