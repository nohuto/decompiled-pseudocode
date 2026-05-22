/*
 * XREFs of ?Reset@Partner@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@@Z @ 0x18000D980
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAXXZ @ 0x18000D9F4 (-ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x18002A71C (-SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceWrapper::Partner::Reset(
        Windows::UI::Composition::CompositionSurfaceWrapper::Partner *this,
        struct IDCompositionSurface *a2)
{
  Windows::UI::Composition::CompositionSurfaceWrapper *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (Windows::UI::Composition::CompositionSurfaceWrapper::Partner *)((char *)this - 168);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v5 = Windows::UI::Composition::CompositionSurfaceWrapper::SetDCompSurface(v2, a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacewrapper.cpp",
          (const char *)(unsigned int)v5);
        DoStackCaptureDirect(v6, 0xC3u);
        goto LABEL_5;
      }
    }
    else
    {
      Windows::UI::Composition::CompositionSurfaceWrapper::ClearDCompSurface(v2);
    }
    v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
