/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1C01B59EC
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0181490 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1C0186420 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C019A1EC (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C01B2B84 (rimObsCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddq @ 0x1C01B2E94 (WPP_RECORDER_AND_TRACE_SF_dddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C01B2FAC (WPP_RECORDER_AND_TRACE_SF_qD.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 v5; // r15
  unsigned int v6; // r14d
  char v8; // bl
  int v9; // edx
  int v10; // esi
  int v11; // r8d
  _DWORD *v12; // rdi
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // r13d
  unsigned int v17; // ecx
  __int64 v18; // r9
  int v19; // ebp
  int v21; // [rsp+20h] [rbp-78h]
  int v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qD(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a4);
  }
  Object = 0LL;
  v10 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v10 >= 0 )
  {
    RIMLockExclusive((__int64)&gInputObserverLock);
    v12 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v15 = v12[28];
    v16 = v12[27];
    v17 = v12[29];
    LODWORD(Object) = v15;
    if ( a4 >= 0x30 )
    {
      v12[27] = 3;
      v12[28] = 0;
      if ( rimObsCheckForRegistrationConflicts(v6, v16, v15, v17) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v8 = 0;
        }
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = (int)Object;
        }
        else
        {
          v19 = (int)Object;
          WPP_RECORDER_AND_TRACE_SF_dddq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v8,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v18,
            v21,
            v22,
            v23,
            v24);
        }
        v12[27] = v16;
        v12[28] = v19;
        v12[30] = v6;
        if ( v5 )
        {
          *((_QWORD *)v12 + 12) = v5;
          v12[26] = a4;
        }
        goto LABEL_40;
      }
      v10 = -1073741823;
    }
    else
    {
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          40,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
          a4);
      }
      v10 = -1073741789;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = v8;
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        42,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
        (char)Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_40:
    *((_QWORD *)v12 + 23) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 44, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
    qword_1C029A158 = 0LL;
    ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v10;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = v8;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      43,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      (char)Handle);
  }
  return (unsigned int)v10;
}
