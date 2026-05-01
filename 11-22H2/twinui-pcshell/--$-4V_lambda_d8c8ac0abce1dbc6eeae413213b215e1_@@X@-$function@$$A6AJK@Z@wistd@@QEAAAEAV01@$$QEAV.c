/*
 * XREFs of ??$?4V_lambda_d8c8ac0abce1dbc6eeae413213b215e1_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_d8c8ac0abce1dbc6eeae413213b215e1_@@@Z @ 0x180212070
 * Callers:
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1805A6D50 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_1805A6D50.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_d8c8ac0abce1dbc6eeae413213b215e1_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_d8c8ac0abce1dbc6eeae413213b215e1_@@@Z @ 0x1802121D4 (--0-$__func@V_lambda_d8c8ac0abce1dbc6eeae413213b215e1_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_d8c8ac0abce1dbc6eeae413213b215e1_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_d8c8ac0abce1dbc6eeae413213b215e1_,long (unsigned long)>::__func<_lambda_d8c8ac0abce1dbc6eeae413213b215e1_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
