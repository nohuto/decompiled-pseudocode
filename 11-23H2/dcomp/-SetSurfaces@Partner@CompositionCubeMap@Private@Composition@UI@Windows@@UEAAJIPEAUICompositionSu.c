/*
 * XREFs of ?SetSurfaces@Partner@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAJIPEAUICompositionSurface@456@00000@Z @ 0x18017F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?SetSurfaces@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJIPEAPEAUICompositionSurface@345@@Z @ 0x18017F074 (-SetSurfaces@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJIPEAPEAUICompositionSurface.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionCubeMap::Partner::SetSurfaces(
        Windows::UI::Composition::Private::CompositionCubeMap::Partner *this,
        unsigned int a2,
        struct Windows::UI::Composition::ICompositionSurface *a3,
        struct Windows::UI::Composition::ICompositionSurface *a4,
        struct Windows::UI::Composition::ICompositionSurface *a5,
        struct Windows::UI::Composition::ICompositionSurface *a6,
        struct Windows::UI::Composition::ICompositionSurface *a7,
        struct Windows::UI::Composition::ICompositionSurface *a8)
{
  Windows::UI::Composition::Private::CompositionCubeMap *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int v13; // edi
  int v14; // eax
  struct Windows::UI::Composition::ICompositionSurface *v16[6]; // [rsp+28h] [rbp-80h] BYREF

  v8 = (Windows::UI::Composition::Private::CompositionCubeMap::Partner *)((char *)this - 144);
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  if ( (*((_BYTE *)v8 + 32) & 2) != 0 )
  {
    v16[5] = a8;
    v16[0] = a3;
    v16[1] = a4;
    v16[2] = a5;
    v16[3] = a6;
    v16[4] = a7;
    v14 = Windows::UI::Composition::Private::CompositionCubeMap::SetSurfaces(v8, a2, (struct IUnknown **)v16);
    v13 = v14;
    if ( v14 < 0 )
      DoStackCaptureDirect(v14, 0x162u);
    else
      v13 = 0;
  }
  else
  {
    v13 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  return v13;
}
