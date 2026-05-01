/*
 * XREFs of ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804141EC
 * Callers:
 *     _lambda_02c18762fafac8f58346267f5d28b7a5_::operator() @ 0x180410E28 (_lambda_02c18762fafac8f58346267f5d28b7a5_--operator().c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803FF39C (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowWrapperBase::CachePersistingStateName(__int64 a1, unsigned int a2)
{
  HSTRING v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 **); // rdi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64); // rsi
  int v14; // eax
  __int64 v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  if ( *(_DWORD *)(a1 + 320) == 1 )
  {
    if ( a2 )
    {
      v18 = 0LL;
      v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 272) + 152LL))(
                       *(_QWORD *)(a1 + 272),
                       v15);
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 48LL))(*v5, &v19);
      v7 = *(_QWORD *)v6;
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(**(_QWORD **)v6 + 80LL);
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v18);
      v9 = v8(v7, a2, &v18);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6A4,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v9,
          v15[0]);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v15);
      v17 = 0LL;
      v10 = *v18;
      v17 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v10 + 48))(
              v18,
              &v17);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6A7,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v11,
          v15[0]);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        &v17,
        &v19);
      v12 = v19;
      if ( v19 )
      {
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 360LL);
        WindowsDeleteString(*(HSTRING *)(a1 + 552));
        *(_QWORD *)(a1 + 552) = 0LL;
        v14 = v13(v12, a1 + 552);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x6AB,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v14,
            v15[0]);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v17);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      v4 = *(HSTRING *)(a1 + 552);
      if ( v4 )
      {
        WindowsDeleteString(v4);
        *(_QWORD *)(a1 + 552) = 0LL;
      }
    }
  }
}
