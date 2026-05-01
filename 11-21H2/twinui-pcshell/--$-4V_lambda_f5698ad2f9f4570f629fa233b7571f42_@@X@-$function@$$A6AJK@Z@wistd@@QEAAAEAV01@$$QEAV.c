/*
 * XREFs of ??$?4V_lambda_f5698ad2f9f4570f629fa233b7571f42_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_f5698ad2f9f4570f629fa233b7571f42_@@@Z @ 0x18010DB9C
 * Callers:
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x18010CA7C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_18010CA7C.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_f5698ad2f9f4570f629fa233b7571f42_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_a5f94e402445cab957f9d0f02bc81a26_,long (unsigned long)>::`vftable';
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
