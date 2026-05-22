/*
 * XREFs of ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801E6298
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E7E80 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z @ 0x1801E78EC (-MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,float &,float &,float &,float &,float &,float &,long &,long &,int &,long &,long &,float &,float &>(
        unsigned int *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        int *a8,
        int *a9,
        int *a10,
        int *a11,
        int *a12,
        float *a13,
        float *a14)
{
  WINBOOL fPending; // [rsp+80h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v20; // [rsp+90h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp-10h]

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v20 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v21 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v20);
      }
    }
    ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
      (ISMTracing *)(unsigned int)*a8,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14);
  }
}
