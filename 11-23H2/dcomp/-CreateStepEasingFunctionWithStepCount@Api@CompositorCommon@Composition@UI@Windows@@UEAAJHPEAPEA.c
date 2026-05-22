/*
 * XREFs of ?CreateStepEasingFunctionWithStepCount@Api@CompositorCommon@Composition@UI@Windows@@UEAAJHPEAPEAUIStepEasingFunction@345@@Z @ 0x180127860
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVStepEasingFunction@234@@Z @ 0x1800797D0 (-CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVSte.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateStepEasingFunctionWithStepCount(
        struct _RTL_CRITICAL_SECTION *this,
        int a2,
        struct Windows::UI::Composition::IStepEasingFunction **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon *)&this[-4];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    v7 = Windows::UI::Composition::CompositorCommon::CreateStepEasingFunctionWithStepCount(v3, a2, &v9);
    v6 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x1975u);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      *a3 = (struct Windows::UI::Composition::IStepEasingFunction *)(((unsigned __int64)v9 + 152) & -(__int64)(v9 != 0LL));
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v6;
}
