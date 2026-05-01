/*
 * XREFs of ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180130D24
 * Callers:
 *     ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180130B60 (-UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ.c)
 *     ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x180130C50 (-BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x1803ECD90 (-BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x1803F2990 (-UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(int *a1)
{
  ULONG result; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int16 *v5; // rax
  REGHANDLE v6; // rcx
  __int64 v7; // rdx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  int v10; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+1Fh] BYREF
  void *v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+74h] [rbp+3Bh]
  int *v18; // [rsp+78h] [rbp+3Fh]
  int v19; // [rsp+80h] [rbp+47h]
  int v20; // [rsp+84h] [rbp+4Bh]

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
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v7, v8);
  }
  result = (unsigned int)Context;
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v20 = 0;
    EventDescriptor.Keyword = 0LL;
    v10 = v4;
    v18 = &v10;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v5 = *(unsigned __int16 **)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    UserData.Ptr = (ULONGLONG)v5;
    v19 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v5;
    v15 = &unk_1806B157D;
    UserData.Reserved = 2;
    v16 = 39;
    v17 = 1;
    v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return result;
}
