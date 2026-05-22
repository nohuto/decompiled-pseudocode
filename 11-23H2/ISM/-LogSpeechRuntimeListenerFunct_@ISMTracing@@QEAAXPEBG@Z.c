/*
 * XREFs of ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800D3458
 * Callers:
 *     ??$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z @ 0x1800D2F18 (--$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY0BJ@$$CBG@ISMTracing@@SAXAEAY0BJ@$$CBG@Z @ 0x1800D2FC4 (--$LogSpeechRuntimeListenerFunct@AEAY0BJ@$$CBG@ISMTracing@@SAXAEAY0BJ@$$CBG@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY0BK@$$CBG@ISMTracing@@SAXAEAY0BK@$$CBG@Z @ 0x1800D3070 (--$LogSpeechRuntimeListenerFunct@AEAY0BK@$$CBG@ISMTracing@@SAXAEAY0BK@$$CBG@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C10F8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800C5960 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 */

void __fastcall ISMTracing::LogSpeechRuntimeListenerFunct_(ISMTracing *this, const unsigned __int16 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  ISMTracing *fPending; // [rsp+50h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  fPending = this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v6 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v7 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v6);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      v10 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned __int8 *)dword_180223376,
        v3,
        v4,
        (const WCHAR **)&v10);
    }
  }
}
