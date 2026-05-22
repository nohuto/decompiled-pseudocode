/*
 * XREFs of ?get_StrokeDashArray@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@M@Collections@Foundation@5@@Z @ 0x180171D10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAPEAVCompositionStrokeDashArray@234@@Z @ 0x180170D88 (-GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAPEAVCompositionStroke.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::get_StrokeDashArray(
        __int64 a1,
        unsigned __int64 *a2)
{
  Windows::UI::Composition::CompositionSpriteShape *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int StrokeDashArray; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositionSpriteShape *)(a1 - 192);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 192 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    StrokeDashArray = Windows::UI::Composition::CompositionSpriteShape::GetStrokeDashArray(v2, &v8);
    v5 = StrokeDashArray;
    if ( StrokeDashArray < 0 )
    {
      DoStackCaptureDirect(StrokeDashArray, 0x2C3u);
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    }
    else
    {
      *a2 = ((unsigned __int64)v8 + 160) & -(__int64)(v8 != 0LL);
      v5 = 0;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
