/*
 * XREFs of ?TelemetryGetAnimationScenarioGUID@Internal@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z @ 0x180188EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEBA?AU_GUID@@XZ @ 0x18008B348 (-GetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEBA-AU_GUID@@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimation::Internal::TelemetryGetAnimationScenarioGUID(
        Windows::UI::Composition::NaturalMotionAnimation::Internal *this,
        struct _GUID *a2)
{
  Windows::UI::Composition::CompositionAnimation *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  struct _GUID *Sparse_AnimationScenarioGUID; // rax
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = (Windows::UI::Composition::NaturalMotionAnimation::Internal *)((char *)this - 360);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 42);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 14) + 4LL) & 0x800) != 0 )
    {
      Sparse_AnimationScenarioGUID = Windows::UI::Composition::CompositionAnimation::GetSparse_AnimationScenarioGUID(
                                       v2,
                                       &v8);
      v5 = 0;
      *a2 = *Sparse_AnimationScenarioGUID;
    }
    else
    {
      v5 = -2147467259;
      DoStackCaptureDirect(-2147467259, 0x106u);
    }
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
