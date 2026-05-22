/*
 * XREFs of ??$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AEA_KAEAI3@Z @ 0x1800ADD90
 * Callers:
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800B17E0 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x1800AF9A8 (-MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGestureReadyChanged<bool &,unsigned long &,unsigned long &,unsigned __int64 &,unsigned int &,unsigned int &>(
        bool *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
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
    ISMTracing::MPCManager_SendHomeGestureReadyChanged_((ISMTracing *)*a5, *a1, *a2, *a3, *a4, *a5, *a6);
  }
}
