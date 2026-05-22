/*
 * XREFs of ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800B3270
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x1800B3140 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800B25FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800B2BE8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 */

void __fastcall InputETW::InputStateManager::OnInputReport(struct InputInfo *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp-20h] BYREF
  __int64 v6; // [rsp+48h] [rbp-18h] BYREF
  LPINIT_ONCE v7; // [rsp+50h] [rbp-10h] BYREF
  int v8; // [rsp+58h] [rbp-8h]
  WINBOOL fPending; // [rsp+88h] [rbp+28h] BYREF
  int v10; // [rsp+90h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+38h] BYREF

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v7 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v8 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v7);
    }
    v4 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v5 = *((_QWORD *)a1 + 2);
      v10 = *((_DWORD *)a1 + 2);
      v6 = *(int *)a1;
      v7 = (LPINIT_ONCE)*((unsigned int *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        byte_1802015F7,
        v2,
        v3,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v10,
        (__int64)&v5);
    }
  }
}
