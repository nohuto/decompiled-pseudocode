/*
 * XREFs of ?put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@6@@Z @ 0x18013D370
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ConvertReferenceToValue@M@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@M@Foundation@3@PEAMPEA_N@Z @ 0x1801345CC (--$ConvertReferenceToValue@M@AnimationHelper@Composition@UI@Windows@@YAJPEAU-$IReference@M@Found.c)
 *     ?SetScaleInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM_N@Z @ 0x18013B358 (-SetScaleInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::put_ScaleInertiaDecayRate(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+40h] [rbp+18h] BYREF
  float v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<float>(a2, (__int64)&v11, &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
    if ( (*(_BYTE *)(a1 - 104) & 2) != 0 )
    {
      v8 = Windows::UI::Composition::Interactions::InteractionTracker::SetScaleInertiaDecayRate(
             (Windows::UI::Composition::Interactions::InteractionTracker *)(a1 - 136),
             v11,
             v10);
      v7 = v8;
      if ( v8 < 0 )
        DoStackCaptureDirect(v8, 0xB5Au);
      else
        v7 = 0;
    }
    else
    {
      v7 = -2147483629;
      RoOriginateErrorW(
        2147483667LL,
        0LL,
        L"The given object has already been closed / disposed and may no longer be used.");
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v6);
    return v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB56,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
