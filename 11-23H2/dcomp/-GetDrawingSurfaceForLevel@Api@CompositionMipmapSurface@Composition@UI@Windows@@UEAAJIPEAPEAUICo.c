/*
 * XREFs of ?GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionDrawingSurface@345@@Z @ 0x180193A70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVCompositionDrawingSurface@234@@Z @ 0x180193B58 (-GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVComposi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionMipmapSurface::Api::GetDrawingSurfaceForLevel(
        Windows::UI::Composition::CompositionMipmapSurface::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::ICompositionDrawingSurface **a3)
{
  Windows::UI::Composition::CompositionMipmapSurface *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v7; // edi
  int DrawingSurfaceForLevel; // eax
  struct Windows::UI::Composition::CompositionDrawingSurface *v9; // rax
  __int64 v10; // rax
  struct Windows::UI::Composition::ICompositionDrawingSurface *v11; // rax
  struct Windows::UI::Composition::CompositionDrawingSurface *v13; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositionMipmapSurface::Api *)((char *)this - 152);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v13 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v13);
    DrawingSurfaceForLevel = Windows::UI::Composition::CompositionMipmapSurface::GetDrawingSurfaceForLevel(v3, a2, &v13);
    v7 = DrawingSurfaceForLevel;
    if ( DrawingSurfaceForLevel < 0 )
    {
      DoStackCaptureDirect(DrawingSurfaceForLevel, 0x1B0u);
    }
    else
    {
      v9 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        v10 = ((unsigned __int64)v9 + 192) & -(__int64)(v9 != 0LL);
        if ( v10 )
          v11 = (struct Windows::UI::Composition::ICompositionDrawingSurface *)(v10 + 8);
        else
          v11 = 0LL;
        *a3 = v11;
      }
      v7 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v13);
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
