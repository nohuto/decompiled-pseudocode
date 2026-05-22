/*
 * XREFs of ?GetForCurrentView@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionCapabilities@234@@Z @ 0x18003CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z @ 0x18003CC38 (-Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::GetForCurrentView(
        Windows::UI::Composition::CompositionCapabilitiesFactory *this,
        struct Windows::UI::Composition::ICompositionCapabilities **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::CompositionCapabilities *v7; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v8 = &Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock;
  EnterCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  v7 = 0LL;
  v3 = Windows::UI::Composition::CompositionCapabilities::Create(&v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositioncapabilitiesg.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
  }
  else
  {
    *a2 = (struct Windows::UI::Composition::ICompositionCapabilities *)(((unsigned __int64)v7 + 72) & -(__int64)(v7 != 0LL));
    v4 = 0;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v4;
}
