/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180046400 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029388 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180045A2C (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K0@Z @ 0x180046C30 (-Trace@CFrameInfo@@QEAAXK_K0@Z.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180046C84 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180047430 (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004750C (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004781C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18004820C (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x1800490F0 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800492C0 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x1800493F8 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800B1EF8 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800B1FD8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18012E508 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x18012E650 (McTemplateU0xqqq_EventWriteTransfer.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x18012E93A (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1802721F8 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x180272948 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(CPartitionVerticalBlankScheduler *this, __int64 a2)
{
  volatile struct IUnknown *volatile v3; // rbx
  char v4; // al
  __int64 v5; // rbx
  bool v6; // al
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  BOOL v11; // ebx
  void *v12; // rcx
  __int64 v13; // rdx
  CProcessResourceAttributionReporter *v14; // rbx
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v16; // rbx
  ULONGLONG v17; // rax
  unsigned __int64 v18; // rcx
  struct ID2D1Bitmap *v19; // rcx
  bool v20; // [rsp+40h] [rbp-58h] BYREF
  struct ID2D1Bitmap *v21; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v23; // [rsp+60h] [rbp-38h]
  char v24; // [rsp+61h] [rbp-37h]
  struct ID3D11Texture2D *v25[2]; // [rsp+68h] [rbp-30h] BYREF

  *(_BYTE *)(*((_QWORD *)this + 526) + 208LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0xqqq_EventWriteTransfer(this, a2, *((_QWORD *)this + 526));
  while ( 1 )
  {
    v3 = g_pDebugInspectSurface;
    if ( !g_pDebugInspectSurface )
      break;
    v21 = 0LL;
    v25[0] = 0LL;
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))g_pDebugInspectSurface->lpVtbl->QueryInterface)(
           g_pDebugInspectSurface,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           v25) < 0 )
    {
      v19 = v21;
      v21 = 0LL;
      if ( v19 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v19 + 16LL))(v19);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v3->lpVtbl->QueryInterface)(
             v3,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v21) >= 0 )
        DebugInspectBitmap(v21);
    }
    else
    {
      DebugInspectTexture(v25[0], 0);
    }
    if ( g_pDebugInspectSurface == v3 )
    {
      g_pDebugInspectSurface = 0LL;
      __debugbreak();
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v25);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PROCESS_FRAME_Start);
  CTelemetryFrames::FrameRenderingStarted(*(_QWORD *)(*((_QWORD *)this + 526) + 72LL));
  CPartitionVerticalBlankScheduler::ComputeFrameTime(this);
  v22[0] = *((_QWORD *)this + 526);
  v22[1] = (char *)this + 4232;
  v23 = *((_BYTE *)this + 4548);
  v4 = *((_BYTE *)this + 4550);
  *((_BYTE *)this + 4550) = 0;
  v24 = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Start);
  v5 = *((_QWORD *)this + 8);
  v20 = 0;
  *(_QWORD *)(v5 + 488) = v22;
  *(_DWORD *)(v5 + 1112) = 0;
  CComposition::ProcessComposition((CComposition *)v5, &v20);
  v6 = v20;
  *(_QWORD *)(v5 + 488) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 526) + 168LL) = v6;
  v7 = (v23 | *((_BYTE *)this + 4548)) == 0;
  *((_BYTE *)this + 4548) |= v23;
  if ( !v7 )
    *((_BYTE *)this + 4549) = *(_DWORD *)(*((_QWORD *)this + 8) + 472LL) == 0;
  v8 = *((_QWORD *)this + 526);
  if ( !*(_BYTE *)(v8 + 168) || *(_BYTE *)(v8 + 169) )
    CComposition::FlushChannels(*((CComposition **)this + 8));
  v9 = *((_QWORD *)this + 526);
  if ( !*(_BYTE *)(v9 + 168) || (v10 = 1LL, *(_BYTE *)(v9 + 169)) )
    v10 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Stop, v10);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime((LARGE_INTEGER *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx_EventWriteTransfer(
      *((_QWORD *)this + 1167),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 1166) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 1166) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 1166) - *((_QWORD *)this + 1165)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 1166) - *((_QWORD *)this + 1165)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 1166),
      *((_QWORD *)this + 1167),
      *((_QWORD *)this + 1164));
  *(_QWORD *)(*((_QWORD *)this + 526) + 80LL) = *((_QWORD *)this + 1166);
  v11 = CPartitionVerticalBlankScheduler::PresentFrame(
          this,
          *((struct CFrameInfo **)this + 526),
          *((_DWORD *)this + 1048));
  *(_QWORD *)(*((_QWORD *)this + 8) + 504LL) = *(_QWORD *)(*((_QWORD *)this + 8) + 496LL);
  v12 = *(void **)(*((_QWORD *)this + 7) + 16LL);
  if ( v12 )
    PulseEvent(v12);
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 526), *((_DWORD *)this + 1048));
  v13 = *((_QWORD *)this + 526);
  CTelemetryFrameStatistics::UpdateFrameStatistics(
    (CPartitionVerticalBlankScheduler *)((char *)this + 4560),
    *(_QWORD *)(v13 + 72),
    *(_QWORD *)(v13 + 88),
    *(_QWORD *)(v13 + 232),
    *(_DWORD *)(v13 + 36),
    *(_DWORD *)(v13 + 40),
    *(_BYTE *)(v13 + 169));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME,
      1,
      v11,
      *(_BYTE *)(*((_QWORD *)this + 526) + 224LL) != 0,
      0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop);
  }
  CProcessAttributionReporter::Report(qword_1803E5CA8);
  v14 = qword_1803E5CB0;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - *(_QWORD *)v14 >= 0x3E8 )
  {
    *(_QWORD *)v14 = TickCount64;
    CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v14);
  }
  v16 = qword_1803E5CA0;
  v17 = GetTickCount64();
  v18 = v17 - *(_QWORD *)v16;
  if ( v18 >= 0x3E8 )
  {
    *((_DWORD *)v16 + 2) = v18;
    *(_QWORD *)v16 = v17;
    CEnergyReporter::SendReportToE3(v16);
  }
}
