/*
 * XREFs of ??$?4V_lambda_eac19d0616901c4492e28baf75c5aa6f_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_eac19d0616901c4492e28baf75c5aa6f_@@@Z @ 0x18028DDC8
 * Callers:
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVShellHookRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVShellHookRegistration@details@AppViewEventHelpers@@@Z @ 0x18078DAA8 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_eac19d0616901c4492e28baf75c5aa6f_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_eac19d0616901c4492e28baf75c5aa6f_@@@Z @ 0x18028DEFC (--0-$__func@V_lambda_eac19d0616901c4492e28baf75c5aa6f_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_eac19d0616901c4492e28baf75c5aa6f_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_eac19d0616901c4492e28baf75c5aa6f_,long (unsigned long)>::__func<_lambda_eac19d0616901c4492e28baf75c5aa6f_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
