/*
 * XREFs of ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800E18BC
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800E090C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::Win32kInterop::ReceivedInputMessage(unsigned int a1)
{
  union _RTL_RUN_ONCE *v1; // rbx
  __int64 v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  LPINIT_ONCE v5; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp+17h] BYREF
  LPINIT_ONCE *v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+7Ch] [rbp+43h]

  v1 = (union _RTL_RUN_ONCE *)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v5 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v6 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v5);
    }
    v2 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
    {
      v10 = 0;
      v8 = &v5;
      v5 = v1;
      v9 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180203410, 0LL, 0LL, 3u, &v7);
    }
  }
}
