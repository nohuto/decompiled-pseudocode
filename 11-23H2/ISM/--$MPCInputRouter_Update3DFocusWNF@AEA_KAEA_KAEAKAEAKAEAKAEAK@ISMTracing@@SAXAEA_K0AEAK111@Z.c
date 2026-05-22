/*
 * XREFs of ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x180107C20
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x18010B1FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x18010A7D8 (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Update3DFocusWNF<unsigned __int64 &,unsigned __int64 &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  WINBOOL fPending; // [rsp+40h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp-10h]

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
    ISMTracing::MPCInputRouter_Update3DFocusWNF_((ISMTracing *)*a5, *a1, *a2, *a3, *a4, *a5, *a6);
  }
}
