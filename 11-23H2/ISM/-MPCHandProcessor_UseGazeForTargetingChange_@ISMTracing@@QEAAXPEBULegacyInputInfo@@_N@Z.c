/*
 * XREFs of ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z @ 0x1800BF274
 * Callers:
 *     ??$MPCHandProcessor_UseGazeForTargetingChange@AEAPEAULegacyInputInfo@@AEB_N@ISMTracing@@SAXAEAPEAULegacyInputInfo@@AEB_N@Z @ 0x1800BDD88 (--$MPCHandProcessor_UseGazeForTargetingChange@AEAPEAULegacyInputInfo@@AEB_N@ISMTracing@@SAXAEAPE.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(
        ISMTracing *this,
        const struct LegacyInputInfo *a2,
        char a3)
{
  __int64 v5; // rcx
  char v6; // al
  char v7; // [rsp+38h] [rbp-69h] BYREF
  char v8; // [rsp+39h] [rbp-68h] BYREF
  char v9; // [rsp+3Ah] [rbp-67h] BYREF
  char v10; // [rsp+3Bh] [rbp-66h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-65h] BYREF
  int v12; // [rsp+40h] [rbp-61h] BYREF
  int v13; // [rsp+44h] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+50h] [rbp-51h] BYREF
  int v16; // [rsp+58h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-39h] BYREF
  int *v18; // [rsp+88h] [rbp-19h]
  int v19; // [rsp+90h] [rbp-11h]
  int v20; // [rsp+94h] [rbp-Dh]
  int *v21; // [rsp+98h] [rbp-9h]
  int v22; // [rsp+A0h] [rbp-1h]
  int v23; // [rsp+A4h] [rbp+3h]
  char *v24; // [rsp+A8h] [rbp+7h]
  int v25; // [rsp+B0h] [rbp+Fh]
  int v26; // [rsp+B4h] [rbp+13h]
  char *v27; // [rsp+B8h] [rbp+17h]
  int v28; // [rsp+C0h] [rbp+1Fh]
  int v29; // [rsp+C4h] [rbp+23h]
  char *v30; // [rsp+C8h] [rbp+27h]
  int v31; // [rsp+D0h] [rbp+2Fh]
  int v32; // [rsp+D4h] [rbp+33h]
  char *v33; // [rsp+D8h] [rbp+37h]
  int v34; // [rsp+E0h] [rbp+3Fh]
  int v35; // [rsp+E4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v15 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v16 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v15);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = *((_BYTE *)a2 + 997);
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v7 = v6;
    v8 = *((_BYTE *)a2 + 996);
    v9 = *((_BYTE *)a2 + 1204);
    v12 = *((_DWORD *)a2 + 265);
    v13 = *((_DWORD *)a2 + 20);
    v33 = &v7;
    v30 = &v8;
    v27 = &v9;
    v24 = &v10;
    v21 = &v12;
    v18 = &v13;
    v34 = 1;
    v31 = 1;
    v28 = 1;
    v25 = 1;
    v22 = 4;
    v19 = 4;
    v10 = a3;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_18022205B, 0LL, 0LL, 8u, &v17);
  }
}
