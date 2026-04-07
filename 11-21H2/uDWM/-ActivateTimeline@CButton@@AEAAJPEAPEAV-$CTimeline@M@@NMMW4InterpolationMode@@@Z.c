/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180006870
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, __int64 *a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r8

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(a1, &UdwmAnimation_Start, 7LL, 0LL);
  v6 = *a2;
  if ( !*a2 )
  {
    v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           112LL);
    if ( v8 )
    {
      CTimelineBase::CTimelineBase(v8, v9, v8);
      *v10 = &CTimeline<float>::`vftable';
      *a2 = (__int64)v10;
      if ( v10 )
      {
        CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
        return v3;
      }
    }
    else
    {
      *a2 = 0LL;
    }
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1BDu);
    return v3;
  }
  *(_QWORD *)(v6 + 48) = *(_QWORD *)(v6 + 32);
  *(double *)(v6 + 24) = a3;
  *(_WORD *)(v6 + 72) = 256;
  CDesktopManager::s_fTimelineDirty = 1;
  return v3;
}
