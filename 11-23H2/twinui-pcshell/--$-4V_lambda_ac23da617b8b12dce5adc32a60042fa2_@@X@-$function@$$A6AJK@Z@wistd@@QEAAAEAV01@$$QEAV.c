/*
 * XREFs of ??$?4V_lambda_ac23da617b8b12dce5adc32a60042fa2_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_ac23da617b8b12dce5adc32a60042fa2_@@@Z @ 0x180211D90
 * Callers:
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1801B4D00 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PE.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_ac23da617b8b12dce5adc32a60042fa2_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_ac23da617b8b12dce5adc32a60042fa2_@@@Z @ 0x180211E3C (--0-$__func@V_lambda_ac23da617b8b12dce5adc32a60042fa2_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_ac23da617b8b12dce5adc32a60042fa2_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_ac23da617b8b12dce5adc32a60042fa2_,long (unsigned long)>::__func<_lambda_ac23da617b8b12dce5adc32a60042fa2_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
