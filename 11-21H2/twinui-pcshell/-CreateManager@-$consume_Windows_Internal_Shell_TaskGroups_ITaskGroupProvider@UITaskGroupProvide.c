/*
 * XREFs of ?CreateManager@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTaskGroupManager@TaskGroups@Shell@Internal@Windows@3@AEBUTaskGroupDataModel@56783@AEBUITaskGroupHost@56783@@Z @ 0x1800647E4
 * Callers:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18006484C (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetData@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAPEAXPEA_J0@Z @ 0x1805896D0 (-GetData@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAPEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateManager(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 64LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  *a2 = v8;
  return a2;
}
