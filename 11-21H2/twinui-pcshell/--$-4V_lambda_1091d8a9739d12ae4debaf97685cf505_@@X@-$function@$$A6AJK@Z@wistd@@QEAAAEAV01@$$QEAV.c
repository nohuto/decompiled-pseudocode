/*
 * XREFs of ??$?4V_lambda_1091d8a9739d12ae4debaf97685cf505_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_1091d8a9739d12ae4debaf97685cf505_@@@Z @ 0x1804EE754
 * Callers:
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804EED8C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1804EED8C.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_1091d8a9739d12ae4debaf97685cf505_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_15ac573ecf8e8aed4c20feb54acd6884_,long (unsigned long)>::`vftable';
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  result = a1;
  a1[14] = a1 + 1;
  return result;
}
