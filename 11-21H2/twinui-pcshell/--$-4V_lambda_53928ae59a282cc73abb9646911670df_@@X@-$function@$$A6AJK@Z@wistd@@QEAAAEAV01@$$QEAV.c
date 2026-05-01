/*
 * XREFs of ??$?4V_lambda_53928ae59a282cc73abb9646911670df_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_53928ae59a282cc73abb9646911670df_@@@Z @ 0x18004E990
 * Callers:
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@Z @ 0x18004E8EC (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_53928ae59a282cc73abb9646911670df_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=();
  a1[1] = &wistd::__function::__func<_lambda_53928ae59a282cc73abb9646911670df_,long (unsigned long)>::`vftable';
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
