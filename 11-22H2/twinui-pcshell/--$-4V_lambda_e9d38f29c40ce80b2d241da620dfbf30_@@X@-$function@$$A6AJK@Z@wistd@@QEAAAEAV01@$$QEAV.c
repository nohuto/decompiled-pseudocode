/*
 * XREFs of ??$?4V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@@Z @ 0x18020CDB8
 * Callers:
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopCollection@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopCollection@@@Z @ 0x1801B4168 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_1801B4168.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@@Z @ 0x18020CDF4 (--0-$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_e9d38f29c40ce80b2d241da620dfbf30_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_e9d38f29c40ce80b2d241da620dfbf30_,long (unsigned long)>::__func<_lambda_e9d38f29c40ce80b2d241da620dfbf30_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
