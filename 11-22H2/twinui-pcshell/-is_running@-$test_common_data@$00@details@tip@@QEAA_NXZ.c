/*
 * XREFs of ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18004039C
 * Callers:
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 * Callees:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800955C8 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

bool __fastcall tip::details::test_common_data<1>::is_running(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // bl
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-40h] BYREF
  __int128 v7; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-28h]
  __int128 v9; // [rsp+48h] [rbp-18h]

  wil::EnterCriticalSection(&lpCriticalSection, a1 + 16);
  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 && (*(_DWORD *)(a1 + 56) & 0x100) == 0 )
  {
    v3 = *(unsigned int *)(a1 + 160);
    v7 = 0LL;
    *(_OWORD *)pv = 0LL;
    v9 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, LPCRITICAL_SECTION))TestQueryData)(
                         v2,
                         0LL,
                         v3,
                         &v7,
                         lpCriticalSection) )
    {
      tip::details::test_common_data<1>::update_from_test_info(a1, &v7);
      CoTaskMemFree(pv[1]);
      v4 = (*(_DWORD *)(a1 + 56) & 0x100) == 0;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v4;
    }
    CoTaskMemFree(pv[1]);
    pv[1] = 0LL;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0;
}
