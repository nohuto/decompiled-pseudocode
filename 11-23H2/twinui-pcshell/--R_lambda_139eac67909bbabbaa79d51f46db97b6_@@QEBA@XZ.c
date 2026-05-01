/*
 * XREFs of ??R_lambda_139eac67909bbabbaa79d51f46db97b6_@@QEBA@XZ @ 0x180788E70
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18078A984 (-reset@-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@W.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_139eac67909bbabbaa79d51f46db97b6_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  try
  {
    v1 = Platform::Details::ResolveWeakReference(
           &_uuidof__AVSnapAssistViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__,
           *a1 + 8LL);
    v2 = __abi_winrt_ptr_ctor(v1);
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    result = v2;
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
