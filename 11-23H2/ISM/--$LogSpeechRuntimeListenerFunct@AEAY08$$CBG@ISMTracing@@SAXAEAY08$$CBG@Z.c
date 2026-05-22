/*
 * XREFs of ??$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z @ 0x1800D2F18
 * Callers:
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D3594 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800D3458 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 */

void __fastcall ISMTracing::LogSpeechRuntimeListenerFunct<unsigned short const (&)[9]>(__int64 a1)
{
  ISMTracing *v1; // rcx
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  fPending = a1;
  if ( ISMTracing::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context) )
    {
      if ( (_DWORD)fPending )
      {
        v2 = &`ISMTracing::Instance'::`2'::wrapper;
        Context = &qword_180268B30;
        qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
        qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v3 = 0;
        wil::details::static_lazy<InputETW>::Completer::~Completer(&v2);
      }
    }
    ISMTracing::LogSpeechRuntimeListenerFunct_(v1, L"OnSelect");
  }
}
