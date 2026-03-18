/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C0166AC0
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C0155200 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     HMDestroyUnlockedObject @ 0x1C00D0380 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(int a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT *v4; // r9
  char v5; // di
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  struct _HANDLEENTRY *v12; // rbp
  struct tagTHREADINFO *v13; // r15
  __int64 v14; // rbx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx

  v4 = &WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
  {
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      16,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
    v4 = &WPP_GLOBAL_Control;
  }
  v6 = gptiCurrent;
  v7 = 0LL;
  if ( (*((_DWORD *)gptiCurrent + 314) & 0x1000000) != 0 )
  {
    v9 = HMValidateHandleNoSecure(a1, 23);
    if ( v9 )
    {
      if ( !gbInDestroyHandleTableObjects
        && !UserIsUserCritSecInExclusive()
        && (!IS_USERCRIT_OWNED_SHARED()
         || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      v12 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68
                                  + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v9);
      v13 = (struct tagTHREADINFO *)*((_QWORD *)gpKernelHandleTable
                                    + 3
                                    * ((__int64)(dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v9) >> 5)
                                    + 1);
      v14 = *((_QWORD *)v13 + 53);
      if ( PsGetCurrentProcessWin32Process(3 * ((__int64)(dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v9) >> 5)) == v14
        && v6 == v13 )
      {
        if ( (*((_BYTE *)v12 + 25) & 1) == 0 )
        {
          v7 = *(_QWORD *)(v9 + 56);
          *(_QWORD *)(v9 + 56) = 0LL;
          HMDestroyUnlockedObject(v12, v8, v10);
          goto LABEL_70;
        }
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v8 || (_BYTE)v10 )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v10,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            11,
            17,
            (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
            a1);
        v17 = 4317LL;
      }
      else
      {
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v8 || (_BYTE)v10 )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v10,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            11,
            18,
            (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
            a1);
        v17 = 5LL;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v8 || (_BYTE)v10 )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          5,
          11,
          19,
          (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
          a1);
      v17 = 6LL;
    }
    UserSetLastError(v17, v8, v10, v11);
    goto LABEL_70;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      11,
      20,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
      (char)gptiCurrent);
  UserSetLastError(4317LL, a2, a3, (__int64)v4);
LABEL_70:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v15 || v5 )
  {
    LOBYTE(v16) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      21,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
  }
  return v7;
}
