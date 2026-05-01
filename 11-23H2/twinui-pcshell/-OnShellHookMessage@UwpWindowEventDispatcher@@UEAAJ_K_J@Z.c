/*
 * XREFs of ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009B6C4 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18009B85C (-WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009B91C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1800A0F1C (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x18016B144 (--1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_66cb15f8422cbf2e3f8eb7fe6565be68___ @ 0x1801F45B8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_66cb15f8422cbf2e3f8eb7fe6565be68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall UwpWindowEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, unsigned __int64 a2, HWND a3)
{
  int v3; // edi
  RTL_SRWLOCK *v6; // rbx
  BOOL inited; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v11; // rcx
  unsigned int v12; // edi
  struct UwpWindowEventDispatcher *v13; // r14
  __int64 Uwlm; // rax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64 *); // r15
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  bool v20; // di
  int v21; // eax
  DWORD CurrentThreadId; // eax
  __int64 v23; // rcx
  int v24; // eax
  RTL_SRWLOCK *v25; // rcx
  HWND v26; // rbx
  LPVOID v27; // rcx
  HWND v28; // rdi
  RTL_SRWLOCK *v29; // rdi
  HWND v30; // r15
  RTL_SRWLOCK **Ptr; // rsi
  RTL_SRWLOCK **v32; // r14
  RTL_SRWLOCK *v33; // rcx
  __int64 result; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-138h]
  LPVOID Context; // [rsp+30h] [rbp-128h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-120h] BYREF
  int v38; // [rsp+3Ch] [rbp-11Ch] BYREF
  __int64 v39; // [rsp+40h] [rbp-118h] BYREF
  HWND v40; // [rsp+48h] [rbp-110h] BYREF
  RTL_SRWLOCK *v41; // [rsp+50h] [rbp-108h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-100h] BYREF
  RTL_SRWLOCK *v43; // [rsp+68h] [rbp-F0h] BYREF
  char v44[8]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+78h] [rbp-E0h]
  __int64 v46; // [rsp+80h] [rbp-D8h]
  int v47; // [rsp+88h] [rbp-D0h]
  char v48; // [rsp+8Ch] [rbp-CCh]
  int v49; // [rsp+90h] [rbp-C8h]
  char v50; // [rsp+94h] [rbp-C4h]
  int v51; // [rsp+98h] [rbp-C0h]
  char v52; // [rsp+9Ch] [rbp-BCh]
  int v53; // [rsp+A0h] [rbp-B8h]
  char v54; // [rsp+A4h] [rbp-B4h]
  int v55; // [rsp+A8h] [rbp-B0h]
  char v56; // [rsp+ACh] [rbp-ACh]
  _QWORD v57[6]; // [rsp+B0h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-78h] BYREF
  void *v59; // [rsp+F0h] [rbp-68h]
  int v60; // [rsp+F8h] [rbp-60h]
  int v61; // [rsp+FCh] [rbp-5Ch]
  RTL_SRWLOCK **v62; // [rsp+100h] [rbp-58h]
  __int64 v63; // [rsp+108h] [rbp-50h]
  int *v64; // [rsp+110h] [rbp-48h]
  __int64 v65; // [rsp+118h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v3 = (int)a3;
  v6 = 0LL;
  v38 = 0;
  v40 = a3;
  Context = 0LL;
  inited = __std_init_once_begin_initialize(
             &`ViewManagerInteropLogging::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context);
  if ( inited && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
    Context = &qword_18098E6A0;
    qword_18098E6A0 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098E6B8 = (__int64)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&EventDescriptor, v9, v10);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    v38 = v3;
    v43 = (RTL_SRWLOCK *)a2;
    v64 = &v38;
    v65 = 4LL;
    v62 = &v43;
    v63 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v59 = &unk_180858FCC;
    v60 = 59;
    v61 = 1;
    LODWORD(v39) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  try
  {
    if ( a2 <= 0x26 )
    {
      if ( (_DWORD)a2 == 18 )
      {
        v28 = v40;
        SetLastError(0);
        if ( (unsigned int)IsWindowInDestroy(v28) || GetLastError() == 1400 )
        {
          v29 = this + 51;
          AcquireSRWLockExclusive(this + 51);
          v43 = this + 51;
          v30 = v40;
          v41 = 0LL;
          v38 = 2;
          Ptr = (RTL_SRWLOCK **)this[38].Ptr;
          v32 = (RTL_SRWLOCK **)this[39].Ptr;
          while ( Ptr != v32 )
          {
            if ( *Ptr && v30 == (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*Ptr)->Ptr + 32))(*Ptr) )
            {
              v33 = *Ptr;
              v6 = v33;
              v41 = *Ptr;
              if ( v33 )
                (*((void (__fastcall **)(RTL_SRWLOCK *))v33->Ptr + 1))(v33);
              break;
            }
            ++Ptr;
          }
          if ( v6 )
          {
            (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v6->Ptr + 24))(v6, 0LL);
            (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
          }
          if ( v29 )
          {
            v25 = v29;
LABEL_48:
            ReleaseSRWLockExclusive(v25);
          }
        }
      }
      else
      {
        switch ( (int)a2 )
        {
          case 17:
            v39 = 0LL;
            v12 = (unsigned int)v40;
            v13 = (struct UwpWindowEventDispatcher *)&this[-10];
            Uwlm = UwpWindowEventDispatcher::GetUwlm(v13, &v41);
            v38 = 1;
            v15 = *(_QWORD *)Uwlm;
            v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)Uwlm + 112LL);
            v17 = v39;
            v39 = 0LL;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            v18 = v16(v15, v12, &v39);
            v19 = v39;
            v20 = v18 >= 0 && v39;
            if ( v41 )
            {
              (*((void (__fastcall **)(RTL_SRWLOCK *))v41->Ptr + 2))(v41);
              v19 = v39;
            }
            if ( v20 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v19 + 48LL))(v19, &fPending);
              if ( v21 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x184,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v21,
                  UserDataCount);
              v44[0] = 0;
              v45 = 0LL;
              v46 = 0LL;
              v47 = 0;
              v48 = 0;
              v49 = 0;
              v50 = 0;
              v51 = 6;
              v52 = 0;
              v53 = 0;
              v54 = 0;
              v55 = 0;
              v56 = 0;
              Context = 0LL;
              v57[0] = v13;
              v57[1] = &Context;
              v57[2] = &fPending;
              v57[3] = v44;
              v57[4] = &v40;
              CurrentThreadId = GetCurrentThreadId();
              v24 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_66cb15f8422cbf2e3f8eb7fe6565be68___(
                      v23,
                      CurrentThreadId,
                      v57);
              if ( v24 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x19C,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)(unsigned int)v24,
                  UserDataCount);
              UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
                (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v44,
                v13,
                (struct IUwpWindowWrapperInternal *)Context);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&Context);
              UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper((UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v44);
              v19 = v39;
            }
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            break;
          case 19:
          case 23:
          case 25:
          case 26:
          case 27:
            AcquireSRWLockExclusive(this + 51);
            v41 = this + 51;
            UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)&this[-10], v40);
            if ( this != (RTL_SRWLOCK *)-408LL )
            {
              v25 = this + 51;
              goto LABEL_48;
            }
            break;
          case 31:
          case 36:
          case 38:
            v26 = v40;
            AcquireSRWLockShared(this + 51);
            v41 = this + 51;
            UwpWindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &Context, v26);
            if ( this != (RTL_SRWLOCK *)-408LL )
              ReleaseSRWLockShared(this + 51);
            v27 = Context;
            if ( Context )
            {
              (*(void (__fastcall **)(LPVOID, unsigned __int64))(*(_QWORD *)Context + 328LL))(Context, a2);
              v27 = Context;
            }
            if ( v27 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
            break;
          case 34:
            AcquireSRWLockExclusive(this + 51);
            v41 = this + 51;
            UwpWindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &Context, v40);
            if ( Context )
              (*(void (**)(void))(*(_QWORD *)Context + 336LL))();
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&Context);
            if ( this != (RTL_SRWLOCK *)-408LL )
            {
              v25 = this + 51;
              goto LABEL_48;
            }
            break;
          default:
            break;
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1DF,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
