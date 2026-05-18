/*
 * XREFs of ??R?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@QEBAXPEAVITweenable@Tweening@Utils@Spectre@@@Z @ 0x180091FA0
 * Callers:
 *     ??$?4V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@$0A@@?$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@U?$default_delete@V?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@@std@@@1@@Z @ 0x18009162C (--$-4V-$TweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectr.c)
 *     ??1?$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180091ED0 (--1-$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U-$default_delete@VITweenable@Tweening@Utils.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<Spectre::Utils::Tweening::ITweenable>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
