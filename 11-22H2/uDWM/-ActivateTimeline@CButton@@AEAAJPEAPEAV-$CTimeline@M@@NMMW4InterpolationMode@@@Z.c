/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800ACDA4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18002C1C0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180048C20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800AD25C (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, __int64 *a2, double a3, float a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r8

  v5 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(a1, &UdwmAnimation_Start, 7LL);
  v8 = *a2;
  if ( *a2 )
  {
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(v8 + 32);
    *(double *)(v8 + 24) = a3;
    *(_WORD *)(v8 + 72) = 256;
    CDesktopManager::s_fTimelineDirty = 1;
    return v5;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  if ( !v9 )
  {
    *a2 = 0LL;
    goto LABEL_8;
  }
  CTimelineBase::CTimelineBase(v9, a3, a4, *(float *)&a5, 0);
  *v10 = &CTimeline<float>::`vftable';
  *a2 = (__int64)v10;
  if ( !v10 )
  {
LABEL_8:
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1D5u);
    return v5;
  }
  CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
  return v5;
}
