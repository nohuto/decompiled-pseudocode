/*
 * XREFs of ??$?4V_lambda_b3c9405f27e2988e1399692f81234ef2_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_b3c9405f27e2988e1399692f81234ef2_@@@Z @ 0x18010D580
 * Callers:
 *     ??$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18010BBD0 (--$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZP.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_b3c9405f27e2988e1399692f81234ef2_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_650b3632c44f719e13e9fa4664ad231a_,long (unsigned long)>::`vftable';
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
