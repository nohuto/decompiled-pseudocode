/*
 * XREFs of ?CreateColorGradientStopWithOffsetAndColor@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMUColor@45@PEAPEAUICompositionColorGradientStop@345@@Z @ 0x180044F10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAPEAVCompositionColorGradientStop@234@@Z @ 0x180044FD4 (-CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAP.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateColorGradientStopWithOffsetAndColor(
        __int64 a1,
        float a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  Windows::UI::Composition::CompositorCommon *v4; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  struct Windows::UI::Composition::CompositionColorGradientStop *v10; // [rsp+20h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v11; // [rsp+28h] [rbp-40h] BYREF

  *a4 = 0LL;
  v4 = (Windows::UI::Composition::CompositorCommon *)(a1 - 168);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 168));
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v10 = 0LL;
    *(struct _D3DCOLORVALUE *)&v11.r = *(struct _D3DCOLORVALUE *)Windows::UI::Composition::AnimationHelper::WUColorToD2DColor(
                                                                   &v11,
                                                                   a3);
    v7 = Windows::UI::Composition::CompositorCommon::CreateColorGradientStop(v4, a2, &v11, &v10);
    v8 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x2212u);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    }
    else
    {
      *a4 = ((unsigned __int64)v10 + 136) & -(__int64)(v10 != 0LL);
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v8;
}
