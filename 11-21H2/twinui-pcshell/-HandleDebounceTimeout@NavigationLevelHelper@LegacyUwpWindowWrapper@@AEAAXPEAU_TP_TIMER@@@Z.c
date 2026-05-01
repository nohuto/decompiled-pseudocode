/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x18040E2B8
 * Callers:
 *     _lambda_e4ee1dff541502e2bea9ce73f0f3044a_::_lambda_invoker_cdecl_ @ 0x18040E270 (_lambda_e4ee1dff541502e2bea9ce73f0f3044a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x1804077F0 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ @ 0x18040E284 (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804157EC (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 */

void __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyUwpWindowWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  int v4; // edx
  struct _FILETIME *v5; // rdx
  struct _TP_TIMER *v6; // rcx
  unsigned int NavigationLevel; // eax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  RTL_SRWLOCK *v9; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-48h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this - 44) + 208LL))(*((_QWORD *)this - 44), &v9);
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)this + 1)) )
    goto LABEL_10;
  v10[0] = _mm_load_si128((const __m128i *)&_xmm);
  v10[1] = _mm_load_si128((const __m128i *)&_xmm);
  v10[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *((_DWORD *)v10 + 2 * *(unsigned int *)this + 1);
  if ( *((_DWORD *)this + 1) == 1 )
    goto LABEL_6;
  if ( *((_DWORD *)this + 1) != 2 )
    goto LABEL_8;
  if ( v4 >= 1 )
  {
LABEL_6:
    *((_DWORD *)this + 1) = v4;
    v6 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
    v5 = 0LL;
  }
  else
  {
    *((_DWORD *)this + 1) = 1;
    v8 = -10000LL * (unsigned int)LegacyUwpWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    v5 = (struct _FILETIME *)&v8;
    v6 = a2;
  }
  SetThreadpoolTimer(v6, v5, 0, 0);
LABEL_8:
  if ( *((_DWORD *)this - 70) )
  {
    NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    UwpWindowWrapperBase::NavigateInternal((char *)this - 624, NavigationLevel);
  }
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
}
