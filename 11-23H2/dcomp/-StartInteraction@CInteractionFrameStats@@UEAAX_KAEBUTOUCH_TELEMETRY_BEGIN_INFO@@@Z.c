/*
 * XREFs of ?StartInteraction@CInteractionFrameStats@@UEAAX_KAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x1801A6190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionFrameStats::StartInteraction(
        CInteractionFrameStats *this,
        __int64 a2,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a3)
{
  *((_QWORD *)this - 7) = *(_QWORD *)a3;
  *((_WORD *)this - 24) = *((_WORD *)a3 + 4);
  *((_WORD *)this - 23) = *((_WORD *)a3 + 5);
  *((_DWORD *)this - 11) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this - 9) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this - 7) = *((_DWORD *)a3 + 12);
  *(_OWORD *)((char *)this - 24) = 0LL;
  CCompFrameStats::StartCollection((CInteractionFrameStats *)((char *)this - 352), a2);
}
