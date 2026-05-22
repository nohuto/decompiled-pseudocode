/*
 * XREFs of ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x1800AFCBC
 * Callers:
 *     ??$MPCManager_SetConvertGraspToSystemGesture@AEA_NAEAI@ISMTracing@@SAXAEA_NAEAI@Z @ 0x1800ADE94 (--$MPCManager_SetConvertGraspToSystemGesture@AEA_NAEAI@ISMTracing@@SAXAEA_NAEAI@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(ISMTracing *this, char a2, int a3)
{
  __int64 v5; // rcx
  char v6; // [rsp+38h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-25h] BYREF
  int v8; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  union _RTL_RUN_ONCE *v10; // [rsp+50h] [rbp-11h] BYREF
  int v11; // [rsp+58h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+68h] [rbp+7h] BYREF
  char *v13; // [rsp+88h] [rbp+27h]
  int v14; // [rsp+90h] [rbp+2Fh]
  int v15; // [rsp+94h] [rbp+33h]
  int *v16; // [rsp+98h] [rbp+37h]
  int v17; // [rsp+A0h] [rbp+3Fh]
  int v18; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v10 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v11 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v10);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v18 = 0;
    v15 = 0;
    v16 = &v8;
    v17 = 4;
    v13 = &v6;
    v8 = a3;
    v6 = a2;
    v14 = 1;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1802212C4, 0LL, 0LL, 4u, &v12);
  }
}
