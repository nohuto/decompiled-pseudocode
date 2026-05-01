/*
 * XREFs of ??0?$__func@V_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@@Z @ 0x1801CF904
 * Callers:
 *     ??$?4V_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@@Z @ 0x1801CF87C (--$-4V_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ?__move@?$__func@V_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@$$A6AJK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1801CFA50 (-__move@-$__func@V_lambda_cc022b44ae595430bebd17a5a8a4a75a_@@$$A6AJK@Z@__function@wistd@@UEAAXPE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_cc022b44ae595430bebd17a5a8a4a75a_,long (unsigned long)>::__func<_lambda_cc022b44ae595430bebd17a5a8a4a75a_,long (unsigned long)>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &wistd::__function::__func<_lambda_cc022b44ae595430bebd17a5a8a4a75a_,long (unsigned long)>::`vftable';
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
