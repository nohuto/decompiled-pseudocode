/*
 * XREFs of ?GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x180487B40
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180487F20 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1804881D0 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityViewInfo::GetFrameRect(AccessibilityViewInfo *this, struct tagRECT *a2)
{
  __int64 v4; // rsi
  unsigned int LastError; // ebx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  HWND hWndFrom; // [rsp+28h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  SetRectEmpty(a2);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    v11 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v7 = v6(v4, &v11);
    LastError = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, &hWndFrom);
      LastError = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 56LL))(
               *((_QWORD *)this + 1),
               &v14);
        LastError = v7;
        if ( v7 >= 0 )
        {
          *(_OWORD *)&Points[0].x = v14;
          if ( MapWindowPoints(hWndFrom, 0LL, Points, 2u) || !GetLastError() )
          {
            *a2 = *(struct tagRECT *)&Points[0].x;
            LastError = 0;
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x34,
                          (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
                          v9);
          }
          goto LABEL_14;
        }
        v8 = 46LL;
      }
      else
      {
        v8 = 43LL;
      }
    }
    else
    {
      v8 = 40LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
      (const char *)(unsigned int)v7);
LABEL_14:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    return LastError;
  }
  LastError = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
    (const char *)0x8000FFFFLL);
  return LastError;
}
