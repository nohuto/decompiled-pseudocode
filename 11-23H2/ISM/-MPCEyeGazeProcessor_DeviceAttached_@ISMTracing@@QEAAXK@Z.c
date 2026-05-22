/*
 * XREFs of ?MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z @ 0x1800C7568
 * Callers:
 *     ??$MPCEyeGazeProcessor_DeviceAttached@AEAK@ISMTracing@@SAXAEAK@Z @ 0x1800C4398 (--$MPCEyeGazeProcessor_DeviceAttached@AEAK@ISMTracing@@SAXAEAK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCEyeGazeProcessor_DeviceAttached_(ISMTracing *this, int a2)
{
  _DWORD *v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  int v5; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  union _RTL_RUN_ONCE *v7; // [rsp+40h] [rbp+7h] BYREF
  int v8; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp+17h] BYREF
  int *v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v7 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v8 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v7);
  }
  v3 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v3 > 4u )
  {
    v12 = 0;
    v10 = &v5;
    v5 = a2;
    v11 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180222E08, 0LL, 0LL, 3u, &v9);
  }
}
