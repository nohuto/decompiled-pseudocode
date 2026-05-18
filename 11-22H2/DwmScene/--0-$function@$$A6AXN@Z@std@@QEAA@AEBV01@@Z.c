/*
 * XREFs of ??0?$function@$$A6AXN@Z@std@@QEAA@AEBV01@@Z @ 0x180091C4C
 * Callers:
 *     ??$?0M@Tween@Tweening@Utils@Spectre@@AEAA@U?$TweenOptions@M@123@V?$unique_ptr@VICurve@Tweening@Utils@Spectre@@U?$default_delete@VICurve@Tweening@Utils@Spectre@@@std@@@std@@@Z @ 0x180091458 (--$-0M@Tween@Tweening@Utils@Spectre@@AEAA@U-$TweenOptions@M@123@V-$unique_ptr@VICurve@Tweening@U.c)
 *     ??0?$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBU0123@@Z @ 0x180091B88 (--0-$TweenOptions@M@Tweening@Utils@Spectre@@QEAA@AEBU0123@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (double)>::function<void (double)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
