/*
 * XREFs of ??$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@Z @ 0x18010C5A0
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18010D000 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18010D680 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 */

void __fastcall ISMTracing::MPCTarget_DeliverInput<MPCTarget *,LegacyInputInfo * &,long &>(
        struct IMPCTarget **a1,
        struct LegacyInputInfo **a2,
        int *a3)
{
  ISMTracing *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v8);
      }
    }
    ISMTracing::MPCTarget_DeliverInput_(v6, *a1, *a2, *a3);
  }
}
