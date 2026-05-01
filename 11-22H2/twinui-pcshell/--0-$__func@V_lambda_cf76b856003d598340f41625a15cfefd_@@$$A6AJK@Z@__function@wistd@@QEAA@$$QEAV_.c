/*
 * XREFs of ??0?$__func@V_lambda_cf76b856003d598340f41625a15cfefd_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_cf76b856003d598340f41625a15cfefd_@@@Z @ 0x180213250
 * Callers:
 *     ??$?4V_lambda_cf76b856003d598340f41625a15cfefd_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_cf76b856003d598340f41625a15cfefd_@@@Z @ 0x180213214 (--$-4V_lambda_cf76b856003d598340f41625a15cfefd_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ?__move@?$__func@V_lambda_cf76b856003d598340f41625a15cfefd_@@$$A6AJK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1802132E0 (-__move@-$__func@V_lambda_cf76b856003d598340f41625a15cfefd_@@$$A6AJK@Z@__function@wistd@@UEAAXPE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_cf76b856003d598340f41625a15cfefd_,long (unsigned long)>::__func<_lambda_cf76b856003d598340f41625a15cfefd_,long (unsigned long)>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &wistd::__function::__func<_lambda_cf76b856003d598340f41625a15cfefd_,long (unsigned long)>::`vftable';
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
