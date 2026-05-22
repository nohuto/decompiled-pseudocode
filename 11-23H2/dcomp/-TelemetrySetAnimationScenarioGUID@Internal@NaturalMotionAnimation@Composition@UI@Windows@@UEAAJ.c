/*
 * XREFs of ?TelemetrySetAnimationScenarioGUID@Internal@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEBU_GUID@@@Z @ 0x180188F70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z @ 0x1800844B8 (-SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimation::Internal::TelemetrySetAnimationScenarioGUID(
        Windows::UI::Composition::NaturalMotionAnimation::Internal *this,
        const struct _GUID *a2)
{
  Windows::UI::Composition::CompositionAnimation *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = (Windows::UI::Composition::NaturalMotionAnimation::Internal *)((char *)this - 360);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 42);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v7 = *a2;
    Windows::UI::Composition::CompositionAnimation::SetSparse_AnimationScenarioGUID(v2, &v7);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
