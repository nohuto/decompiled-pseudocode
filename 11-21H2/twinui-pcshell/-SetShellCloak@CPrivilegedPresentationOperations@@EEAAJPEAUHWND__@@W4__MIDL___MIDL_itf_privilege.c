/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180128CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  _DWORD *v6; // rcx
  DWORD WindowThreadProcessId; // eax
  DWORD v8; // r14d
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  REGHANDLE v11; // rcx
  __int64 v12; // rbx
  bool i; // zf
  signed __int32 v14; // eax
  unsigned int v15; // esi
  signed __int32 v16; // edx
  __int64 v18; // rdx
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v20; // rdx
  void (*v21)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL v23; // [rsp+3Ch] [rbp-CCh] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-C8h] BYREF
  DWORD v25; // [rsp+44h] [rbp-C4h] BYREF
  DWORD v26; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v27; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 pvAttribute; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h]
  HWND v32; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  LPINIT_ONCE v34; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+90h] [rbp-78h]
  LPINIT_ONCE v36; // [rsp+98h] [rbp-70h] BYREF
  int v37; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C4h] [rbp-44h]
  BOOL *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  HWND *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  DWORD *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  DWORD *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v34 = &`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B5178;
    qword_1807B5178 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B5190 = (__int64)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    v35 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v34, v18, v19);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v6 && *v6 )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
    v30 = 0LL;
    v8 = WindowThreadProcessId;
    if ( __std_init_once_begin_initialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &v23, &v30)
      && v23 )
    {
      v36 = &`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper;
      v30 = &qword_1807B5178;
      qword_1807B5178 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B5190 = (__int64)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
      v37 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v36, v20, v21);
    }
    v9 = *((_QWORD *)v30 + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v25 = dwProcessId;
      v26 = v8;
      v48 = &v25;
      v32 = a2;
      v46 = &v26;
      v44 = &v32;
      v42 = &v27;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v10 = *(unsigned __int16 **)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 32);
      UserData.Ptr = (ULONGLONG)v10;
      v27 = a3 == 1;
      v49 = 4LL;
      v47 = 4LL;
      v45 = 8LL;
      v43 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *v10;
      v39 = &unk_1806AFD7B;
      UserData.Reserved = 2;
      v40 = 54;
      v41 = 1;
      LODWORD(v31) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  v12 = *(_QWORD *)(a1 + 48);
  for ( i = v12 == 0; !i; i = v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 36), v14 + 1, v14) )
  {
    v14 = *(_DWORD *)(v12 + 36);
    if ( v14 == 0x7FFFFFFF )
      break;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v12 + 48));
  EnableIAMAccess(*(_QWORD *)(v12 + 40), 1LL);
  LODWORD(pvAttribute) = a3 != 0;
  v15 = DwmSetWindowAttribute(a2, 0xDu, &pvAttribute, 4u);
  EnableIAMAccess(*(_QWORD *)(v12 + 40), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(v12 + 48));
  do
    v16 = *(_DWORD *)(v12 + 36);
  while ( v16 != 0x7FFFFFFF && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 36), v16 - 1, v16) );
  if ( v16 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 72LL))(v12, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v15;
}
