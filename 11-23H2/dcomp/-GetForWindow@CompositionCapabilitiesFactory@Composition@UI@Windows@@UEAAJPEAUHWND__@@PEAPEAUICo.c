/*
 * XREFs of ?GetForWindow@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUICompositionCapabilities@234@@Z @ 0x18011B950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z @ 0x18003CC38 (-Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::GetForWindow(
        Windows::UI::Composition::CompositionCapabilitiesFactory *this,
        HWND a2,
        struct Windows::UI::Composition::ICompositionCapabilities **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::CompositionCapabilities *v8; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0LL;
  v9 = &Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock;
  EnterCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  v8 = 0LL;
  v4 = Windows::UI::Composition::CompositionCapabilities::Create(&v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a3 = (struct Windows::UI::Composition::ICompositionCapabilities *)(((unsigned __int64)v8 + 72) & -(__int64)(v8 != 0LL));
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositioncapabilitiesg.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v5;
}
