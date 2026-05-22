/*
 * XREFs of ?put_OuterConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x1800938A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::SpotLight::Api::put_OuterConeColor(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int128 v5; // xmm0
  int updated; // eax
  unsigned int v7; // edi
  void **v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  v2 = a1 - 264;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 264 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v5 = *(_OWORD *)Windows::UI::Composition::AnimationHelper::WUColorToD2DColor((float *)&v11, a2);
    v10[0] = v2 + 344;
    v10[1] = &v11;
    v10[2] = &v11;
    v9 = (void **)&Windows::UI::Composition::SpotLight::sc_OuterConeColor;
    v11 = v5;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<_D3DCOLORVALUE>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)v2,
                (__int64)v10,
                &v9);
    v7 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0x3BCu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
