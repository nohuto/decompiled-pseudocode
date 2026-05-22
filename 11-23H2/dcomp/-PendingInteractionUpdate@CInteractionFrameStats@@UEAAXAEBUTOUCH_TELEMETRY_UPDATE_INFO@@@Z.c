/*
 * XREFs of ?PendingInteractionUpdate@CInteractionFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A5890
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@UTOUCH_TELEMETRY_UPDATE_INFO@@V?$allocator@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@std@@QEAA?A_TAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4FEC (--$emplace_back@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$vector@UTOUCH_TELEMETRY_UPDATE_INFO@@V-$allo.c)
 */

void __fastcall CInteractionFrameStats::PendingInteractionUpdate(
        struct _RTL_CRITICAL_SECTION *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned __int16 OwningThread; // ax

  v2 = this - 7;
  EnterCriticalSection(this - 7);
  if ( BYTE4(this[-9].OwningThread) )
  {
    if ( this[-3].OwningThread == *(HANDLE *)&this[-3].LockCount && this->OwningThread == *(HANDLE *)&this->LockCount )
    {
      LODWORD(this[-1].DebugInfo) = *((_DWORD *)a2 + 46);
      this[-1].LockCount = *((_DWORD *)a2 + 50);
    }
    std::vector<TOUCH_TELEMETRY_UPDATE_INFO>::emplace_back<TOUCH_TELEMETRY_UPDATE_INFO const &>(
      (__int64)&this->LockCount,
      a2);
    OwningThread = (unsigned __int16)this[-2].OwningThread;
    if ( OwningThread <= *((_WORD *)a2 + 94) )
      OwningThread = *((_WORD *)a2 + 94);
    LOWORD(this[-2].OwningThread) = OwningThread;
  }
  LeaveCriticalSection(v2);
}
