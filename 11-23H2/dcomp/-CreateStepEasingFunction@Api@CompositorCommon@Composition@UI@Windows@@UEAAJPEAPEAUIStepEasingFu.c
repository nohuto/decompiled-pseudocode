/*
 * XREFs of ?CreateStepEasingFunction@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIStepEasingFunction@345@@Z @ 0x180083C20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVStepEasingFunction@234@@Z @ 0x1800797D0 (-CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVSte.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateStepEasingFunction(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::IStepEasingFunction **a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon *)&this[-4];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v7 = 0LL;
    v4 = Windows::UI::Composition::CompositorCommon::CreateStepEasingFunctionWithStepCount(v2, 1, &v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x1957u);
      if ( v7 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::IStepEasingFunction *)(((unsigned __int64)v7 + 152) & -(__int64)(v7 != 0LL));
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v5;
}
