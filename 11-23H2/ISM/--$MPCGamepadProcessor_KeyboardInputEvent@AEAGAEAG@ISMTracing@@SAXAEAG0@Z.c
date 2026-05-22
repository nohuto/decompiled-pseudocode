/*
 * XREFs of ??$MPCGamepadProcessor_KeyboardInputEvent@AEAGAEAG@ISMTracing@@SAXAEAG0@Z @ 0x1801E2C60
 * Callers:
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801E5284 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z @ 0x1801E3C80 (-MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z.c)
 */

void __fastcall ISMTracing::MPCGamepadProcessor_KeyboardInputEvent<unsigned short &,unsigned short &>(
        unsigned __int16 *a1,
        unsigned __int16 *a2)
{
  ISMTracing *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( ISMTracing::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v5);
      }
    }
    ISMTracing::MPCGamepadProcessor_KeyboardInputEvent_(v4, *a1, *a2);
  }
}
