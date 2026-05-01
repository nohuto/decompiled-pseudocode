/*
 * XREFs of ??$?4V_lambda_477208fe1c341f17f4dd414957801e84_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_477208fe1c341f17f4dd414957801e84_@@@Z @ 0x180590328
 * Callers:
 *     ??$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@ZPEAU2@W43@@SmartCookie@@QEAAJPEAUIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@Z12@Z @ 0x180590788 (--$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_477208fe1c341f17f4dd414957801e84_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_9a539e9523d065aa25e11c9d8bc7d19a_,long (unsigned long)>::`vftable';
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
