/*
 * XREFs of ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x1800B69F4
 * Callers:
 *     ??$MPCHolographicInputManager_UpdateDoubleClickValues@AEA_NAEAHAEAH@ISMTracing@@SAXAEA_NAEAH1@Z @ 0x1800B35E8 (--$MPCHolographicInputManager_UpdateDoubleClickValues@AEA_NAEAHAEAH@ISMTracing@@SAXAEA_NAEAH1@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
        ISMTracing *this,
        const bool *a2,
        int *a3,
        int *a4)
{
  __int64 v7; // rcx
  int v8; // eax
  char v9; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-35h] BYREF
  int v11; // [rsp+40h] [rbp-31h] BYREF
  int v12; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  union _RTL_RUN_ONCE *v14; // [rsp+50h] [rbp-21h] BYREF
  int v15; // [rsp+58h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-9h] BYREF
  char *v17; // [rsp+88h] [rbp+17h]
  int v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+94h] [rbp+23h]
  int *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]
  int *v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]
  int v25; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v14 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v15 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v14);
  }
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v8 = *a4;
    v25 = 0;
    v22 = 0;
    v19 = 0;
    v11 = v8;
    v12 = *a3;
    v9 = *a2;
    v23 = &v11;
    v20 = &v12;
    v17 = &v9;
    v24 = 4;
    v21 = 4;
    v18 = 1;
    tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180221569, 0LL, 0LL, 5u, &v16);
  }
}
