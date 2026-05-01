/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x1801350E4
 * Callers:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800C3490 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18041A798 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  ULONG result; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int16 *v11; // rax
  REGHANDLE v12; // rcx
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v16; // [rsp+3Ch] [rbp-65h] BYREF
  int v17; // [rsp+40h] [rbp-61h] BYREF
  int v18; // [rsp+44h] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-41h]
  __int64 v22; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  void *v24; // [rsp+88h] [rbp-19h]
  int v25; // [rsp+90h] [rbp-11h]
  int v26; // [rsp+94h] [rbp-Dh]
  __int64 *v27; // [rsp+98h] [rbp-9h]
  int v28; // [rsp+A0h] [rbp-1h]
  int v29; // [rsp+A4h] [rbp+3h]
  int *v30; // [rsp+A8h] [rbp+7h]
  int v31; // [rsp+B0h] [rbp+Fh]
  int v32; // [rsp+B4h] [rbp+13h]
  int *v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+C0h] [rbp+1Fh]
  int v35; // [rsp+C4h] [rbp+23h]
  int *v36; // [rsp+C8h] [rbp+27h]
  int v37; // [rsp+D0h] [rbp+2Fh]
  int v38; // [rsp+D4h] [rbp+33h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4348;
    qword_1807B4348 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4360 = (__int64)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v13, v14);
  }
  result = (unsigned int)Context;
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a4;
    v38 = 0;
    v35 = 0;
    v32 = 0;
    v29 = 0;
    EventDescriptor.Keyword = 0LL;
    v16 = v10;
    v17 = *a3;
    v18 = *a2;
    v22 = *a1;
    v36 = &v16;
    v33 = &v17;
    v30 = &v18;
    v27 = &v22;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v11 = *(unsigned __int16 **)(v9 + 8);
    v12 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = (ULONGLONG)v11;
    v37 = 4;
    v34 = 4;
    v31 = 4;
    v28 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v11;
    v24 = &unk_1806B2C2D;
    UserData.Reserved = 2;
    v25 = 85;
    v26 = 1;
    v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
