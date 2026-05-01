/*
 * XREFs of ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x180598E90
 * Callers:
 *     ??$InvalidAppInEnumeration@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUIApplicationViewPosition@@@CSnapComponentTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUIApplicationViewPosition@@@Z @ 0x180598330 (--$InvalidAppInEnumeration@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180069428 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1805984E8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 */

void __fastcall CSnapComponentTelemetry::InvalidAppInEnumeration_(
        CSnapComponentTelemetry *this,
        enum _TABLETMODESTATE *a2,
        struct IApplicationViewPosition *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _DWORD *v8; // rbx
  const unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp+17h] BYREF
  int v13; // [rsp+54h] [rbp+1Bh] BYREF
  int v14; // [rsp+58h] [rbp+1Fh] BYREF
  int v15; // [rsp+5Ch] [rbp+23h] BYREF
  int v16; // [rsp+60h] [rbp+27h] BYREF
  int v17; // [rsp+64h] [rbp+2Bh] BYREF
  const WCHAR *v18; // [rsp+68h] [rbp+2Fh] BYREF
  __int128 v19; // [rsp+70h] [rbp+37h] BYREF

  v12 = 0;
  TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v12, a2);
  v5 = *(_QWORD *)a3;
  v19 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewPosition *, __int128 *))(v5 + 24))(a3, &v19);
  v7 = wil::details::static_lazy<WindowManagementLogging>::get(
         v6,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 5u )
  {
    if ( tlgKeywordOn(v7[1], 0x400000000000LL) )
    {
      v13 = v12;
      v14 = HIDWORD(v19);
      v15 = DWORD2(v19);
      v16 = DWORD1(v19);
      v17 = v19;
      v18 = SQM::CensorAppID((LPCWSTR)a2, v9);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (unsigned __int8 *)dword_1806C9D1F,
        v10,
        v11,
        &v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
