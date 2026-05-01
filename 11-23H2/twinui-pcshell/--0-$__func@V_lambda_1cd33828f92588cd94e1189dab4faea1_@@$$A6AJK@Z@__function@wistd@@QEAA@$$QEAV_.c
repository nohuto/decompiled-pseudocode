/*
 * XREFs of ??0?$__func@V_lambda_1cd33828f92588cd94e1189dab4faea1_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_1cd33828f92588cd94e1189dab4faea1_@@@Z @ 0x180221458
 * Callers:
 *     ??$?4V_lambda_1cd33828f92588cd94e1189dab4faea1_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_1cd33828f92588cd94e1189dab4faea1_@@@Z @ 0x180220390 (--$-4V_lambda_1cd33828f92588cd94e1189dab4faea1_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ?__move@?$__func@V_lambda_1cd33828f92588cd94e1189dab4faea1_@@$$A6AJK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x180222FA0 (-__move@-$__func@V_lambda_1cd33828f92588cd94e1189dab4faea1_@@$$A6AJK@Z@__function@wistd@@UEAAXPE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_1cd33828f92588cd94e1189dab4faea1_,long (unsigned long)>::__func<_lambda_1cd33828f92588cd94e1189dab4faea1_,long (unsigned long)>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &wistd::__function::__func<_lambda_1cd33828f92588cd94e1189dab4faea1_,long (unsigned long)>::`vftable';
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
