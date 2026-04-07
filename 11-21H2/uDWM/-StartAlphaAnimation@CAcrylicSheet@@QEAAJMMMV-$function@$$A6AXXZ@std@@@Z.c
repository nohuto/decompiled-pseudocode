/*
 * XREFs of ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x18009ABA0
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800FF930 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180099A78 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180099AB4 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x18009AA6C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::StartAlphaAnimation(CAcrylicSheet *this, float a2, float a3, float a4, __int64 a5)
{
  char *v6; // rdi
  int started; // eax
  unsigned int v8; // ebx

  v6 = (char *)this + 360;
  std::function<void (void)>::operator=((__int64)this + 360, a5);
  started = CAcrylicSheet::StartAlphaAnimation(this, a2, a3, a4);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x30Fu);
    std::_Func_class<void,>::operator()((__int64)v6);
    std::_Func_class<void,>::_Tidy(v6);
  }
  std::_Func_class<void,>::_Tidy(a5);
  return v8;
}
