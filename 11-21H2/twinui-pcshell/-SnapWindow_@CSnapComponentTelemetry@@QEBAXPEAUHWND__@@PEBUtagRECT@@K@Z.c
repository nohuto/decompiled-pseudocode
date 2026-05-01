/*
 * XREFs of ?SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x1805962E8
 * Callers:
 *     ??$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@Z @ 0x180590AE0 (--$SnapWindow@AEAPEAUHWND__@@AEAPEBUtagRECT@@AEAK@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180017574 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindow_(
        CSnapComponentTelemetry *this,
        HWND a2,
        const struct tagRECT *a3,
        int a4)
{
  _DWORD *v7; // rcx
  unsigned int v8; // eax
  float top; // xmm1_4
  __m128i v10; // xmm0
  int v11; // eax
  unsigned __int32 v12; // [rsp+50h] [rbp-20h] BYREF
  float v13; // [rsp+54h] [rbp-1Ch] BYREF
  float v14; // [rsp+58h] [rbp-18h] BYREF
  float left; // [rsp+5Ch] [rbp-14h] BYREF
  HWND v16[2]; // [rsp+60h] [rbp-10h] BYREF
  CSnapComponentTelemetry *v17; // [rsp+80h] [rbp+10h] BYREF

  v17 = this;
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v8 = a3->bottom - a3->top;
    top = (float)a3->top;
    LODWORD(v17) = a4;
    v16[0] = a2;
    v10 = _mm_cvtsi32_si128(v8);
    v11 = a3->right - a3->left;
    v14 = top;
    v12 = _mm_cvtepi32_ps(v10).m128_u32[0];
    v13 = (float)v11;
    left = (float)a3->left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v7,
      (int)&unk_1806C8E6C,
      0,
      0,
      (__int64)v16,
      (__int64)&left,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v17);
  }
}
