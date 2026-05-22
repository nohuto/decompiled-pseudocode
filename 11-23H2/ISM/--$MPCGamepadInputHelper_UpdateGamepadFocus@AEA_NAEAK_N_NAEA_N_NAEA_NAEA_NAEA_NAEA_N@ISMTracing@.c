/*
 * XREFs of ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x1800A96F8
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800A9D58 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x1800A9A24 (-MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus<bool &,unsigned long &,bool,bool,bool &,bool,bool &,bool &,bool &,bool &>(
        const bool *a1,
        unsigned int *a2,
        const bool *a3,
        const bool *a4,
        bool *a5,
        bool *a6,
        bool *a7,
        bool *a8,
        bool *a9,
        bool *a10)
{
  ISMTracing *v14; // rcx
  WINBOOL fPending; // [rsp+60h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v17; // [rsp+70h] [rbp-18h] BYREF
  int v18; // [rsp+78h] [rbp-10h]

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v17 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v18 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v17);
      }
    }
    ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }
}
