/*
 * XREFs of ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800C05C4
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800468C0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800C065C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C06E4 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Reset(CPartitionVerticalBlankScheduler *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Start);
  v2 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x74Bu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8));
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    *((_BYTE *)this + 4550) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Stop);
  }
  return v4;
}
