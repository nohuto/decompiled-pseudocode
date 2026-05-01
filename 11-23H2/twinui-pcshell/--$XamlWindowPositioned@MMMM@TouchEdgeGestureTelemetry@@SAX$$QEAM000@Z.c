/*
 * XREFs of ??$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z @ 0x1806579D8
 * Callers:
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18065BAF0 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800E4524 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 */

int __fastcall TouchEdgeGestureTelemetry::XamlWindowPositioned<float,float,float,float>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v15; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+44h] [rbp-14h] BYREF
  int v17; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v18[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  v8 = wil::details::static_lazy<TouchGestureLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v8[1];
  if ( *v10 > 5u )
  {
    v11 = *a3;
    v15 = *a4;
    v12 = *a2;
    v16 = v11;
    v13 = *a1;
    v17 = v12;
    v18[0] = v13;
    LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v10,
                    byte_18087181E,
                    0LL,
                    v9,
                    (__int64)v18,
                    (__int64)&v17,
                    (__int64)&v16,
                    (__int64)&v15);
  }
  return (int)v8;
}
