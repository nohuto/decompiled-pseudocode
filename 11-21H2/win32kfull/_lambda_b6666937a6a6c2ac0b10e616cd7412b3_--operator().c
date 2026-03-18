/*
 * XREFs of _lambda_b6666937a6a6c2ac0b10e616cd7412b3_::operator() @ 0x1C015AA08
 * Callers:
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209BA0 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C00B2180 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 */

__int64 __fastcall lambda_b6666937a6a6c2ac0b10e616cd7412b3_::operator()(__int64 a1)
{
  __int64 result; // rax
  char v3; // dl
  char v4; // dl
  char v5; // dl
  char v6; // dl
  char v7; // dl
  char v8; // dl
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v3 = 1;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (__int64)WPP_RECORDER_AND_TRACE_SF_dddddd(
                        (__int64)WPP_GLOBAL_Control->AttachedDevice,
                        v3,
                        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                        4u,
                        1u,
                        0x1Eu,
                        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
                        *(_DWORD *)(*(_QWORD *)a1 + 120LL),
                        *(_DWORD *)(*(_QWORD *)a1 + 124LL),
                        *(_DWORD *)(*(_QWORD *)a1 + 128LL),
                        *(_DWORD *)(*(_QWORD *)a1 + 132LL),
                        *(_DWORD *)(*(_QWORD *)a1 + 128LL) - *(_DWORD *)(*(_QWORD *)a1 + 120LL),
                        *(_DWORD *)(*(_QWORD *)a1 + 132LL) - *(_DWORD *)(*(_QWORD *)a1 + 124LL));
  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v4 = 1;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 268LL);
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)a1 + 264LL);
    result = WPP_RECORDER_AND_TRACE_SF_dd(
               (__int64)WPP_GLOBAL_Control->AttachedDevice,
               v4,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
               4u,
               1u,
               0x1Fu,
               (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
               v9,
               v10);
  }
  v5 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v5 = 1;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 108LL);
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)a1 + 104LL);
    result = WPP_RECORDER_AND_TRACE_SF_dd(
               (__int64)WPP_GLOBAL_Control->AttachedDevice,
               v5,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
               4u,
               1u,
               0x20u,
               (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
               v9,
               v10);
  }
  v6 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v6 = 1;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 116LL);
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)a1 + 112LL);
    result = WPP_RECORDER_AND_TRACE_SF_dd(
               (__int64)WPP_GLOBAL_Control->AttachedDevice,
               v6,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
               4u,
               1u,
               0x21u,
               (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
               v9,
               v10);
  }
  v7 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v7 = 1;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 192LL);
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)a1 + 188LL);
    result = WPP_RECORDER_AND_TRACE_SF_dd(
               (__int64)WPP_GLOBAL_Control->AttachedDevice,
               v7,
               WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
               (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
               4u,
               1u,
               0x22u,
               (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
               v9,
               v10);
  }
  v8 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      v8 = 1;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 172LL);
    LODWORD(v9) = *(_DWORD *)(*(_QWORD *)a1 + 168LL);
    return WPP_RECORDER_AND_TRACE_SF_dd(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             v8,
             WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
             (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
             4u,
             1u,
             0x23u,
             (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
             v9,
             v10);
  }
  return result;
}
