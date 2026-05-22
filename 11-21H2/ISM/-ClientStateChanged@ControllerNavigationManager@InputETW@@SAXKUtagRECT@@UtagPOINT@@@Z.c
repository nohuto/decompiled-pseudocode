/*
 * XREFs of ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x180171620
 * Callers:
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180171524 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180143F14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall InputETW::ControllerNavigationManager::ClientStateChanged(
        unsigned int a1,
        struct tagRECT *a2,
        struct tagPOINT a3)
{
  LONG x; // ebx
  union _RTL_RUN_ONCE *v4; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  LPVOID Context; // [rsp+68h] [rbp-9h] BYREF
  LPINIT_ONCE v10; // [rsp+70h] [rbp-1h] BYREF
  int v11; // [rsp+78h] [rbp+7h]
  __int64 v12; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h] BYREF
  __int64 right; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 bottom; // [rsp+98h] [rbp+27h] BYREF
  __int64 left; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 top; // [rsp+A8h] [rbp+37h] BYREF
  LONG y; // [rsp+ECh] [rbp+7Bh]
  WINBOOL fPending; // [rsp+F0h] [rbp+7Fh] BYREF

  y = a3.y;
  x = a3.x;
  v4 = (union _RTL_RUN_ONCE *)a1;
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
      v12 = y;
      v13 = x;
      right = a2->right;
      bottom = a2->bottom;
      left = a2->left;
      top = a2->top;
      v10 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_180205E0D,
        v6,
        v7,
        (__int64)&v10,
        (__int64)&top,
        (__int64)&left,
        (__int64)&bottom,
        (__int64)&right,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
