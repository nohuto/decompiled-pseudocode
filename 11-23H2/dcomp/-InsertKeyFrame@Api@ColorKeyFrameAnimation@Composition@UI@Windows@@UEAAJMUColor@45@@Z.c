/*
 * XREFs of ?InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@@Z @ 0x18007C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     ?InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCompositionEasingFunction@234@@Z @ 0x18007C560 (-InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCom.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::ColorKeyFrameAnimation::Api::InsertKeyFrame(
        __int64 a1,
        float a2,
        unsigned int a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int inserted; // eax
  unsigned int v7; // edi
  struct _D3DCOLORVALUE v9; // [rsp+20h] [rbp-38h] BYREF

  v3 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    *(struct _D3DCOLORVALUE *)&v9.r = *(struct _D3DCOLORVALUE *)Windows::UI::Composition::AnimationHelper::WUColorToD2DColor(
                                                                  &v9.r,
                                                                  a3);
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertColorKeyFrame(v3, a2, &v9, 0LL);
    v7 = inserted;
    if ( inserted < 0 )
      DoStackCaptureDirect(inserted, 0x75u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
