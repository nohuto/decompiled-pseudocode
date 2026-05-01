/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_aad8f4d5432b56bea79cde5dffa37ffc__void_ @ 0x1800B4AE8
 * Callers:
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B525C (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_aad8f4d5432b56bea79cde5dffa37ffc__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  a1[14] = 0LL;
  a1[1] = &off_1806267C0;
  a1[2] = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[3] = v3;
  a1[4] = a2[2];
  a1[14] = a1 + 1;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(a2 + 1);
  return a1;
}
