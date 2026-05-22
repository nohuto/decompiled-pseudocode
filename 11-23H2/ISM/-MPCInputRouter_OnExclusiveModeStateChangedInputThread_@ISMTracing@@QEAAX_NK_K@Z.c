/*
 * XREFs of ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x18010A500
 * Callers:
 *     ??$MPCInputRouter_OnExclusiveModeStateChangedInputThread@AEA_NAEAKAEA_K@ISMTracing@@SAXAEA_NAEAKAEA_K@Z @ 0x180107A90 (--$MPCInputRouter_OnExclusiveModeStateChangedInputThread@AEA_NAEAKAEA_K@ISMTracing@@SAXAEA_NAEAK.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
        ISMTracing *this,
        char a2,
        int a3,
        union _RTL_RUN_ONCE *a4)
{
  __int64 v7; // rcx
  char v8; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-35h] BYREF
  int v10; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+50h] [rbp-21h] BYREF
  int v13; // [rsp+58h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-9h] BYREF
  char *v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  int *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  union _RTL_RUN_ONCE **v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]

  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v12 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v13 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v23 = 0;
      v20 = 0;
      v17 = 0;
      v21 = &v12;
      v12 = a4;
      v18 = &v10;
      v15 = &v8;
      v10 = a3;
      v8 = a2;
      v22 = 8;
      v19 = 4;
      v16 = 1;
      tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180225441, 0LL, 0LL, 5u, &v14);
    }
  }
}
