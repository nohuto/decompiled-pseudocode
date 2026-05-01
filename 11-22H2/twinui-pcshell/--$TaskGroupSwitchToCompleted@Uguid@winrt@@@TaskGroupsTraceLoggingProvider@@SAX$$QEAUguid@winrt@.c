/*
 * XREFs of ??$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@@Z @ 0x180646328
 * Callers:
 *     ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x1806470C4 (-ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803F4930 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?get@?$static_lazy@VTaskGroupsTraceLoggingProvider@@@details@wil@@QEAAPEAVTaskGroupsTraceLoggingProvider@@P6AXXZ@Z @ 0x18064A25C (-get@-$static_lazy@VTaskGroupsTraceLoggingProvider@@@details@wil@@QEAAPEAVTaskGroupsTraceLogging.c)
 */

char __fastcall TaskGroupsTraceLoggingProvider::TaskGroupSwitchToCompleted<winrt::guid>(__int128 *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  v2 = wil::details::static_lazy<TaskGroupsTraceLoggingProvider>::get(
         a1,
         _lambda_34d8d9f79e2b37c49eea107dd9a294d3_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v7 = *a1;
      v9 = 0x2000000LL;
      v10 = &v11;
      v11 = v7;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                     v4,
                     byte_180870E23,
                     v5,
                     v6,
                     (__int64 *)&v10,
                     (__int64)&v9);
    }
  }
  return v2;
}
