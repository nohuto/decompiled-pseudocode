/*
 * XREFs of ?SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801CF1F4
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801CEE10 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1801CEC18 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?MagnifierGestureStateToString@InputTraceLogging@@CAPEBDW4MagnifierGestureState@Input@Internal@UI@Windows@@@Z @ 0x1801CF028 (-MagnifierGestureStateToString@InputTraceLogging@@CAPEBDW4MagnifierGestureState@Input@Internal@U.c)
 */

int __fastcall InputTraceLogging::Magnifier::SendPan(__int64 a1, int a2, int *a3)
{
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  v6 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                  a1,
                  _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    LODWORD(v6) = *(_DWORD *)(v7 + 16);
    if ( (v6 & 0x200) != 0 )
    {
      v6 = *(_QWORD *)(v7 + 24) & 0x200LL;
      if ( v6 == *(_QWORD *)(v7 + 24) )
      {
        LODWORD(v14) = a3[1];
        v11 = *a3;
        v12 = a2;
        v13 = (__int64)InputTraceLogging::MagnifierGestureStateToString(v5);
        LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                        v9,
                        byte_180228CC0,
                        v8,
                        v9,
                        (const unsigned __int16 **)&v13,
                        (__int64)&v12,
                        (__int64)&v11,
                        (__int64)&v14);
      }
    }
  }
  return v6;
}
