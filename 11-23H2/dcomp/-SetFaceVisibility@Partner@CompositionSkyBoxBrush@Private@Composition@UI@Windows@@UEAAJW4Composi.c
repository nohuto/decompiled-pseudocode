/*
 * XREFs of ?SetFaceVisibility@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJW4CompositionCubeMapFace@3456@E@Z @ 0x180181270
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetFaceVisibility@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJW4CompositionCubeMapFace@2345@_N@Z @ 0x1801811E0 (-SetFaceVisibility@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJW4CompositionCube.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::SetFaceVisibility(
        __int64 a1,
        int a2,
        char a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = a1 - 152;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetFaceVisibility(v3, a2, a3 != 0);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x2DFu);
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
