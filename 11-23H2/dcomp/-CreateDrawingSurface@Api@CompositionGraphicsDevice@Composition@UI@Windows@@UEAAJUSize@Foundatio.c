/*
 * XREFs of ?CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundation@5@W4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAUICompositionDrawingSurface@345@@Z @ 0x180061680
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Round@@YAHM@Z @ 0x180061780 (-Round@@YAHM@Z.c)
 *     ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_NPEAPEAVCompositionDrawingSurface@234@@Z @ 0x1800617A4 (-CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Api::CreateDrawingSurface(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v17; // [rsp+60h] [rbp+8h]

  v5 = a5;
  v6 = a1 - 136;
  *a5 = 0LL;
  v9 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  if ( (*(_BYTE *)(v6 + 32) & 2) != 0 )
  {
    a5 = 0LL;
    LODWORD(v17) = Round(*(float *)&a2);
    HIDWORD(v17) = Round(*((float *)&a2 + 1));
    v10 = Windows::UI::Composition::CompositionGraphicsDevice::CreateDrawingSurface(v6, v17, a3, a4, 0, &a5);
    v11 = v10;
    if ( v10 < 0 )
    {
      DoStackCaptureDirect(v10, 0x24Du);
    }
    else
    {
      v12 = a5;
      a5 = 0LL;
      v13 = (unsigned __int64)(v12 + 24) & -(__int64)(v12 != 0LL);
      if ( v13 )
        v14 = v13 + 8;
      else
        v14 = 0LL;
      *v5 = v14;
      v11 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&a5);
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  return v11;
}
