/*
 * XREFs of ?put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x18000C860
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetStrokeBrush@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x18000C8F4 (-SetStrokeBrush@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@123@@Z @ 0x1800462A4 (-ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::put_StrokeBrush(
        Windows::UI::Composition::CompositionSpriteShape::Api *this,
        struct IUnknown *a2)
{
  struct Windows::UI::Composition::ICompositionBrush **v2; // rsi
  Microsoft::WRL2::ContextSession *v4; // rbx
  struct Windows::UI::Composition::CompositionBrush **v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  struct Windows::UI::Composition::CompositionBrush *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct Windows::UI::Composition::ICompositionBrush **)((char *)this - 192);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    v9 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v9);
    v6 = Windows::UI::Composition::ValidateShapeBrush(a2, v2[3], (struct Microsoft::WRL2::ContextSession *)&v9, v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x2A9u);
    }
    else
    {
      Windows::UI::Composition::CompositionSpriteShape::SetStrokeBrush(
        (Windows::UI::Composition::CompositionSpriteShape *)v2,
        v9);
      v7 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v9);
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
