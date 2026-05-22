/*
 * XREFs of ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x1800C2748
 * Callers:
 *     ??$GestureRecognizer_GestureDetected@AEAY0BA@$$CBG@ISMTracing@@SAXAEAY0BA@$$CBG@Z @ 0x1800C0D90 (--$GestureRecognizer_GestureDetected@AEAY0BA@$$CBG@ISMTracing@@SAXAEAY0BA@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0M@$$CBG@ISMTracing@@SAXAEAY0M@$$CBG@Z @ 0x1800C0E3C (--$GestureRecognizer_GestureDetected@AEAY0M@$$CBG@ISMTracing@@SAXAEAY0M@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z @ 0x1800C0EEC (--$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C0F9C (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0P@$$CBG@ISMTracing@@SAXAEAY0P@$$CBG@Z @ 0x1800C104C (--$GestureRecognizer_GestureDetected@AEAY0P@$$CBG@ISMTracing@@SAXAEAY0P@$$CBG@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C10F8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall ISMTracing::GestureRecognizer_GestureDetected_(ISMTracing *this, const unsigned __int16 *a2)
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
  if ( ISMTracing::IsEnabled((char)this) )
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
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 5) != 0 && (*(_QWORD *)(v5 + 24) & 5LL) == *(_QWORD *)(v5 + 24) )
    {
      v10 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned __int8 *)dword_1802220F4,
        v3,
        v4,
        (const WCHAR **)&v10);
    }
  }
}
