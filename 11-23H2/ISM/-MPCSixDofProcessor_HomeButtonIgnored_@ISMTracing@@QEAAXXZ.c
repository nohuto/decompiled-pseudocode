/*
 * XREFs of ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801DE6D0
 * Callers:
 *     ??$MPCSixDofProcessor_HomeButtonIgnored@$$V@ISMTracing@@SAXXZ @ 0x1801DB304 (--$MPCSixDofProcessor_HomeButtonIgnored@$$V@ISMTracing@@SAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(ISMTracing *this)
{
  __int64 v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  __int64 v4; // [rsp+40h] [rbp+7h] BYREF
  int v5; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+37h]
  int v8; // [rsp+78h] [rbp+3Fh]
  int v9; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v4 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v4);
  }
  v1 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v1 > 4u
    && (*(_QWORD *)(v1 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x400000000001LL) == *(_QWORD *)(v1 + 24) )
  {
    v9 = 0;
    v7 = &v4;
    v4 = 50331648LL;
    v8 = 8;
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_180229130, 0LL, 0LL, 3u, &v6);
  }
}
