/*
 * XREFs of EditionIVSyncForeground @ 0x1C01CED10
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 */

void __fastcall EditionIVSyncForeground(HWND a1)
{
  bool v2; // dl
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // [rsp+60h] [rbp+8h] BYREF

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      88,
      4,
      2,
      88,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (char)a1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  IVContainerForegroundSync::windowToForeground = a1;
  WakeRIT(0x100u);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5, v3, v4);
}
