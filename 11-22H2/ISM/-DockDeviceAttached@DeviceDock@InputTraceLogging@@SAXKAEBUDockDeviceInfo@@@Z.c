/*
 * XREFs of ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800F0F8C
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F12A0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$01@@3333@Z @ 0x1800F0960 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 */

void __fastcall InputTraceLogging::DeviceDock::DockDeviceAttached(__int64 a1, const struct DockDeviceInfo *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 v7; // [rsp+70h] [rbp+37h] BYREF
  int v8; // [rsp+74h] [rbp+3Bh] BYREF
  int v9; // [rsp+78h] [rbp+3Fh] BYREF
  int v10; // [rsp+7Ch] [rbp+43h] BYREF
  int v11; // [rsp+80h] [rbp+47h] BYREF
  int v12; // [rsp+84h] [rbp+4Bh] BYREF
  const WCHAR *v13; // [rsp+88h] [rbp+4Fh] BYREF
  __int64 v14; // [rsp+B0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+7Fh] BYREF

  v3 = a1;
  v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = *((_DWORD *)a2 + 420);
    v9 = *((_DWORD *)a2 + 419);
    v10 = *((_DWORD *)a2 + 418);
    v11 = *((_DWORD *)a2 + 417);
    v7 = *((_WORD *)a2 + 832);
    LOBYTE(v14) = *((_BYTE *)a2 + 1663);
    LOBYTE(v15) = *((_BYTE *)a2 + 1662);
    v13 = (const WCHAR *)((char *)a2 + 1548);
    v12 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned __int8 *)dword_180232B93,
      v5,
      v6,
      (__int64)&v12,
      &v13,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v7,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
}
