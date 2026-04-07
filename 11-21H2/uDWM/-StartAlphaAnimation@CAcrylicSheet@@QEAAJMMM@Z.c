/*
 * XREFs of ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x18009AA6C
 * Callers:
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x18009ABA0 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?UpdateAlphaAnimation@CAcrylicSheet@@UEAAJMM@Z @ 0x18009B4E0 (-UpdateAlphaAnimation@CAcrylicSheet@@UEAAJMM@Z.c)
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x1800FFA20 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18009A94C (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::StartAlphaAnimation(CAcrylicSheet *this, float a2, float a3, float a4)
{
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  __int64 v8; // rax
  _QWORD *v9; // r8
  int v10; // edi
  unsigned int v11; // eax

  v5 = *((_QWORD *)this + 73);
  if ( v5 )
  {
    v6 = (*(_DWORD *)(v5 + 8))-- == 1;
    v7 = CDesktopManager::s_fTimelineDirty;
    if ( v6 )
      v7 = 1;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( !v8 )
  {
    *((_QWORD *)this + 73) = 0LL;
    goto LABEL_10;
  }
  CTimelineBase::CTimelineBase(v8, a4, a2, a3, 0);
  *v9 = &CTimeline<float>::`vftable';
  *((_QWORD *)this + 73) = v9;
  if ( !v9 )
  {
LABEL_10:
    v10 = -2147024882;
    v11 = 814;
    goto LABEL_11;
  }
  *((float *)this + 144) = a2;
  *((float *)this + 145) = a3;
  v10 = CAcrylicSheet::RegisterGlobalTimer(this);
  if ( v10 < 0 )
  {
    v11 = 819;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v11);
    CAcrylicSheet::StopAnimations(this);
  }
  return (unsigned int)v10;
}
