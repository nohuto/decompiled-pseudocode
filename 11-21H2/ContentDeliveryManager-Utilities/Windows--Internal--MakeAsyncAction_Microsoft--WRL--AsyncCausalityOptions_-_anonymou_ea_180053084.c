/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180053084
 * Callers:
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x180063680 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180055DB8 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_180055DB8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // rdi
  int v8; // edi
  void *v9; // rax
  __int64 v10; // rbx

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
    v7[1] = 0LL;
    if ( v7 + 1 != a4 )
    {
      v7[1] = *a4;
      *a4 = 0LL;
    }
    v7[2] = a4[1];
    a4[1] = 0LL;
    *((_BYTE *)v7 + 24) = 0;
    *((_BYTE *)a4 + 16) = 1;
    *v7 = off_1800FE0A0;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(
      v7 + 5,
      8uLL,
      1,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v7 + 8) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  if ( !v7 )
    return (unsigned int)-2147024882;
  v9 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
    v10 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
            v9,
            a1,
            L"Windows.Foundation.IAsyncAction",
            0LL);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v10 + 256) = v7;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
  if ( v8 >= 0 )
  {
    *a2 = v10 + 176;
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  return (unsigned int)v8;
}
