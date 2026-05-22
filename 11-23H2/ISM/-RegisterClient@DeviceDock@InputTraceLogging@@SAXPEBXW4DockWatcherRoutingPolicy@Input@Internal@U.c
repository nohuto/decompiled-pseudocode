/*
 * XREFs of ?RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18019DCC0
 * Callers:
 *     ?RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDockClientProxy@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18019DF20 (-RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDoc.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180158108 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

int __fastcall InputTraceLogging::DeviceDock::RegisterClient(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  const char *v8; // rax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    LODWORD(v4) = *(_DWORD *)(v7 + 16);
    if ( (v4 & 0x200) != 0 )
    {
      v4 = *(_QWORD *)(v7 + 24) & 0x200LL;
      if ( v4 == *(_QWORD *)(v7 + 24) )
      {
        if ( a2 )
        {
          if ( a2 == 1 )
            v8 = "Exclusive";
          else
            v8 = "UNKNOWN";
        }
        else
        {
          v8 = "Default";
        }
        v10 = (__int64)v8;
        v11 = a1;
        LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                        v7,
                        byte_1802284E9,
                        v5,
                        v6,
                        (__int64)&v11,
                        (const unsigned __int16 **)&v10);
      }
    }
  }
  return v4;
}
