/*
 * XREFs of ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x180432990
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1803E5A3C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18043223C (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180747360 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180747CB4 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::SetMode(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ebx
  HWND ForegroundWindow; // rax
  HMONITOR v8; // r14
  ImeNotificationExperienceManager *v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-49h]
  PEVENT_DATA_DESCRIPTOR v18; // [rsp+28h] [rbp-41h]
  int v19; // [rsp+40h] [rbp-29h] BYREF
  const WCHAR *v20[3]; // [rsp+48h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( *(_DWORD *)(a1 + 88) != 2
    || (v4 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(a1 + 48)), (v4 & 0x80000000) == 0) )
  {
    v6 = 0;
    if ( a2 == 1 || a2 == 2 )
      v6 = 1041;
    v19 = 18;
    ForegroundWindow = GetForegroundWindow();
    v8 = MonitorFromWindow(ForegroundWindow, 2u);
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( !GetMonitorInfoW(v8, &mi) )
    {
      v4 = -2147467259;
      v5 = 206LL;
      goto LABEL_4;
    }
    v10 = ImeNotificationExperienceManager::CalculateScaling(v9, 18, v8, &mi, 1, &v19);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    memset(v20, 0, sizeof(v20));
    LODWORD(v18) = v6;
    LODWORD(v17) = v19;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
      v20,
      (__int64)L"%s %ld %ld %ld %ld",
      L"Windows.Internal.ShellExperience.ImeStatusNotification",
      18LL,
      v17,
      v18,
      a2);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v20, v11);
    v13 = CSingleViewShellExperience::SetArgs(
            (CSingleViewShellExperience *)(a1 + 48),
            (HSTRING)v12[1].Reserved.Reserved1);
    v4 = v13;
    if ( v13 >= 0 )
    {
      v13 = CSingleViewShellExperience::Show(
              a1 + 48,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
      v4 = v13;
      if ( v13 >= 0 )
      {
        if ( (unsigned int)dword_180986E18 > 5 && tlgKeywordOn((__int64)&dword_180986E18, 0x400000000000LL) )
          tlgWriteTransfer_EventWriteTransfer(
            v15,
            (unsigned __int8 *)dword_18084CAC5,
            0LL,
            0LL,
            2u,
            (PEVENT_DATA_DESCRIPTOR)&v22);
        v4 = 0;
        goto LABEL_21;
      }
      v14 = 220LL;
    }
    else
    {
      v14 = 219LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_21:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
    return v4;
  }
  v5 = 188LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
    (const char *)v4);
  return v4;
}
