/*
 * XREFs of ?StartTouchInteraction@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x180008A90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ @ 0x180008E38 (-GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTouchFrameStats::StartTouchInteraction(
        CTouchFrameStats *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2)
{
  unsigned int CurrentBatchId; // eax
  __int64 v5; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  if ( *((_BYTE *)this - 148) )
  {
    if ( !*((_BYTE *)this - 147) && !*((_DWORD *)this + 4) )
    {
      CurrentBatchId = CTouchFrameStats::GetCurrentBatchId((CTouchFrameStats *)((char *)this - 160));
      *((_DWORD *)this + 4) = CurrentBatchId;
      if ( CurrentBatchId )
      {
        *((_QWORD *)this + 17) = *(_QWORD *)a2;
        *((_WORD *)this + 72) = *((_WORD *)a2 + 4);
        *((_WORD *)this + 73) = *((_WORD *)a2 + 5);
        *((_DWORD *)this + 37) = *((_DWORD *)a2 + 3);
        *((_DWORD *)this + 39) = *((_DWORD *)a2 + 4);
        *((_DWORD *)this + 41) = *((_DWORD *)a2 + 12);
        v5 = *((_QWORD *)this - 20);
        *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a2 + 20);
        (*(void (__fastcall **)(char *, _QWORD))(v5 + 24))((char *)this - 160, 0LL);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
}
