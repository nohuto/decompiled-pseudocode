/*
 * XREFs of ?CreateRectangleClipWithSidesAndRadius@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMMMMUVector2@Numerics@Foundation@5@000PEAPEAUIRectangleClip@345@@Z @ 0x180126720
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundation@4@000PEAPEAVRectangleClip@234@@Z @ 0x18006EA08 (-CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundat.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateRectangleClipWithSidesAndRadius(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        Microsoft::WRL2::NestableRuntimeClass *a10)
{
  Microsoft::WRL2::NestableRuntimeClass *v10; // rsi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax

  v10 = a10;
  v11 = a1 - 192;
  *(_QWORD *)a10 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 192));
  if ( (*(_BYTE *)(v11 + 32) & 2) != 0 )
  {
    a10 = 0LL;
    v13 = Windows::UI::Composition::CompositorCommon::CreateRectangleClip(v11, a2, a3, a4, a5, a6, a7, a8, a9, &a10);
    v12 = v13;
    if ( v13 < 0 )
    {
      DoStackCaptureDirect(v13, 0x17D1u);
      if ( a10 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(a10);
    }
    else
    {
      *(_QWORD *)v10 = ((unsigned __int64)a10 + 168) & -(__int64)(a10 != 0LL);
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
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v11);
  return v12;
}
