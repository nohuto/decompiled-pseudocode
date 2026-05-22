/*
 * XREFs of ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x1801DB4D4
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801E155C (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z @ 0x1801DE7F0 (-MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,unsigned long>(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10,
        float *a11,
        float *a12,
        float *a13,
        float *a14,
        float *a15,
        float *a16,
        float *a17,
        float *a18,
        float *a19,
        unsigned int *a20)
{
  WINBOOL fPending; // [rsp+B0h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v26; // [rsp+C0h] [rbp-18h] BYREF
  int v27; // [rsp+C8h] [rbp-10h]

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v26 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v27 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v26);
      }
    }
    ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged_(
      (ISMTracing *)*a20,
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
      *a14,
      *a15,
      *a16,
      *a17,
      *a18,
      *a19,
      *a20);
  }
}
