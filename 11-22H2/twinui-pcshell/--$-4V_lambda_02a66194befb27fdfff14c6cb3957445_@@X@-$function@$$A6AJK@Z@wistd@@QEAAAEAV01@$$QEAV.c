/*
 * XREFs of ??$?4V_lambda_02a66194befb27fdfff14c6cb3957445_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_02a66194befb27fdfff14c6cb3957445_@@@Z @ 0x1801D80C8
 * Callers:
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180189420 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_02a66194befb27fdfff14c6cb3957445_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_02a66194befb27fdfff14c6cb3957445_@@@Z @ 0x1801D880C (--0-$__func@V_lambda_02a66194befb27fdfff14c6cb3957445_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_02a66194befb27fdfff14c6cb3957445_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_02a66194befb27fdfff14c6cb3957445_,long (unsigned long)>::__func<_lambda_02a66194befb27fdfff14c6cb3957445_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
