/*
 * XREFs of ?UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z @ 0x1800FDEDC
 * Callers:
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800FDDC0 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800CBC0C (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800FDA7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

int __fastcall InputTraceLogging::Cursor::UpdateCursorOrientationForInputType(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 8) != 0 )
  {
    v2 = *(_QWORD *)(v3 + 24) & 8LL;
    if ( v2 == *(_QWORD *)(v3 + 24) )
    {
      v7 = *(_QWORD *)&a2;
      v8 = (__int64)InputTraceLogging::InputTypeToString(2);
      LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
                      v4,
                      byte_180224F2B,
                      v4,
                      v5,
                      (const unsigned __int16 **)&v8,
                      (__int64)&v7);
    }
  }
  return v2;
}
