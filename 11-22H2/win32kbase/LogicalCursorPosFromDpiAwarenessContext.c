/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x1C0059D20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     Is_MonitorFromPointSupported @ 0x1C0059E6C (Is_MonitorFromPointSupported.c)
 *     ScaleDPIPt @ 0x1C0059E98 (ScaleDPIPt.c)
 *     GetMonitorRectForDpi @ 0x1C005A3D8 (GetMonitorRectForDpi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  _QWORD *v10; // r14
  __int64 v11; // rax
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  CurrentThreadDpiAwarenessContext = a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( !v6 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( !v7 )
    return 0LL;
  v8 = *(_DWORD *)(v7 + 68) >> 8;
  v16 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)v8) & 0x1FF) == 0 )
    return *(_QWORD *)(v7 + 60);
  v10 = gpsi;
  if ( !CurrentThreadDpiAwarenessContext )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
    return v10[620];
  if ( qword_1C0296030 )
    v5 = qword_1C0296030(v10[620], 2LL, 18LL);
  v11 = *(_QWORD *)(v5 + 40);
  v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  v13 = *(_WORD *)(v11 + 60);
  v14 = *(_OWORD *)(v11 + 28);
  GetMonitorRectForDpi(v15, v5, v12);
  ScaleDPIPt((unsigned int)&v16, (_DWORD)v10 + 4960, v12, v13, v15[0], v14);
  return v16;
}
