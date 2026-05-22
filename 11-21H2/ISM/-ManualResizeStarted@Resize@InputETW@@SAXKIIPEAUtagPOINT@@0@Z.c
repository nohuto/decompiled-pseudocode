/*
 * XREFs of ?ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180145E14
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x1801471F0 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180143F14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall InputETW::Resize::ManualResizeStarted(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  union _RTL_RUN_ONCE *v8; // r14
  __int64 v9; // r9
  __int64 v10; // r8
  WINBOOL fPending; // [rsp+68h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-9h] BYREF
  LPINIT_ONCE v13; // [rsp+78h] [rbp-1h] BYREF
  int v14; // [rsp+80h] [rbp+7h]
  __int64 y; // [rsp+88h] [rbp+Fh] BYREF
  __int64 x; // [rsp+90h] [rbp+17h] BYREF
  __int64 v17; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+B0h] [rbp+37h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = (union _RTL_RUN_ONCE *)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v13 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v14 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v13);
    }
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*(_BYTE *)(v10 + 16) & 1) != 0
      && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
    {
      v19 = v6;
      v20 = v7;
      v13 = v8;
      y = a5->y;
      x = a5->x;
      v17 = a4->y;
      v18 = a4->x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v10,
        byte_180205251,
        v10,
        v9,
        (__int64)&v13,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&x,
        (__int64)&y);
    }
  }
}
