/*
 * XREFs of ?CreateColorBrushWithColor@Api@Compositor@Composition@UI@Windows@@UEAAJUColor@45@PEAPEAUICompositionColorBrush@345@@Z @ 0x1800416B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompositionColorBrush@234@@Z @ 0x18004173C (-CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompos.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateColorBrushWithColor(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = a1 - 1080;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 1080));
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    v6 = Windows::UI::Composition::CompositorCommon::CreateColorBrushWithColor(v3, a2, &v9);
    v7 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x306u);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      *a3 = ((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL);
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v7;
}
