/*
 * XREFs of _anonymous_namespace_::ClearTable @ 0x1C010F008
 * Callers:
 *     EditionOnProcessLaunchTimer @ 0x1C007B140 (EditionOnProcessLaunchTimer.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void anonymous_namespace_::ClearTable()
{
  int v0; // edx
  int v1; // r8d
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v2, (struct _EX_PUSH_LOCK *)&unk_1C03377D0);
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v1,
      12,
      4,
      2,
      12,
      (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids);
  }
  memset(&unk_1C0336080, 0, 0xF0uLL);
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
