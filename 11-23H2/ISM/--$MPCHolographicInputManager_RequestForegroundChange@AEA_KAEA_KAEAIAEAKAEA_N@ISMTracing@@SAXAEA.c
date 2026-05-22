/*
 * XREFs of ??$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA_K0AEAIAEAKAEA_N@Z @ 0x1800B3434
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800B8060 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800B6758 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange<unsigned __int64 &,unsigned __int64 &,unsigned int &,unsigned long &,bool &>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5)
{
  ISMTracing *v9; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v12 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v13 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
      }
    }
    LOBYTE(v9) = *a5;
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v9, *a1, *a2, *a3, *a4, *a5);
  }
}
