/*
 * XREFs of ?CreateSharedVisualSurfaceWithRealizationSize@Internal@Compositor@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@EPEAPEAUICompositionVisualSurface@345@@Z @ 0x180094A80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPEAVCompositionVisualSurface@234@@Z @ 0x180094B24 (-CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPE.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::CreateSharedVisualSurfaceWithRealizationSize(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = a1 - 1112;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 1112));
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v12 = 0LL;
    LOBYTE(v8) = a3 != 0;
    v9 = Windows::UI::Composition::Compositor::CreateSharedVisualSurface(v4, a2, v8, &v12);
    v10 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x829u);
      if ( v12 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
    }
    else
    {
      *a4 = ((unsigned __int64)v12 + 136) & -(__int64)(v12 != 0LL);
      v10 = 0;
    }
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v10;
}
