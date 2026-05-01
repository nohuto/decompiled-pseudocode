/*
 * XREFs of ?GetTaskGroupProvider@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@3@XZ @ 0x180179238
 * Callers:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18006484C (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_34d03d9a202a7fc782dd640c0005da4a_@@CA?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@34567@@Z @ 0x180179210 (-_lambda_invoker_cdecl_@_lambda_34d03d9a202a7fc782dd640c0005da4a_@@CA-AUITaskGroupProvider@TaskG.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::GetTaskGroupProvider(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
