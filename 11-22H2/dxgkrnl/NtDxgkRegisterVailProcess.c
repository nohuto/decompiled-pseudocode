/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C03645B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00150D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0024B0C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025738 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C005AAF0 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C006D5C4 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0345934 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0346230 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C036202C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  struct DXGVAILOBJECT *v4; // rsi
  int NumStartedVirtualGpu; // r15d
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // r14
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  struct _KTHREAD **v14; // rdi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v16; // rax
  _QWORD *i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  int v25; // [rsp+50h] [rbp-78h] BYREF
  __int64 v26; // [rsp+58h] [rbp-70h]
  char v27; // [rsp+60h] [rbp-68h]
  _BYTE v28[24]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v29[24]; // [rsp+80h] [rbp-48h] BYREF
  __int128 v30; // [rsp+98h] [rbp-30h] BYREF

  v3 = (__int128 *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2214;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2214);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2214);
  v4 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v30 = *v3;
    Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
    if ( Current )
    {
      KeEnterCriticalRegion();
      v10 = -1073741275;
      v14 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
        (struct _KTHREAD **)Global + 61);
      v16 = (_QWORD *)((char *)DXGGLOBAL::GetGlobal() + 1720);
      for ( i = (_QWORD *)*v16; i != v16; i = (_QWORD *)*i )
      {
        v18 = i[35] - v30;
        if ( !v18 )
          v18 = i[36] - *((_QWORD *)&v30 + 1);
        if ( !v18 )
        {
          v14 = (struct _KTHREAD **)(i - 1);
          break;
        }
      }
      DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v28);
      if ( v14 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, v14 + 8);
        v4 = DXGVIRTUALMACHINE::ReferenceVailObject(v14);
        if ( v4 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v14);
          v10 = 0;
        }
        DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v29);
      }
      if ( v10 >= 0 )
      {
        v23 = DxgkCompositionObject::AccessCheck(v4);
        v10 = v23;
        if ( v23 < 0 )
          WdLogSingleEntry1(3LL, v23);
        if ( v10 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v28);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v30, Current);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30);
          DXGPROCESS::SetVailObject(Current, v4);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v30);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
          *((_DWORD *)v4 + 34) = PsGetCurrentProcessSessionId(v24);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v10);
      }
      if ( !NumStartedVirtualGpu )
      {
        v10 = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = -1071775727LL;
      }
      if ( v4 )
        FlipManagerDwmReleaseFlipManagerObject(v4);
      KeLeaveCriticalRegion();
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( !v27 )
        return (unsigned int)v10;
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    else
    {
      v10 = -1073741786;
      WdLogSingleEntry1(2LL, -1073741786LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context. Returning 0x%I64x",
        -1073741786LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( !v27 )
        return (unsigned int)v10;
      LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    if ( v13 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v25);
    return (unsigned int)v10;
  }
  WdLogSingleEntry1(3LL, 782LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v25);
  }
  return 3221225659LL;
}
