/*
 * XREFs of ?StartNewTrail@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18011B870
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisual::Api::StartNewTrail(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  float *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 272);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 264) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::AnimationHelper::WUColorToD2DColor((float *)&v10, a2);
    v7 = *(_QWORD *)(a1 + 16) + 16LL;
    v10 = *(_OWORD *)v6;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 48LL))(v7, &v10);
    v5 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x80u);
    else
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
