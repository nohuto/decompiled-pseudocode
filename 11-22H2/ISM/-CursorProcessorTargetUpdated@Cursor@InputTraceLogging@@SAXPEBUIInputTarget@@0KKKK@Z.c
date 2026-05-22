/*
 * XREFs of ?CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z @ 0x180166F24
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180166D1C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801165BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall InputTraceLogging::Cursor::CursorProcessorTargetUpdated(
        const struct IInputTarget *a1,
        const struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-1Ch] BYREF
  int v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+5Ch] [rbp-14h] BYREF
  const struct IInputTarget *v17; // [rsp+60h] [rbp-10h] BYREF
  const struct IInputTarget *v18; // [rsp+68h] [rbp-8h] BYREF

  v10 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                      (__int64)a1,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
        + 1);
  if ( *(_DWORD *)v10 > 4u && (*(_BYTE *)(v10 + 16) & 8) != 0 && (*(_QWORD *)(v10 + 24) & 8LL) == *(_QWORD *)(v10 + 24) )
  {
    v13 = a6;
    v14 = a5;
    v15 = a4;
    v16 = a3;
    v17 = a2;
    v18 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1802357BC,
      v11,
      v12,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
