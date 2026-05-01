/*
 * XREFs of ?ReportTouchEdgePerformed_@TouchEdgeGestureTelemetry@@QEAAXIAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@@Z @ 0x180655688
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180652A40 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACE38 (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TouchEdgeGestureTelemetry::ReportTouchEdgePerformed_(__int64 a1, int a2, _QWORD *a3)
{
  LANGID ThreadUILanguage_0; // ax
  bool v6; // si
  __int64 v7; // r9
  __int64 *v8; // rax
  const char *v9; // r9
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  bool v14; // al
  ULONG v16; // [rsp+20h] [rbp-C8h]
  bool v17; // [rsp+30h] [rbp-B8h] BYREF
  char v18; // [rsp+31h] [rbp-B7h] BYREF
  bool v19; // [rsp+32h] [rbp-B6h] BYREF
  int v20; // [rsp+34h] [rbp-B4h] BYREF
  int v21; // [rsp+38h] [rbp-B0h] BYREF
  int v22; // [rsp+3Ch] [rbp-ACh] BYREF
  int v23; // [rsp+40h] [rbp-A8h] BYREF
  int v24; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v25; // [rsp+48h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+50h] [rbp-98h] BYREF
  int *v27; // [rsp+70h] [rbp-78h]
  int v28; // [rsp+78h] [rbp-70h]
  int v29; // [rsp+7Ch] [rbp-6Ch]
  bool *v30; // [rsp+80h] [rbp-68h]
  int v31; // [rsp+88h] [rbp-60h]
  int v32; // [rsp+8Ch] [rbp-5Ch]
  char *v33; // [rsp+90h] [rbp-58h]
  int v34; // [rsp+98h] [rbp-50h]
  int v35; // [rsp+9Ch] [rbp-4Ch]
  int *v36; // [rsp+A0h] [rbp-48h]
  int v37; // [rsp+A8h] [rbp-40h]
  int v38; // [rsp+ACh] [rbp-3Ch]
  int *v39; // [rsp+B0h] [rbp-38h]
  int v40; // [rsp+B8h] [rbp-30h]
  int v41; // [rsp+BCh] [rbp-2Ch]
  __int64 *v42; // [rsp+C0h] [rbp-28h]
  int v43; // [rsp+C8h] [rbp-20h]
  int v44; // [rsp+CCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v6 = (unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0;
    v17 = 0;
    v18 = 0;
    LODWORD(v8) = wil::wnf_query_nothrow<bool>((__int64)&WNF_TMCN_ISTABLETPOSTURE, (char *)&v17, (__int64)&v18, v7);
    if ( (int)v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB5,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v8,
        v16);
    if ( *a3 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a3 + 24LL))(*a3, &v21);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB9,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v10,
          v16);
      v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a3 + 80LL))(*a3, &v20);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBB,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v11,
          v16);
      v8 = wil::details::static_lazy<TouchGestureLogging>::get(
             (__int64)retaddr,
             (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
      v12 = (_DWORD *)v8[1];
      if ( *v12 > 5u )
      {
        LOBYTE(v8) = tlgKeywordOn((__int64)v12, 0x400000000000LL);
        if ( (_BYTE)v8 )
        {
          v25 = 0x2000000LL;
          v22 = v20;
          v23 = v21;
          v14 = v17 && v18;
          v17 = v14;
          v19 = v6;
          v24 = a2;
          v42 = &v25;
          v43 = 8;
          v44 = 0;
          v39 = &v22;
          v40 = 4;
          v41 = 0;
          v36 = &v23;
          v37 = 4;
          v38 = 0;
          v33 = (char *)&v17;
          v34 = 1;
          v35 = 0;
          v30 = &v19;
          v31 = 1;
          v32 = 0;
          v27 = &v24;
          v28 = 4;
          v29 = 0;
          LOBYTE(v8) = tlgWriteTransfer_EventWriteTransfer(v13, (unsigned __int8 *)dword_18087140A, 0LL, 0LL, 8u, &v26);
        }
      }
    }
  }
  catch ( ... )
  {
    LOBYTE(v8) = wil::details::in1diag3::Log_CaughtException(
                   retaddr,
                   (void *)0xC6,
                   (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
                   v9);
  }
  return (char)v8;
}
