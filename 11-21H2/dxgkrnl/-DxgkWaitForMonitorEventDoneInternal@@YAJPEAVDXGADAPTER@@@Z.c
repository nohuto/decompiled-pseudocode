/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C01D2BF4
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2560 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01D2D48 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C01D2D84 (MonitorAcquireMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this)
{
  int v2; // eax
  void *v3; // rbx
  __int64 v4; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[144]; // [rsp+60h] [rbp-A8h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, this, 0LL);
    if ( *((_QWORD *)this + 349) )
    {
      v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL);
      if ( v2 < 0 )
      {
        v7 = v2;
      }
      else
      {
        v3 = (void *)*((_QWORD *)this + 27);
        ObfReferenceObject(v3);
        v4 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v3);
        if ( (int)v4 < 0 )
        {
          WdLogSingleEntry1(2LL, v4);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            v4,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v10);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v6 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v4 = v6;
          if ( v6 == 258 )
          {
            WdLogSingleEntry1(3LL, 2151LL);
          }
          else if ( v6 < 0 )
          {
            WdLogSingleEntry1(2LL, v6);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
              v4,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
        v7 = v4;
      }
    }
    else
    {
      v7 = -1073741637;
      WdLogSingleEntry2(2LL, this, -1073741637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkWaitForMonitorEventDoneInternal is called on a render only adapter 0x%I64x, returning 0x%I64x!",
        (__int64)this,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, 0LL);
  }
  return v7;
}
