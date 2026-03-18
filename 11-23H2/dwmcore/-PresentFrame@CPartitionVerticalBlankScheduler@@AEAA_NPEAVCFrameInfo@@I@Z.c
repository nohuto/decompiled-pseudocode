/*
 * XREFs of ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800492C0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180045A2C (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180045C18 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18004AEE0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x18012E884 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

char __fastcall CPartitionVerticalBlankScheduler::PresentFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3)
{
  char v3; // r15
  CComposition *v7; // rcx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v9; // rax
  unsigned __int64 v11; // rtt
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  char v13; // [rsp+50h] [rbp-48h]
  char v14; // [rsp+51h] [rbp-47h]

  v3 = 0;
  if ( *((_BYTE *)a2 + 168) && !*((_BYTE *)a2 + 169) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v11 = *((_QWORD *)this + 1166);
      McTemplateU0xxxxq_EventWriteTransfer(
        g_qpcFrequency.LowPart,
        10000000 * (v11 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart,
        10000000 * (v11 / g_qpcFrequency.QuadPart)
      + 10000000 * (v11 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart,
        (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 27) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      - (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 30) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      + 10000000 * (*((_QWORD *)a2 + 27) / g_qpcFrequency.QuadPart - *((_QWORD *)a2 + 30) / g_qpcFrequency.QuadPart),
        *((_QWORD *)a2 + 2),
        *((_BYTE *)a2 + 8) - 1);
    }
    v7 = (CComposition *)*((_QWORD *)this + 8);
    v12[1] = (char *)this + 4232;
    v13 = *((_BYTE *)this + 4548);
    v14 = *((_BYTE *)this + 4550);
    v12[0] = a2;
    if ( !(unsigned int)CComposition::Present(v7, (struct FRAME_TIME_INFO *)v12) )
    {
      *((_BYTE *)a2 + 169) = 1;
      PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8) + 216LL));
      if ( PrimaryMonitorTarget )
        *((_DWORD *)a2 + 8) = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 80LL))(PrimaryMonitorTarget);
      v9 = *((_QWORD *)this + 1166);
      *((_DWORD *)this + 1050) = a3;
      *((_QWORD *)a2 + 11) = v9;
      ++*((_QWORD *)this + 1164);
    }
    CComposition::FlushChannels(*((CComposition **)this + 8));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PRESENT_Stop);
    v3 = 1;
    *((_BYTE *)this + 4548) |= v13;
  }
  return v3;
}
