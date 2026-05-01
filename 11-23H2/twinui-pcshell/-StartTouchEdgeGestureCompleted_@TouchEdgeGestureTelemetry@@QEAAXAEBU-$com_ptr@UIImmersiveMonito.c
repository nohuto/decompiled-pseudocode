/*
 * XREFs of ?StartTouchEdgeGestureCompleted_@TouchEdgeGestureTelemetry@@QEAAXAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@_N@Z @ 0x18064DB74
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TouchEdgeGestureTelemetry::StartTouchEdgeGestureCompleted_(__int64 a1, _QWORD *a2, char a3)
{
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // rcx
  const char *v8; // r9
  ULONG v9; // [rsp+20h] [rbp-D8h]
  char v10; // [rsp+30h] [rbp-C8h] BYREF
  int v11; // [rsp+34h] [rbp-C4h]
  int v12; // [rsp+38h] [rbp-C0h] BYREF
  int v13; // [rsp+3Ch] [rbp-BCh] BYREF
  int v14; // [rsp+40h] [rbp-B8h] BYREF
  int v15; // [rsp+44h] [rbp-B4h] BYREF
  int v16; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-98h] BYREF
  char *v19; // [rsp+80h] [rbp-78h]
  int v20; // [rsp+88h] [rbp-70h]
  int v21; // [rsp+8Ch] [rbp-6Ch]
  int *v22; // [rsp+90h] [rbp-68h]
  int v23; // [rsp+98h] [rbp-60h]
  int v24; // [rsp+9Ch] [rbp-5Ch]
  int *v25; // [rsp+A0h] [rbp-58h]
  int v26; // [rsp+A8h] [rbp-50h]
  int v27; // [rsp+ACh] [rbp-4Ch]
  int *v28; // [rsp+B0h] [rbp-48h]
  int v29; // [rsp+B8h] [rbp-40h]
  int v30; // [rsp+BCh] [rbp-3Ch]
  int *v31; // [rsp+C0h] [rbp-38h]
  int v32; // [rsp+C8h] [rbp-30h]
  int v33; // [rsp+CCh] [rbp-2Ch]
  int *v34; // [rsp+D0h] [rbp-28h]
  int v35; // [rsp+D8h] [rbp-20h]
  int v36; // [rsp+DCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( *a2 )
  {
    try
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x63,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v5,
          v9);
      v17 = 0LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v17);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x65,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v6,
          v9);
      v7 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                       (__int64)retaddr,
                       (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
      if ( *v7 > 5u )
      {
        v12 = HIDWORD(v17);
        v13 = DWORD2(v17);
        v14 = DWORD1(v17);
        v15 = v17;
        v16 = v11;
        v10 = a3;
        v34 = &v12;
        v35 = 4;
        v36 = 0;
        v31 = &v13;
        v32 = 4;
        v33 = 0;
        v28 = &v14;
        v29 = 4;
        v30 = 0;
        v25 = &v15;
        v26 = 4;
        v27 = 0;
        v22 = &v16;
        v23 = 4;
        v24 = 0;
        v19 = &v10;
        v20 = 1;
        v21 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_180870FDD, 0LL, 0LL, 8u, &v18);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        v8);
    }
  }
}
