/*
 * XREFs of ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801465C0
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801475AC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180143F14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall InputETW::Resize::ResizeCancelled(
        unsigned int a1,
        __int64 a2,
        WINBOOL a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  union _RTL_RUN_ONCE *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  LPVOID Context; // [rsp+68h] [rbp-1h] BYREF
  LPINIT_ONCE v10; // [rsp+70h] [rbp+7h] BYREF
  int v11; // [rsp+78h] [rbp+Fh]
  __int64 y; // [rsp+80h] [rbp+17h] BYREF
  __int64 x; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+27h] BYREF
  __int64 v15; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+3Fh] BYREF
  WINBOOL fPending; // [rsp+D8h] [rbp+6Fh] BYREF

  fPending = a3;
  v6 = (union _RTL_RUN_ONCE *)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v10 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v11 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v10);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v16 = 0LL;
      v17 = 0LL;
      v10 = v6;
      y = a5->y;
      x = a5->x;
      v14 = a4->y;
      v15 = a4->x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_1802050A3,
        v8,
        v7,
        (__int64)&v10,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&x,
        (__int64)&y);
    }
  }
}
