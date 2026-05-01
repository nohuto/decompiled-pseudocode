/*
 * XREFs of ?LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x1800B8E48
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1800B6210 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180061588 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogMonitorData_(__int64 a1, int *a2)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+E0h] [rbp-80h] BYREF
  int v9; // [rsp+E4h] [rbp-7Ch] BYREF
  int v10; // [rsp+E8h] [rbp-78h] BYREF
  int v11; // [rsp+ECh] [rbp-74h] BYREF
  int v12; // [rsp+F0h] [rbp-70h] BYREF
  int v13; // [rsp+F4h] [rbp-6Ch] BYREF
  int v14; // [rsp+F8h] [rbp-68h] BYREF
  int v15; // [rsp+FCh] [rbp-64h] BYREF
  int v16; // [rsp+100h] [rbp-60h] BYREF
  int v17; // [rsp+104h] [rbp-5Ch] BYREF
  int v18; // [rsp+108h] [rbp-58h] BYREF
  int v19; // [rsp+10Ch] [rbp-54h] BYREF
  int v20; // [rsp+110h] [rbp-50h] BYREF
  int v21; // [rsp+114h] [rbp-4Ch] BYREF
  int v22; // [rsp+118h] [rbp-48h] BYREF
  int v23; // [rsp+11Ch] [rbp-44h] BYREF
  int v24; // [rsp+120h] [rbp-40h] BYREF
  int v25; // [rsp+124h] [rbp-3Ch] BYREF
  int v26; // [rsp+128h] [rbp-38h] BYREF
  __int64 v27; // [rsp+130h] [rbp-30h] BYREF
  __int64 v28; // [rsp+150h] [rbp-10h] BYREF
  int v29; // [rsp+160h] [rbp+0h] BYREF
  int v30; // [rsp+168h] [rbp+8h] BYREF

  v28 = a1;
  result = wil::details::static_lazy<SearchAppLauncherLogging>::get(
             a1,
             _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v4 = *(_DWORD **)(result + 8);
  if ( *v4 > 4u )
  {
    result = tlgKeywordOn(v4, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      LODWORD(v28) = a2[20];
      v29 = a2[19];
      v30 = a2[18];
      v8 = a2[17];
      v9 = a2[16];
      v10 = a2[15];
      v11 = a2[14];
      v12 = a2[13];
      v13 = *((unsigned __int8 *)a2 + 49);
      v14 = *((unsigned __int8 *)a2 + 48);
      v15 = a2[7];
      v16 = a2[6];
      v17 = a2[5];
      v18 = a2[4];
      v19 = a2[3];
      v20 = a2[2];
      v21 = a2[1];
      v22 = *a2;
      v23 = a2[11];
      v24 = a2[10];
      v25 = a2[9];
      v26 = a2[8];
      v27 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v5,
               (int)&unk_1808561FF,
               v6,
               v7,
               (__int64)&v26,
               (__int64)&v25,
               (__int64)&v24,
               (__int64)&v23,
               (__int64)&v22,
               (__int64)&v21,
               (__int64)&v20,
               (__int64)&v19,
               (__int64)&v18,
               (__int64)&v17,
               (__int64)&v16,
               (__int64)&v15,
               (__int64)&v14,
               (__int64)&v13,
               (__int64)&v12,
               (__int64)&v11,
               (__int64)&v10,
               (__int64)&v9,
               (__int64)&v8,
               (__int64)&v30,
               (__int64)&v29,
               (__int64)&v28,
               (__int64)&v27);
    }
  }
  return result;
}
