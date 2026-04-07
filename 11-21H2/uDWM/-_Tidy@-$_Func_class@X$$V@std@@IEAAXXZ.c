/*
 * XREFs of ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC
 * Callers:
 *     ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x180043484 (--1-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     std::function_void___cdecl(void)_::operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_ @ 0x180099568 (std--function_void___cdecl(void)_--operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_.c)
 *     ??1?$function@$$A6AXXZ@std@@QEAA@XZ @ 0x1800998E4 (--1-$function@$$A6AXXZ@std@@QEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x180099970 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180099A78 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z.c)
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x18009A810 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x18009ABA0 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z @ 0x18009B0A8 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18009BC08 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??1?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800F35F0 (--1-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800FF4CC (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FF77C (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
