/*
 * XREFs of _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_ @ 0x1801AF3B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AF568 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___--_CTask.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18045E318 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AD6C (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_(
        __int64 *a1,
        __int64 a2)
{
  std::_Func_class<void,>::_Tidy((__int64)(a1 + 42), a2);
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)(a1 + 2));
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
