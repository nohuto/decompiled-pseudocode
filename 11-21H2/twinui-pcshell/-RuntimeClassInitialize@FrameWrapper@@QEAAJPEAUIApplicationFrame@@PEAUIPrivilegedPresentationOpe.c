/*
 * XREFs of ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18030AB5C
 * Callers:
 *     ??$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrame@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x18030A0C8 (--$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivi.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800B36A0 (--4-$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrivilegedPrese.c)
 *     ??4?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationFrame@@@Z @ 0x1800C0A5C (--4-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationFrame@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::RuntimeClassInitialize(
        FrameWrapper *this,
        struct IApplicationFrame *a2,
        struct IPrivilegedPresentationOperations *a3)
{
  __int64 v6; // rdx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  LPINIT_ONCE v14; // [rsp+40h] [rbp-19h] BYREF
  int v15; // [rsp+48h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-9h] BYREF
  LPINIT_ONCE *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v14 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v15 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v14, v6, v7);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    v19 = 0;
    v17 = &v14;
    v14 = (LPINIT_ONCE)this;
    v18 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_1806A0706, 0LL, 0LL, 3u, &v16);
  }
  Microsoft::WRL::ComPtr<IApplicationFrame>::operator=((__int64 *)this + 6, (__int64)a2);
  v9 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 64);
  v10 = v9;
  if ( v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IPrivilegedPresentationOperations>::operator=((__int64 *)this + 7, (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
