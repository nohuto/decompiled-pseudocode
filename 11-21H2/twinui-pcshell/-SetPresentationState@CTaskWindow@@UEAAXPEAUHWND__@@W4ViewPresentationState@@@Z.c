/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180129740
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180129A3C (--1Completer@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_LL @ 0x1803099A0 (WPP_SF_LL.c)
 */

// Hidden C++ exception states: #wind=4
signed int __fastcall CTaskWindow::SetPresentationState(__int64 a1, __int64 a2, int a3)
{
  signed int result; // eax
  _DWORD *v7; // rcx
  int v8; // r14d
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 **); // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rcx
  int v19; // ecx
  __int64 v20; // rdx
  void (*v21)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v23; // [rsp+38h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-69h] BYREF
  WINBOOL v25; // [rsp+48h] [rbp-61h] BYREF
  int v26; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v27; // [rsp+50h] [rbp-59h] BYREF
  LPVOID v28; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-49h] BYREF
  LPINIT_ONCE v30; // [rsp+70h] [rbp-39h] BYREF
  int v31; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  void *v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+98h] [rbp-11h]
  int v35; // [rsp+9Ch] [rbp-Dh]
  int *v36; // [rsp+A0h] [rbp-9h]
  __int64 v37; // [rsp+A8h] [rbp-1h]
  int *v38; // [rsp+B0h] [rbp+7h]
  __int64 v39; // [rsp+B8h] [rbp+Fh]
  WINBOOL *p_fPending; // [rsp+C0h] [rbp+17h]
  __int64 v41; // [rsp+C8h] [rbp+1Fh]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_57aa434970eb334441637f8eaa75da73_Traceguids,
      *(unsigned int *)(a1 + 136),
      a3);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`CAppManagerTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1807B3CD0;
    qword_1807B3CD0 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<CAppManagerTelemetry>::Completer::~Completer(&EventDescriptor);
  }
  result = (int)Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v28 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v25, &v28) && v25 )
    {
      v30 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      v28 = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v31 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v30, v20, v21);
    }
    result = (int)v28;
    v9 = *((_QWORD *)v28 + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      fPending = a2;
      v26 = a3;
      v27 = v8;
      p_fPending = &fPending;
      v41 = 4LL;
      v38 = &v26;
      v39 = 4LL;
      v36 = &v27;
      v37 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v33 = &unk_1806A0792;
      v34 = 56;
      v35 = 1;
      LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      result = EventWriteTransfer(*(_QWORD *)(v9 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  *(_DWORD *)(a1 + 136) = a3;
  v23 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(a1 + 48);
  if ( v10 )
  {
    result = (**v10)(v10, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, &v23);
    if ( result >= 0 )
    {
      v11 = *(_DWORD *)(a1 + 136);
      if ( v11 && (v12 = v11 - 1) != 0 && (v13 = v12 - 1) != 0 )
      {
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_18;
        v19 = v14 - 1;
        if ( !v19 )
        {
          v15 = v23;
          v16 = *v23;
          v17 = 1LL;
          goto LABEL_19;
        }
        if ( v19 == 1 )
        {
LABEL_18:
          v15 = v23;
          v16 = *v23;
          v17 = 0LL;
LABEL_19:
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v16 + 24))(v15, a2, v17);
        }
      }
      else
      {
        result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v23 + 24))(v23, 0LL, 0LL);
      }
    }
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    return (*(__int64 (__fastcall **)(__int64 *))(*v18 + 16))(v18);
  }
  return result;
}
