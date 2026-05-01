/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EFAF4
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804E1970 (-v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@S.c)
 * Callees:
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180175258 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804E162C (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1804E27B0 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x1804E282C (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ @ 0x1804EF974 (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ.c)
 */

__int64 __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(__int64 a1)
{
  int NavigationLevel; // r14d
  int Visibility; // ebp
  __m128i si128; // xmm1
  __int64 v5; // r9
  int v6; // edi
  int v7; // edx
  int v8; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int DebounceDurationInMilliseconds; // eax
  struct _TP_TIMER *v11; // rcx
  struct _TP_TIMER *v12; // rcx
  __int64 result; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v15[3]; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)a1 = v5;
  v15[0] = _mm_load_si128((const __m128i *)&_xmm);
  v15[2] = _mm_load_si128((const __m128i *)&_xmm);
  v15[1] = si128;
  v6 = *((_DWORD *)v15 + 2 * v5 + 1);
  v8 = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  if ( v7 > v6 )
  {
    if ( *(_DWORD *)(a1 + 4) > v7 )
      goto LABEL_13;
    if ( *(_QWORD *)(a1 + 8)
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)lambda_e4ee1dff541502e2bea9ce73f0f3044a_::_lambda_invoker_cdecl_,
                              (PVOID)a1,
                              0LL),
          (*(_QWORD *)(a1 + 8) = ThreadpoolTimer) != 0LL) )
    {
      DebounceDurationInMilliseconds = LegacyUwpWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds((LegacyUwpWindowWrapper::NavigationLevelHelper *)a1);
      v11 = *(struct _TP_TIMER **)(a1 + 8);
      pftDueTime = (struct _FILETIME)(-10000LL * DebounceDurationInMilliseconds);
      SetThreadpoolTimer(v11, &pftDueTime, 0, 0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacyuwpwindowwrapper.navigationlevelhelper.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  if ( v7 < v6 && *(_DWORD *)(a1 + 4) <= v6 )
  {
    v12 = *(struct _TP_TIMER **)(a1 + 8);
    if ( v12 && IsThreadpoolTimerSet(v12) )
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 4) = v6;
  }
LABEL_13:
  if ( Visibility != v8 )
    LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 648, v8);
  result = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  if ( *(_DWORD *)(a1 - 288) )
  {
    if ( (_DWORD)result != NavigationLevel )
      return UwpWindowWrapperBase::NavigateInternal(a1 - 640, result);
  }
  return result;
}
