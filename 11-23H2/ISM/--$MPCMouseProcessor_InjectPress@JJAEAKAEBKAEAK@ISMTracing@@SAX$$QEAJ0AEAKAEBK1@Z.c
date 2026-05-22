/*
 * XREFs of ??$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x1801E60B0
 * Callers:
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801E6824 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801E7684 (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_InjectPress<long,long,unsigned long &,unsigned long const &,unsigned long &>(
        int *a1,
        int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
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
    ISMTracing::MPCMouseProcessor_InjectPress_((ISMTracing *)*a5, *a1, *a2, *a3, *a4, *a5);
  }
}
