/*
 * XREFs of ?CreateCubicBezierEasingFunction@Api@Compositor@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@0PEAPEAUICubicBezierEasingFunction@345@@Z @ 0x180079AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numerics@Foundation@4@0PEAPEAVCubicBezierEasingFunction@234@@Z @ 0x180079B5C (-CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numer.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateCubicBezierEasingFunction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  Windows::UI::Composition::CompositorCommon *v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = (Windows::UI::Composition::CompositorCommon *)(a1 - 1080);
  v9 = a3;
  v10[0] = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 1080));
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v11 = 0LL;
    v6 = Windows::UI::Composition::CompositorCommon::CreateCubicBezierEasingFunction(
           v4,
           (struct Windows::Foundation::Numerics::Vector2 *)v10,
           (struct Windows::Foundation::Numerics::Vector2 *)&v9,
           &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x341u);
      if ( v11 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
    else
    {
      *a4 = ((unsigned __int64)v11 + 152) & -(__int64)(v11 != 0LL);
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
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v7;
}
