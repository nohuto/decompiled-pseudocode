/*
 * XREFs of NtUserSetCursorPos @ 0x1C01DB500
 * Callers:
 *     <none>
 * Callees:
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C008C400 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C008C668 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A8AB8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 */

__int64 __fastcall NtUserSetCursorPos(unsigned int a1, unsigned int a2)
{
  char v4; // bl
  char v5; // dl
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  char v12; // di
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 *v15; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x14u,
      0x1Fu,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
      a1,
      a2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v15, "SetCursorPos", 0LL);
  EnterCrit(0LL, 0LL);
  v6 = zzzSetCursorPos(a1, a2);
  v11 = v6;
  if ( !v6 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = UserGetLastError();
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v12,
        (__int64)gFullLog,
        2u,
        0x14u,
        0x20u,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
        v14);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v15);
  return v11;
}
