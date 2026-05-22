/*
 * XREFs of ?CreateMipmapSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionMipmapSurface@345@@Z @ 0x180156EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionMipmapSurface@234@@Z @ 0x180156F8C (-CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Api::CreateMipmapSurface(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        Microsoft::WRL2::NestableRuntimeClass *a5)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // rsi
  __int64 v6; // rbp
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  Microsoft::WRL2::NestableRuntimeClass *v13; // rax

  v5 = a5;
  v6 = a1 - 152;
  *(_QWORD *)a5 = 0LL;
  v10 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*(_BYTE *)(v6 + 32) & 2) != 0 )
  {
    a5 = 0LL;
    v12 = Windows::UI::Composition::CompositionGraphicsDevice::CreateMipmapSurface(v6, a2, a3, a4, &a5);
    v11 = v12;
    if ( v12 < 0 )
    {
      DoStackCaptureDirect(v12, 0x2B4u);
    }
    else
    {
      v13 = a5;
      a5 = 0LL;
      *(_QWORD *)v5 = ((unsigned __int64)v13 + 152) & -(__int64)(v13 != 0LL);
      v11 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&a5);
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v11;
}
