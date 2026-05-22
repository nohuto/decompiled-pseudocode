/*
 * XREFs of ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x18013883C
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801384B0 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 *     ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801386A0 (-OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x180138960 (-SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x1801389AC (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180138118 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

int __fastcall InputTraceLogging::Cursor::SetSuppressionState(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ebx
  const char *v10; // rax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    LODWORD(v4) = *(_DWORD *)(v7 + 16);
    if ( (v4 & 0x400) != 0 )
    {
      v4 = *(_QWORD *)(v7 + 24) & 0x400LL;
      if ( v4 == *(_QWORD *)(v7 + 24) )
      {
        if ( a2 )
        {
          v8 = a2 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 == 1 )
                v10 = "ShowingPenCursor";
              else
                v10 = "UNKNOWN";
            }
            else
            {
              v10 = "NotSuppressed";
            }
          }
          else
          {
            v10 = "PendingNotSuppressed";
          }
        }
        else
        {
          v10 = "Suppressed";
        }
        v12 = (__int64)v10;
        v13 = a1;
        LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                        v7,
                        byte_1802044F8,
                        v5,
                        v6,
                        (__int64)&v13,
                        (const unsigned __int16 **)&v12);
      }
    }
  }
  return v4;
}
