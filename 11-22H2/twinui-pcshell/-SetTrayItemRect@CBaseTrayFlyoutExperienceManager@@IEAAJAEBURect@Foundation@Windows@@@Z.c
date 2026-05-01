/*
 * XREFs of ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18047517C
 * Callers:
 *     ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z @ 0x1804745A0 (-PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x180475368 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x180474910 (-RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::SetTrayItemRect(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rdx
  int *v7; // rdi
  int v8; // esi
  LANGID ThreadUILanguage; // ax
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-50h] BYREF
  RECT v14; // [rsp+28h] [rbp-48h] BYREF
  _AppBarData pData; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *((float *)a2 + 2) >= 1.0 && *((float *)a2 + 3) >= 1.0 )
  {
    *((_DWORD *)this + 99) = (int)*((float *)a2 + 1);
    *((_DWORD *)this + 98) = (int)*(float *)a2;
    *((_DWORD *)this + 100) = (int)(float)(*(float *)a2 + *((float *)a2 + 2));
    v3 = (int)(float)(*((float *)a2 + 3) + *((float *)a2 + 1));
    goto LABEL_15;
  }
  pData.cbSize = 48;
  memset(&pData.hWnd, 0, 40);
  if ( !(unsigned int)SHAppBarMessage(5u, &pData) )
  {
    v4 = -2147418113;
    v5 = 748LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (int *)((char *)this + 392);
  if ( !CopyRect((LPRECT)((char *)this + 392), &pData.rc) )
  {
    v4 = -2147467259;
    v5 = 749LL;
    goto LABEL_6;
  }
  v8 = *((_DWORD *)this + 101) - *((_DWORD *)this + 99);
  if ( v8 >= *((_DWORD *)this + 100) - *v7 )
    v8 = *((_DWORD *)this + 100) - *v7;
  ThreadUILanguage = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    v10 = *v7;
  else
    v10 = *((_DWORD *)this + 100) - v8;
  v3 = *((_DWORD *)this + 101);
  *v7 = v10;
  *((_DWORD *)this + 99) = v3 - v8;
  *((_DWORD *)this + 100) = v8 + v10;
LABEL_15:
  *((_DWORD *)this + 101) = v3;
  v13 = 0;
  v11 = *((_QWORD *)this + 8);
  v14 = 0LL;
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, RECT *, int *))(*(_QWORD *)v11 + 40LL))(v11, &v14, &v13);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x303,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v12);
  }
  v4 = CBaseTrayFlyoutExperienceManager::RecalculateClipRect((__int64)this, &v14, v13);
  if ( v4 < 0 )
  {
    v5 = 773LL;
    goto LABEL_6;
  }
  return 0LL;
}
