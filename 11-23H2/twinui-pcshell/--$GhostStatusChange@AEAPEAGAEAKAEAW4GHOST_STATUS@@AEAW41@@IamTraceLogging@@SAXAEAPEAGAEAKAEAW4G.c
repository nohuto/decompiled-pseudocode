/*
 * XREFs of ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x180022128
 * Callers:
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x1800220C0 (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

LPVOID __fastcall IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
        const WCHAR **a1,
        int *a2,
        int *a3,
        int *a4)
{
  LPVOID result; // rax
  _DWORD *v9; // r10
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+3Ch] [rbp-55h] BYREF
  int v15; // [rsp+40h] [rbp-51h] BYREF
  int v16; // [rsp+44h] [rbp-4Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-49h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+50h] [rbp-41h] BYREF
  int v19; // [rsp+58h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+68h] [rbp-29h] BYREF
  const WCHAR *v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+94h] [rbp+3h]
  int *v24; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  int *v26; // [rsp+A8h] [rbp+17h]
  __int64 v27; // [rsp+B0h] [rbp+1Fh]
  int *v28; // [rsp+B8h] [rbp+27h]
  __int64 v29; // [rsp+C0h] [rbp+2Fh]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v18 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v18);
  }
  result = Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    v10 = *a1;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v28 = &v14;
    v26 = &v15;
    v24 = &v16;
    v29 = 4LL;
    v27 = 4LL;
    v25 = 4LL;
    if ( v10 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v10 = &LocaleName;
      v12 = 2;
    }
    v21 = v10;
    v22 = v12;
    v23 = 0;
    return (LPVOID)tlgWriteTransfer_EventWriteTransfer((int)v9, (int)&dword_180845475, 0, 0, 6u, &v20);
  }
  return result;
}
