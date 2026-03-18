/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C018B2A4
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsParentCommon @ 0x1C018C220 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingMouseDevice(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rdx
  int v12; // eax

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      75,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      v4);
  }
  RIMLockExclusive((__int64)&gObListLock);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = (__int64 *)gObRimDevList;
  v10 = 0;
  *v3 = 0LL;
  while ( v9 != &gObRimDevList )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v9 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 - 2) >> 64))
                   + 0x30) )
    {
      v12 = *(_DWORD *)(((unsigned __int64)(v9 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 - 2) >> 64))
                      + 0xB8);
      if ( (v12 & 0x2000) == 0 && (v12 & 0x400) == 0 )
      {
        v11 = (unsigned __int64)(v9 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(v4, v11, a1, *(unsigned __int16 *)(v11 + 882), *(_WORD *)(v11 + 884)) )
        {
          RawInputManagerDeviceObjectReference(v9 - 2);
          *v3 = v9 - 2;
          v10 = 1;
          break;
        }
      }
    }
    v9 = (__int64 *)*v9;
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
