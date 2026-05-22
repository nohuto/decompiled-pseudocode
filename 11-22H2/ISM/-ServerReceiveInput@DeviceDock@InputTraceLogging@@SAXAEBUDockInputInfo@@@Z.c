/*
 * XREFs of ?ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z @ 0x1801AC48C
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x1801AAB60 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U3@U3@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@55AEBU?$_tlgWrapperByVal@$00@@4444@Z @ 0x1801A9010 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWr.c)
 */

void __fastcall InputTraceLogging::DeviceDock::ServerReceiveInput(const struct DockInputInfo *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  const char *v8; // rax
  __int16 v9; // [rsp+80h] [rbp+27h] BYREF
  int v10; // [rsp+84h] [rbp+2Bh] BYREF
  int v11; // [rsp+88h] [rbp+2Fh] BYREF
  int v12; // [rsp+8Ch] [rbp+33h] BYREF
  int v13; // [rsp+90h] [rbp+37h] BYREF
  int v14; // [rsp+94h] [rbp+3Bh] BYREF
  const char *v15; // [rsp+98h] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+A0h] [rbp+47h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+4Fh] BYREF
  __int64 v18; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200LL) == *(_QWORD *)(v2 + 24) )
  {
    v4 = *((_DWORD *)a1 + 14);
    v10 = *((_DWORD *)a1 + 20);
    v11 = *((_DWORD *)a1 + 19);
    v12 = *((_DWORD *)a1 + 18);
    v13 = *((_DWORD *)a1 + 17);
    LOBYTE(v18) = *((_BYTE *)a1 + 64);
    LOWORD(v19) = *((_WORD *)a1 + 31);
    LOWORD(v20) = *((_WORD *)a1 + 30);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              v8 = "Chassis";
            else
              v8 = "UNKNOWN";
          }
          else
          {
            v8 = "NFCDevice";
          }
        }
        else
        {
          v8 = "Display";
        }
      }
      else
      {
        v8 = "HIDDevice";
      }
    }
    else
    {
      v8 = "Unspecified";
    }
    v15 = v8;
    v9 = *((_WORD *)a1 + 24);
    v16 = *((_QWORD *)a1 + 5);
    v14 = *((_DWORD *)a1 + 8);
    v17 = *((_QWORD *)a1 + 2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      byte_1802372E7,
      v2,
      v3,
      (__int64)&v17,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v9,
      (const unsigned __int16 **)&v15,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
}
