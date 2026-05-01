/*
 * XREFs of ?Complete@?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1802383D4
 * Callers:
 *     ??1?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x180235168 (--1-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentResult@.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x18023E810 (-Invoke@-$delegate@U-$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Ma.c)
 *     ??1?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x18054C458 (--1-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x18054F290 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@w.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x1806A2FE0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Windows@winrt@@.c)
 * Callees:
 *     <none>
 */

int __fastcall winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>>::Complete(
        __int64 a1)
{
  int result; // eax
  __int64 (__fastcall **v2)(_QWORD); // rdx
  __int64 v3; // r8

  result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 24LL) = 0;
  if ( (_BYTE)result )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  else
  {
    v2 = *(__int64 (__fastcall ***)(_QWORD))(a1 + 24);
    v3 = *(_QWORD *)(a1 + 16) + 20LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    return winrt::impl::resume_apartment(a1, v2, v3);
  }
  return result;
}
