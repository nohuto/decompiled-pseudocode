/*
 * XREFs of ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801DB3A4
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801DF9F4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z @ 0x1801DEB54 (-MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
        unsigned int *a1,
        bool *a2,
        bool *a3,
        bool *a4,
        bool *a5,
        unsigned int *a6,
        bool *a7,
        float *a8,
        bool *a9)
{
  ISMTracing *v13; // rcx
  WINBOOL fPending; // [rsp+50h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v16; // [rsp+60h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp-10h]

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v16 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v17 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v16);
      }
    }
    v13 = (ISMTracing *)*a6;
    LOBYTE(v13) = *a5;
    ISMTracing::MPCSixDofProcessor_HomeEvent_(v13, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9);
  }
}
