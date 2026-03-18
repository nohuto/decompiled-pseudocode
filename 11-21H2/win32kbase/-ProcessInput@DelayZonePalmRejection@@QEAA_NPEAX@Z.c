/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01D0B94 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CB070 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C01DB01C (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01E1AF0 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E5A70 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01E5E30 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C01E6EF8 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddd @ 0x1C01E7210 (WPP_RECORDER_AND_TRACE_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C01F7EF4 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01F7F88 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(
        LARGE_INTEGER *this,
        signed __int64 LowPart,
        __int64 a3,
        unsigned __int64 a4)
{
  struct CPointerInputFrame *v4; // r13
  char v6; // di
  unsigned int v7; // eax
  bool v8; // cl
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned int v10; // r12d
  unsigned __int8 v11; // si
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v13; // r15
  int v14; // eax
  LARGE_INTEGER v15; // rax
  int v16; // eax
  LONG HighPart; // eax
  LARGE_INTEGER v18; // rcx
  int v19; // r14d
  LARGE_INTEGER v20; // rax
  int v21; // eax
  struct tagPOINT v22; // r9
  struct tagPOINT v23; // r8
  void *v24; // rdx
  bool v25; // al
  unsigned __int8 v26; // r10
  bool v27; // r14
  LARGE_INTEGER v28; // rcx
  int v29; // r14d
  unsigned int v30; // ecx
  LONGLONG v31; // r14
  CHidInput *v32; // rcx
  CHidInput *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  LARGE_INTEGER v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  bool v40; // zf
  int v41; // edx
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+30h] [rbp-D8h]
  int v45; // [rsp+38h] [rbp-D0h]
  int v46; // [rsp+40h] [rbp-C8h]
  __int64 v47; // [rsp+50h] [rbp-B8h]
  char v48; // [rsp+58h] [rbp-B0h]
  char v49; // [rsp+58h] [rbp-B0h]
  bool v50[4]; // [rsp+78h] [rbp-90h] BYREF
  int v51; // [rsp+7Ch] [rbp-8Ch]
  int v52; // [rsp+80h] [rbp-88h]
  BOOL v53; // [rsp+84h] [rbp-84h]
  BOOL v54; // [rsp+88h] [rbp-80h]
  LARGE_INTEGER v55; // [rsp+90h] [rbp-78h]
  unsigned int v56; // [rsp+98h] [rbp-70h]
  struct tagPOINTER_INFO *v57[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-40h]
  _OWORD v60[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v61[2]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = (struct CPointerInputFrame *)LowPart;
  v6 = 1;
  LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      LowPart,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      13,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      this->HighPart);
  v7 = *((_DWORD *)v4 + 12);
  v8 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v50[1] = 0;
  v57[0] = 0LL;
  LOBYTE(LowPart) = 0;
  LOBYTE(v53) = 0;
  v10 = 0;
  LOBYTE(v54) = 0;
  v55.QuadPart = 0LL;
  v11 = 1;
  v50[0] = 0;
  v50[2] = 0;
  LOBYTE(v51) = 0;
  v52 = 0;
  v56 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, v4, v10);
      v13 = PointerInfo;
      if ( PointerInfo )
      {
        v14 = *(_DWORD *)PointerInfo;
        if ( v14 == 3 )
        {
          v15 = this[4];
          if ( !v15.QuadPart )
          {
            v15 = *(LARGE_INTEGER *)((char *)v4 + 64);
            this[4] = v15;
          }
          if ( *((_QWORD *)v4 + 8) != v15.QuadPart )
            goto LABEL_131;
          v50[0] = 1;
          this[6] = KeQueryPerformanceCounter(0LL);
          v16 = *((_DWORD *)v13 + 3);
          if ( (v16 & 1) != 0 )
          {
            HighPart = this[5].HighPart;
            if ( !HighPart )
            {
              v50[2] = 1;
              v57[0] = v13;
            }
            a4 = (unsigned int)(HighPart + 1);
            this[5].HighPart = a4;
            LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dqd(
                WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                HighPart + 1,
                4,
                8,
                14,
                (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
                *((_DWORD *)v13 + 1),
                this[4].QuadPart,
                HighPart + 1);
            v18 = this[16];
            if ( v18.QuadPart )
            {
              v19 = v52;
              memset(v60, 0, sizeof(v60));
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
                (LARGE_INTEGER)v18.QuadPart,
                0xFFFFFFFFLL,
                v60,
                v13,
                v52);
              v52 = v19 + 1;
            }
          }
          else if ( (v16 & 2) == 0 )
          {
            LowPart = (unsigned int)this[5].HighPart;
            if ( (_DWORD)LowPart )
            {
              LowPart = (unsigned int)(LowPart - 1);
              this[5].HighPart = LowPart;
            }
            LOBYTE(a4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)a4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v48 = LowPart;
              LOBYTE(LowPart) = a4;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                a4,
                4,
                8,
                15,
                (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
                *((_DWORD *)v13 + 1),
                this[4].QuadPart,
                v48);
            }
          }
          PerformanceCounter = v55;
          if ( (*((_DWORD *)v13 + 3) & 0x8000) != 0 )
            LOBYTE(v51) = 1;
          goto LABEL_62;
        }
        if ( v14 != 2 )
          goto LABEL_131;
        v20 = this[2];
        if ( !v20.QuadPart )
        {
          v20 = *(LARGE_INTEGER *)((char *)v4 + 64);
          this[2] = v20;
        }
        if ( *((_QWORD *)v4 + 8) != v20.QuadPart )
          goto LABEL_131;
        v50[1] = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v55 = PerformanceCounter;
        v21 = *((_DWORD *)v13 + 3);
        if ( (v21 & 0x10000) == 0 )
        {
          if ( (v21 & 0x40000) != 0 )
          {
            LowPart = this[5].LowPart;
            if ( (_DWORD)LowPart )
            {
              LowPart = (unsigned int)(LowPart - 1);
              this[5].LowPart = LowPart;
            }
            LOBYTE(a4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)a4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v49 = LowPart;
              LOBYTE(LowPart) = a4;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                a4,
                4,
                8,
                17,
                (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
                *((_DWORD *)v13 + 1),
                this[2].QuadPart,
                v49);
            }
          }
          goto LABEL_62;
        }
        ++this[5].LowPart;
        v22 = (struct tagPOINT)*((_QWORD *)v13 + 7);
        v23 = (struct tagPOINT)*((_QWORD *)v13 + 6);
        v24 = (void *)*((_QWORD *)v13 + 2);
        v50[3] = 0;
        v58 = 0LL;
        v59 = 0LL;
        v25 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                v24,
                v23,
                v22,
                &v50[3],
                (struct CDelayZonePanelTelemetryData *)&v58);
        v26 = v54;
        v27 = v25;
        if ( !v54 )
        {
          v26 = v25;
          v54 = v25;
        }
        a4 = v53;
        if ( !v53 )
        {
          a4 = !v25;
          v53 = !v25;
        }
        LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dqddd(
            WPP_GLOBAL_Control->AttachedDevice,
            LowPart,
            a3,
            v26,
            v43,
            v44,
            v45,
            v46,
            *((_DWORD *)v13 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v26,
            a4);
        v28 = this[16];
        if ( v28.QuadPart && v27 )
        {
          v29 = v52;
          v61[0] = v58;
          v61[1] = v59;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
            (LARGE_INTEGER)v28.QuadPart,
            v50[3],
            v61,
            v13,
            v52);
          v52 = v29 + 1;
        }
      }
      PerformanceCounter = v55;
LABEL_62:
      if ( ++v10 >= v56 )
      {
        v8 = v50[1];
        LOBYTE(LowPart) = v50[0];
        break;
      }
    }
  }
  if ( LOBYTE(this->LowPart) )
  {
    if ( v8 )
    {
      v30 = this[13].HighPart;
      if ( v30 )
      {
        v31 = PerformanceCounter.QuadPart - this[6].QuadPart;
        LowPart = (unsigned __int64)(1000 * v31) % gliQpcFreq.QuadPart;
        a4 = (unsigned __int64)(1000 * v31) / gliQpcFreq.QuadPart;
        if ( (unsigned int)a4 > v30 )
        {
          LOBYTE(this->LowPart) = 0;
          LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_L(
              WPP_GLOBAL_Control->AttachedDevice,
              LowPart,
              a3,
              (unsigned int)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
              4,
              8,
              19,
              (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
              a4);
        }
      }
    }
  }
  else if ( (_BYTE)LowPart )
  {
    LOBYTE(this->LowPart) = 1;
    LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        LowPart,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        18,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  }
  v32 = (CHidInput *)(unsigned int)this->HighPart;
  if ( (_DWORD)v32 )
  {
    v33 = (CHidInput *)(unsigned int)((_DWORD)v32 - 1);
    if ( (_DWORD)v33 )
    {
      if ( (_DWORD)v33 == 1 && !this[5].HighPart && !this[5].LowPart && !(_BYTE)v51 )
      {
        this[4].QuadPart = 0LL;
        this[2].QuadPart = 0LL;
        this->HighPart = 0;
      }
      goto LABEL_131;
    }
    if ( v50[0] && v50[2] )
    {
      if ( LOBYTE(this[1].LowPart) == 1 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v33, 1, 0);
        LOBYTE(this[1].LowPart) = 0;
      }
      DelayZonePalmRejection::SuppressDeadzoneContacts(
        (DelayZonePalmRejection *)this,
        (const struct DEVICE_OUTPUT_CONFIG *)(*((_QWORD *)v4 + 32) + 156LL),
        v57[0]);
      DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, v34, v35, v36);
      v37 = this[16];
      if ( v37.QuadPart )
      {
        v38 = (unsigned int)this->HighPart;
LABEL_122:
        v39 = 1LL;
        goto LABEL_123;
      }
    }
    else if ( v50[1] )
    {
      if ( v53 )
      {
        if ( LOBYTE(this[1].LowPart) == 1 )
        {
          CHidInput::HandleDelayZonePalmRejectionTimer(v33, 1, 0);
          LOBYTE(this[1].LowPart) = 0;
        }
        DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, LowPart, a3, a4);
      }
      else
      {
        this[8].QuadPart = (LONGLONG)v4;
        v11 = 0;
      }
      v37 = this[16];
      if ( v37.QuadPart )
      {
        v38 = (unsigned int)this->HighPart;
        v39 = 0LL;
LABEL_123:
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
          (LARGE_INTEGER)v37.QuadPart,
          v38,
          v39);
      }
    }
  }
  else
  {
    if ( !LOBYTE(this->LowPart) )
      goto LABEL_130;
    if ( v50[0] && v50[2] )
    {
      v37 = this[16];
      this->HighPart = 2;
      if ( !v37.QuadPart )
        goto LABEL_131;
      v38 = 2LL;
      goto LABEL_122;
    }
    if ( !v50[1] || !v54 )
    {
LABEL_130:
      this->HighPart = 2;
      goto LABEL_131;
    }
    CHidInput::HandleDelayZonePalmRejectionTimer(v32, 0, this[12].HighPart);
    LOBYTE(this[1].LowPart) = 1;
    v40 = this[3].QuadPart == 0;
    this[7].QuadPart = (LONGLONG)v4;
    this[8].QuadPart = (LONGLONG)v4;
    if ( v40 )
    {
      v57[0] = (struct tagPOINTER_INFO *)&this[3];
      v57[1] = *((struct tagPOINTER_INFO **)gpKernelHandleTable + 3 * (unsigned __int16)this[2].LowPart);
      HMAssignmentLock((__int64 **)v57, 0LL);
    }
    v37 = this[16];
    v11 = 0;
    this->HighPart = 1;
    if ( v37.QuadPart )
    {
      v39 = 0LL;
      v38 = 1LL;
      goto LABEL_123;
    }
  }
LABEL_131:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = 20;
    LODWORD(v47) = v11;
    LOBYTE(v41) = v6;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v41,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      20,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      this->HighPart,
      v47);
  }
  return v11;
}
