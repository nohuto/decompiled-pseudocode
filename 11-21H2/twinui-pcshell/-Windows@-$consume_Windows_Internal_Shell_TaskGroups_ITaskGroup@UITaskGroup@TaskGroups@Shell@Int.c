/*
 * XREFs of ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@XZ @ 0x18058BB1C
 * Callers:
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A4B8 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A588 (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6, &v7);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *(_QWORD *)a2 = v7;
  *(_DWORD *)(a2 + 8) = v6;
  return a2;
}
