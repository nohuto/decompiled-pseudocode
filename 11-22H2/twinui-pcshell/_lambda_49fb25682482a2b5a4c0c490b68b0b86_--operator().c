/*
 * XREFs of _lambda_49fb25682482a2b5a4c0c490b68b0b86_::operator() @ 0x1801F7BC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___::Run @ 0x1801F9C20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B5108 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18018B698 (--4-$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEAK@Z @ 0x1801B311C (--$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_49fb25682482a2b5a4c0c490b68b0b86_::operator()(__int64 a1)
{
  _DWORD *v2; // r8
  HRESULT v3; // eax
  int v4; // eax
  int *v5; // rax
  int ppv; // [rsp+20h] [rbp-60h]
  _OWORD v8[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v13; // [rsp+A0h] [rbp+20h] BYREF
  LPVOID v14; // [rsp+A8h] [rbp+28h] BYREF

  v2 = *(_DWORD **)(a1 + 80);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v8,
      (struct wil::details::IFailureCallback *)(a1 + 32),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  v3 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v14);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB84,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      ppv);
  v4 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v14 + 24LL))(
         v14,
         *(unsigned int *)(a1 + 24),
         0x80000000LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB84,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  Microsoft::WRL::ComPtr<KnownGameList::IGameEntry>::operator=((__int64 *)(*(_QWORD *)a1 + 240LL), (__int64 *)&v14);
  v5 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 288LL))(
                *(_QWORD *)a1 + 16LL,
                &v13);
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int,HWND__ * const &,unsigned long &>(
    v5,
    (__int64 *)(a1 + 16),
    (int *)(a1 + 24));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32, 0);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v8);
  return 0LL;
}
