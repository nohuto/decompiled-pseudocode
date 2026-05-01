/*
 * XREFs of ??$?4V_lambda_f738020f23fed28304a4e796d0cb8ba3_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_f738020f23fed28304a4e796d0cb8ba3_@@@Z @ 0x1801F2758
 * Callers:
 *     ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1804A2CBC (--$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewList.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_f738020f23fed28304a4e796d0cb8ba3_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_f738020f23fed28304a4e796d0cb8ba3_@@@Z @ 0x1801F2794 (--0-$__func@V_lambda_f738020f23fed28304a4e796d0cb8ba3_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_f738020f23fed28304a4e796d0cb8ba3_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_f738020f23fed28304a4e796d0cb8ba3_,long (unsigned long)>::__func<_lambda_f738020f23fed28304a4e796d0cb8ba3_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
