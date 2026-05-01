/*
 * XREFs of ??$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@@Z @ 0x18058832C
 * Callers:
 *     ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180589444 (-ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTaskGroupsTraceLoggingProvider@@@details@wil@@QEAAPEAVTaskGroupsTraceLoggingProvider@@P6AXXZ@Z @ 0x18058BD6C (-get@-$static_lazy@VTaskGroupsTraceLoggingProvider@@@details@wil@@QEAAPEAVTaskGroupsTraceLogging.c)
 */

char __fastcall TaskGroupsTraceLoggingProvider::TaskGroupSwitchToCompleted<winrt::guid>(__int128 *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  __int128 v8; // [rsp+38h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-58h] BYREF
  __int128 *v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  __int64 *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<TaskGroupsTraceLoggingProvider>::get(
         a1,
         _lambda_34d8d9f79e2b37c49eea107dd9a294d3_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v15 = 0;
      v12 = 0;
      v13 = &v7;
      v7 = 0x2000000LL;
      v10 = &v8;
      v14 = 8;
      v8 = v5;
      v11 = 16;
      LOBYTE(v2) = tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1806C888D, 0LL, 0LL, 4u, &v9);
    }
  }
  return v2;
}
