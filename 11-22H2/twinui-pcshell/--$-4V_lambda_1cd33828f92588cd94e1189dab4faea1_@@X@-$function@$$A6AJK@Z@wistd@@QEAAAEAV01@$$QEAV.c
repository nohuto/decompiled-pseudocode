/*
 * XREFs of ??$?4V_lambda_1cd33828f92588cd94e1189dab4faea1_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_1cd33828f92588cd94e1189dab4faea1_@@@Z @ 0x180220390
 * Callers:
 *     ??$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@ZPEAU2@W43@@SmartCookie@@QEAAJPEAUIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@Z12@Z @ 0x18065D160 (--$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_1cd33828f92588cd94e1189dab4faea1_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_1cd33828f92588cd94e1189dab4faea1_@@@Z @ 0x180221458 (--0-$__func@V_lambda_1cd33828f92588cd94e1189dab4faea1_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_1cd33828f92588cd94e1189dab4faea1_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_1cd33828f92588cd94e1189dab4faea1_,long (unsigned long)>::__func<_lambda_1cd33828f92588cd94e1189dab4faea1_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
