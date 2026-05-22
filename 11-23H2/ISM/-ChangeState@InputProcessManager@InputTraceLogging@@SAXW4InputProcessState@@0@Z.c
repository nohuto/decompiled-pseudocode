/*
 * XREFs of ?ChangeState@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@0@Z @ 0x1801B3D54
 * Callers:
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801B4894 (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1801B3824 (--$Write@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ?InputProcessStateToString@InputTraceLogging@@CAPEBDW4InputProcessState@@@Z @ 0x1801B3F2C (-InputProcessStateToString@InputTraceLogging@@CAPEBDW4InputProcessState@@@Z.c)
 */

int __fastcall InputTraceLogging::InputProcessManager::ChangeState(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v5 > 4u )
  {
    LODWORD(v4) = *(_DWORD *)(v5 + 16);
    if ( (v4 & 0x200) != 0 )
    {
      v4 = *(_QWORD *)(v5 + 24) & 0x200LL;
      if ( v4 == *(_QWORD *)(v5 + 24) )
      {
        v9 = InputTraceLogging::InputProcessStateToString(a2);
        v10 = InputTraceLogging::InputProcessStateToString(v3);
        LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>>(
                        v6,
                        (unsigned __int8 *)dword_18022886D,
                        v6,
                        v7,
                        (const unsigned __int16 **)&v10,
                        (const unsigned __int16 **)&v9);
      }
    }
  }
  return v4;
}
