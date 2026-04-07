/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x1800246FC
 * Callers:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000FD6C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180010080 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CAccent@@MEAA@XZ @ 0x180014F74 (--1CAccent@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x18003A8E0 (--1CImage@@EEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x18003AACC (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CText@@EEAA@XZ @ 0x180046F6C (--1CText@@EEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180047488 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x18004C3DC (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18004EA6C (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x18004F15C (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x18005ABC8 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$0 @ 0x18006618E (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$0.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x1800970F0 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x180099970 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800ADE40 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800B1CB8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800BC058 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800BDFAC (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800C0150 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800C0B44 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C1954 (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800C8B48 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800C8E30 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800C92D4 (--1CPressTapVisual@@MEAA@XZ.c)
 *     ??_GCProjectionBorderVisual@@UEAAPEAXI@Z @ 0x1800CB9D0 (--_GCProjectionBorderVisual@@UEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D2060 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800E1D9C (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800E6E50 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800E80AC (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800E9090 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x18010006C (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x180101D00 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions(this);
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *((_QWORD *)this + 32) != *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 32) = 0LL;
  }
  CVisual::~CVisual(this);
}
