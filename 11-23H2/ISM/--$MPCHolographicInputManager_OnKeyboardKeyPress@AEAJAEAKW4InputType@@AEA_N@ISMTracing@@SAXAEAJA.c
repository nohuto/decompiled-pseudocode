/*
 * XREFs of ??$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJAEAK$$QEAW4InputType@@AEA_N@Z @ 0x1800B3090
 * Callers:
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800B6BBC (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z @ 0x1800B5F4C (-MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress<long &,unsigned long &,enum InputType,bool &>(
        int *a1,
        unsigned int *a2,
        unsigned int *a3,
        bool *a4)
{
  ISMTracing *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp-10h]

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v11 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v12 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v11);
      }
    }
    ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress_(v8, *a1, *a2, *a3, *a4);
  }
}
