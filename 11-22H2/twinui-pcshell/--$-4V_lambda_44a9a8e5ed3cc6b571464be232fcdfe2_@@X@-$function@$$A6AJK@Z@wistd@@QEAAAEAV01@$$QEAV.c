/*
 * XREFs of ??$?4V_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_@@@Z @ 0x18020DA10
 * Callers:
 *     ??$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVTaskViewViewChangeNotificationProxy@@@SmartCookie@@QEAAJPEAUIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@ZP81@EAAJK@ZPEAVTaskViewViewChangeNotificationProxy@@@Z @ 0x180085B74 (--$Register@UIMultitaskingViewVisibilityService@@P81@EAAJPEAUIMultitaskingViewVisibilityNotifica.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_@@@Z @ 0x18020DBF0 (--0-$__func@V_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_,long (unsigned long)>::__func<_lambda_44a9a8e5ed3cc6b571464be232fcdfe2_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
