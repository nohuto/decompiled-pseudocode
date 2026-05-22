/*
 * XREFs of ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x18010A370
 * Callers:
 *     ??$MPCInputRouter_IsTargetHolographic@AEAPEAUIInputTarget@@AEAKAEA_KAEA_N@ISMTracing@@SAXAEAPEAUIInputTarget@@AEAKAEA_KAEA_N@Z @ 0x1801079AC (--$MPCInputRouter_IsTargetHolographic@AEAPEAUIInputTarget@@AEAKAEA_KAEA_N@ISMTracing@@SAXAEAPEAU.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18010946C (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_IsTargetHolographic_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        union _RTL_RUN_ONCE *a4,
        bool a5)
{
  __int64 v8; // rbx
  int PIDOfTarget; // eax
  bool v10; // [rsp+30h] [rbp-61h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-5Dh] BYREF
  int v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+48h] [rbp-49h] BYREF
  int v16; // [rsp+50h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-31h] BYREF
  bool *v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+88h] [rbp-9h]
  int v20; // [rsp+8Ch] [rbp-5h]
  int *v21; // [rsp+90h] [rbp-1h]
  int v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+9Ch] [rbp+Bh]
  union _RTL_RUN_ONCE **v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+ACh] [rbp+1Bh]
  int *v27; // [rsp+B0h] [rbp+1Fh]
  int v28; // [rsp+B8h] [rbp+27h]
  int v29; // [rsp+BCh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((char)this) )
  {
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
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v29 = 0;
      v26 = 0;
      v23 = 0;
      v20 = 0;
      v12 = PIDOfTarget;
      v10 = a5;
      v27 = &v12;
      v24 = &v15;
      v21 = &v13;
      v18 = &v10;
      v28 = 4;
      v22 = 4;
      v15 = a4;
      v13 = a3;
      v25 = 8;
      v19 = 1;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1802255D1, 0LL, 0LL, 6u, &v17);
    }
  }
}
