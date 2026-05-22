/*
 * XREFs of ?put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@6@@Z @ 0x18013D290
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$ConvertReferenceToValue@UVector3@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@3@PEAUVector3@Numerics@53@PEA_N@Z @ 0x180134634 (--$ConvertReferenceToValue@UVector3@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI.c)
 *     ?SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@_N@Z @ 0x18013B1E4 (-SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVe.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::put_PositionInertiaDecayRate(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  bool v9[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<Windows::Foundation::Numerics::Vector3>(
         a2,
         (__int64)v10,
         v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
    if ( (*(_BYTE *)(a1 - 104) & 2) != 0 )
    {
      v8 = Windows::UI::Composition::Interactions::InteractionTracker::SetPositionInertiaDecayRate(
             (Windows::UI::Composition::Interactions::InteractionTracker *)(a1 - 136),
             (struct Windows::Foundation::Numerics::Vector3 *)v10,
             v9[0]);
      v7 = v8;
      if ( v8 < 0 )
        DoStackCaptureDirect(v8, 0xB2Cu);
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
      (void *)0xB28,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
