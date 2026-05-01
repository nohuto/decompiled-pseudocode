/*
 * XREFs of ?SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x180663350
 * Callers:
 *     ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180662F50 (-SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV-$com_ptr_t@UIAp.c)
 *     ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x180663058 (-SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18001C4D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

void __fastcall CSnapComponentTelemetry::DragToSnapBar::SnapRegion(
        CSnapComponentTelemetry::DragToSnapBar *this,
        struct tagRECT *a2)
{
  _DWORD *v4; // rcx
  int v5; // ecx
  __m128i v6; // xmm1
  int v7; // r8d
  float bottom; // xmm0_4
  __m128i v9; // xmm0
  __int32 v10; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF
  float v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int32 v13; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int32 v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    {
      v6 = _mm_cvtsi32_si128(a2->right);
      v7 = *((_QWORD *)this + 6) + 8;
      bottom = (float)a2->bottom;
      v11 = 0x2000000LL;
      v12 = bottom;
      v9 = _mm_cvtsi32_si128(a2->top);
      v13 = _mm_cvtepi32_ps(v6).m128_u32[0];
      *(float *)v6.m128i_i32 = (float)a2->left;
      v14 = _mm_cvtepi32_ps(v9).m128_u32[0];
      v10 = v6.m128i_i32[0];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (int)&unk_180872163,
        v7,
        0,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
