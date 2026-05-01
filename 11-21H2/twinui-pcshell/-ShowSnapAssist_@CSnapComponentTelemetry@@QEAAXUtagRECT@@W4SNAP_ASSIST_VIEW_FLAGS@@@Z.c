/*
 * XREFs of ?ShowSnapAssist_@CSnapComponentTelemetry@@QEAAXUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CC00
 * Callers:
 *     ??$ShowSnapAssist@AEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAXAEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059A93C (--$ShowSnapAssist@AEBUCRect@Geometry@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAX.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18014A4B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

int __fastcall CSnapComponentTelemetry::ShowSnapAssist_(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __m128i v9; // xmm1
  float v10; // xmm0_4
  __m128i v11; // xmm0
  unsigned __int32 v13; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int32 v14; // [rsp+54h] [rbp-14h] BYREF
  __int32 v15[4]; // [rsp+58h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  float v17; // [rsp+88h] [rbp+20h] BYREF

  v16 = a1;
  v5 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v5[1];
  if ( *v8 > 5u )
  {
    v9 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 8));
    v10 = (float)*(int *)(a2 + 12);
    LODWORD(v16) = a3;
    v17 = v10;
    v11 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
    v13 = _mm_cvtepi32_ps(v9).m128_u32[0];
    *(float *)v9.m128i_i32 = (float)*(int *)a2;
    v14 = _mm_cvtepi32_ps(v11).m128_u32[0];
    v15[0] = v9.m128i_i32[0];
    LODWORD(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v8,
                    byte_1806CA6FE,
                    v6,
                    v7,
                    (__int64)v15,
                    (__int64)&v14,
                    (__int64)&v13,
                    (__int64)&v17,
                    (__int64)&v16);
  }
  return (int)v5;
}
