/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920
 * Callers:
 *     _lambda_8979e37c58b8dc799945db356f5e6b48_::operator() @ 0x1800265B8 (_lambda_8979e37c58b8dc799945db356f5e6b48_--operator().c)
 *     _lambda_9e758cdcb61e8985816640c79758b5b6_::operator() @ 0x18008F458 (_lambda_9e758cdcb61e8985816640c79758b5b6_--operator().c)
 *     _lambda_0a029e4567c45bb0014685f0a9044f2c_::operator() @ 0x18008F638 (_lambda_0a029e4567c45bb0014685f0a9044f2c_--operator().c)
 *     ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x180093060 (-ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_16fabc5b2bb972ab3fdf76682bec0a78_::operator() @ 0x18012F698 (_lambda_16fabc5b2bb972ab3fdf76682bec0a78_--operator().c)
 *     _lambda_3f29781fb943bbf342d9b9e3defd4b9c_::operator() @ 0x18012F7D8 (_lambda_3f29781fb943bbf342d9b9e3defd4b9c_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x18017976C (--1Completer@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // r10
  unsigned __int16 v8; // cx
  ULONG v9; // [rsp+20h] [rbp-E0h]
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+31h] [rbp-CFh] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v15; // [rsp+42h] [rbp-BEh] BYREF
  __int16 v16; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v17; // [rsp+46h] [rbp-BAh] BYREF
  __int16 v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  union _RTL_RUN_ONCE *v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID *p_Context; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  WINBOOL *p_fPending; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int16 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int16 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int16 *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int16 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int16 *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  char *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 572) && *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
  {
    v2 = *((_QWORD *)this + 13);
    if ( v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBAD,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v3,
          v9);
      *((_DWORD *)this + 64) = *((_DWORD *)this + 63);
      v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      Context = 0LL;
      if ( __std_init_once_begin_initialize(
             &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context)
        && fPending )
      {
        v20 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_1807B4370;
        qword_1807B4370 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        v21 = 0;
        wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v20);
      }
      v5 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( v5 && *v5 )
      {
        Context = 0LL;
        if ( __std_init_once_begin_initialize(
               &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
               0,
               &fPending,
               &Context)
          && fPending )
        {
          v20 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
          Context = &qword_1807B4370;
          qword_1807B4370 = (__int64)&IamTraceLogging::`vftable';
          atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          v21 = 0;
          wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v20);
        }
        v7 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                            v6,
                            _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *v7 > 5u )
        {
          v10 = *((_BYTE *)this + 254);
          v8 = *((_WORD *)this + 126);
          v14 = HIBYTE(v8) & 1;
          v15 = v8 & 1;
          v16 = (v8 >> 7) & 1;
          v17 = (v8 >> 6) & 1;
          v18 = (v8 >> 4) & 3;
          LOWORD(fPending) = (v8 >> 1) & 7;
          v11 = *((_BYTE *)this + 255);
          v19 = *((_DWORD *)this + 63);
          LODWORD(Context) = v4;
          v41 = &v10;
          v42 = 1LL;
          v39 = &v14;
          v40 = 2LL;
          v37 = &v15;
          v38 = 2LL;
          v35 = &v16;
          v36 = 2LL;
          v33 = &v17;
          v34 = 2LL;
          v31 = &v18;
          v32 = 2LL;
          p_fPending = &fPending;
          v30 = 2LL;
          v27 = &v11;
          v28 = 1LL;
          v25 = &v19;
          v26 = 4LL;
          p_Context = &Context;
          v24 = 4LL;
          tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&unk_1806B2697, 0, 0, 0xCu, &v22);
        }
      }
    }
  }
}
