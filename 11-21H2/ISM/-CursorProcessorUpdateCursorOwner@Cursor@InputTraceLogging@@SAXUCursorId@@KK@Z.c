/*
 * XREFs of ?CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z @ 0x180138DE0
 * Callers:
 *     ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x1801395F8 (-UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800A26CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

int __fastcall InputTraceLogging::Cursor::CursorProcessorUpdateCursorOwner(__int64 a1, int a2, int a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+64h] [rbp+Ch]
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = HIDWORD(a1);
  v5 = a1;
  v6 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v9 = *(_QWORD *)(v6 + 8);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 8) != 0 )
  {
    v6 = *(_QWORD *)(v9 + 24) & 8LL;
    if ( v6 == *(_QWORD *)(v9 + 24) )
    {
      v12 = v14;
      v15 = a3;
      v11 = a2;
      v13[0] = v5;
      LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v9,
                      byte_180204564,
                      v7,
                      v8,
                      (__int64)v13,
                      (__int64)&v12,
                      (__int64)&v11,
                      (__int64)&v15);
    }
  }
  return v6;
}
