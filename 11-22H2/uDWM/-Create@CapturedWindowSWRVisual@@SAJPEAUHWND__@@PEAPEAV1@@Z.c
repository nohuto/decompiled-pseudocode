/*
 * XREFs of ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x1800D03AC
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D4780 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x1800D0A20 (-Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CapturedWindowSWRVisual::Create(HWND a1, struct CapturedWindowSWRVisual **a2)
{
  __int64 v4; // rax
  struct CapturedWindowSWRVisual *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v5 = (struct CapturedWindowSWRVisual *)v4;
  v10 = (CBaseObject *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CapturedWindowSWRVisual::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v4 + 16) = &CapturedWindowSWRVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    *(_QWORD *)(v4 + 24) = 0LL;
    v10 = (CBaseObject *)v4;
    v6 = CapturedWindowSWRVisual::Initialize(
           (CapturedWindowSWRVisual *)v4,
           a1,
           (struct ISecondaryWindowRepresentationChangedListener *)(v4 + 16));
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = 0LL;
      *a2 = v5;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x665u);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
    }
  }
  else
  {
    v10 = 0LL;
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x663,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  return v7;
}
