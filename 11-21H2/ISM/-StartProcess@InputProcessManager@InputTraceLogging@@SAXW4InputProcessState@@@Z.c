/*
 * XREFs of ?StartProcess@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@@Z @ 0x180196A88
 * Callers:
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800892B8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InputProcessStateToString@InputTraceLogging@@CAPEBDW4InputProcessState@@@Z @ 0x180195FAC (-InputProcessStateToString@InputTraceLogging@@CAPEBDW4InputProcessState@@@Z.c)
 */

int __fastcall InputTraceLogging::InputProcessManager::StartProcess(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  v2 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v3 > 4u )
  {
    LODWORD(v2) = *(_DWORD *)(v3 + 16);
    if ( (v2 & 0x200) != 0 )
    {
      v2 = *(_QWORD *)(v3 + 24) & 0x200LL;
      if ( v2 == *(_QWORD *)(v3 + 24) )
      {
        v6 = (__int64)InputTraceLogging::InputProcessStateToString(v1);
        LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                        v4,
                        byte_1802064D5,
                        0LL,
                        0LL,
                        (const unsigned __int16 **)&v6);
      }
    }
  }
  return v2;
}
