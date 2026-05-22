/*
 * XREFs of ?CreateHolographicInteropTexture@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionHolographicInteropTexture@@@Z @ 0x18015FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F640 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::SystemOnly::CreateHolographicInteropTexture(
        Windows::UI::Composition::InteropCompositor::SystemOnly *this,
        struct IDCompositionHolographicInteropTexture **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  bool v7; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+50h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1264);
  v9 = (Windows::UI::Composition::InteropCompositor::SystemOnly *)((char *)this - 1264);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1264));
  if ( (v2->SpinCount & 2) != 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v8 = 0LL;
      v7 = 0;
      v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropCompositor * &,bool>(
             &v8,
             &v9,
             &v7);
      v4 = v5;
      if ( v5 < 0 )
      {
        DoStackCaptureDirect(v5, 0x10Fu);
        if ( v8 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
      }
      else
      {
        *a2 = (struct IDCompositionHolographicInteropTexture *)(((unsigned __int64)v8 + 136) & -(__int64)(v8 != 0LL));
        v4 = 0;
      }
    }
    else
    {
      v4 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x107u);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
