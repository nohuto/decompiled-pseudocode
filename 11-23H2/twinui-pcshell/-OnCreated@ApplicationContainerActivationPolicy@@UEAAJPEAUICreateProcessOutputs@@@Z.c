/*
 * XREFs of ?OnCreated@ApplicationContainerActivationPolicy@@UEAAJPEAUICreateProcessOutputs@@@Z @ 0x180631310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationContainerActivationPolicy::OnCreated(
        ApplicationContainerActivationPolicy *this,
        struct ICreateProcessOutputs *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 (__fastcall *v6)(struct ICreateProcessOutputs *, HANDLE *); // rbx
  int v7; // eax
  DWORD v8; // eax
  const char *v9; // r9
  void (__fastcall *v10)(char *, GUID *, IUnknown **); // rbx
  const char *v11; // r9
  __int64 result; // rax
  HANDLE hThread; // [rsp+20h] [rbp-28h] BYREF
  void *ppvOut[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v16; // [rsp+58h] [rbp+10h]
  IUnknown *punk; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 32LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v4,
        (int)hThread);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 24LL))(
           *((_QWORD *)this + 13),
           v16,
           *((unsigned __int8 *)this + 48));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x73,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v5);
    hThread = 0LL;
    v6 = *(__int64 (__fastcall **)(struct ICreateProcessOutputs *, HANDLE *))(*(_QWORD *)a2 + 40LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hThread,
      0LL);
    v7 = v6(a2, &hThread);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x78,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v7,
        (int)hThread);
    v8 = ResumeThread(hThread);
    if ( v8 == -1 )
      wil::details::in1diag3::Throw_GetLastError(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        v9);
    if ( !v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x83,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        v9);
    ppvOut[0] = 0LL;
    punk = 0LL;
    v10 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 7) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v10((char *)this - 56, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    LOBYTE(v10) = IUnknown_QueryService(punk, &IID_ICreatedProcess, &GUID_c2b937aa_3110_4398_8a56_f34c6342d244, ppvOut) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( (_BYTE)v10 )
      (*(void (__fastcall **)(void *, struct ICreateProcessOutputs *))(*(_QWORD *)ppvOut[0] + 24LL))(ppvOut[0], a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)ppvOut);
    if ( (char *)hThread - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hThread);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8C,
                           (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
                           v11);
  }
  return result;
}
