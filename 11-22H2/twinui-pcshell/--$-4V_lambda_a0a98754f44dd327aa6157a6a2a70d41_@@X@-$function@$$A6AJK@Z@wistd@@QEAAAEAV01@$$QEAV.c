/*
 * XREFs of ??$?4V_lambda_a0a98754f44dd327aa6157a6a2a70d41_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_a0a98754f44dd327aa6157a6a2a70d41_@@@Z @ 0x1801DBB0C
 * Callers:
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@Z @ 0x1801B4A84 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCAction.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180172A84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??0?$__func@V_lambda_a0a98754f44dd327aa6157a6a2a70d41_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_a0a98754f44dd327aa6157a6a2a70d41_@@@Z @ 0x1801DBC6C (--0-$__func@V_lambda_a0a98754f44dd327aa6157a6a2a70d41_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=<_lambda_a0a98754f44dd327aa6157a6a2a70d41_,void>(
        __int64 a1,
        __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_a0a98754f44dd327aa6157a6a2a70d41_,long (unsigned long)>::__func<_lambda_a0a98754f44dd327aa6157a6a2a70d41_,long (unsigned long)>(
                            a1 + 8,
                            a2);
  return a1;
}
