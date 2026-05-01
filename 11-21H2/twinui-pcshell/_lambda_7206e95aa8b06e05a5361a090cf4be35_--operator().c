/*
 * XREFs of _lambda_7206e95aa8b06e05a5361a090cf4be35_::operator() @ 0x180174E08
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7206e95aa8b06e05a5361a090cf4be35___::Run @ 0x180174DE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7206e95aa8b06e05a5361a090cf4be35___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1801623D8 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7206e95aa8b06e05a5361a090cf4be35_::operator()(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  DWORD v6; // edx
  int v7; // r8d
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)a1 + 312LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 312LL),
         &v12);
  v2 = *(_QWORD *)v1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)v1 + 64LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v4 = v3(v2, &v13);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x83D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      v10);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
  v5 = v13;
  LOBYTE(v12) = 0;
  v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v13, v6, v7);
  if ( v8 >= 0 )
    v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v5)[8])(v5, &v12);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v8,
      v10);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
  return 0LL;
}
