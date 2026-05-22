/*
 * XREFs of ?CreateVirtualDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionVirtualDrawingSurface@345@@Z @ 0x18003A460
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionVirtualDrawingSurface@234@@Z @ 0x18003A518 (-CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@G.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Api::CreateVirtualDrawingSurface(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        Microsoft::WRL2::NestableRuntimeClass *a5)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // rsi
  __int64 v6; // rbp
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  v5 = a5;
  v6 = a1 - 144;
  *(_QWORD *)a5 = 0LL;
  v10 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 144 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*(_BYTE *)(v6 + 32) & 2) != 0 )
  {
    a5 = 0LL;
    v11 = Windows::UI::Composition::CompositionGraphicsDevice::CreateVirtualDrawingSurface(v6, a2, a3, a4, &a5);
    v12 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0x292u);
      if ( a5 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(a5);
    }
    else
    {
      *(_QWORD *)v5 = ((unsigned __int64)a5 + 192) & -(__int64)(a5 != 0LL);
      v12 = 0;
    }
  }
  else
  {
    v12 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v12;
}
