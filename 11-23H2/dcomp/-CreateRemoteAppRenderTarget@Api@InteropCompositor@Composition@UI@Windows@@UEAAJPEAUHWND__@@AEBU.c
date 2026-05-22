/*
 * XREFs of ?CreateRemoteAppRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAPEAUIDCompositionRemoteAppRenderTargetPartner@@@Z @ 0x18015FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAUHWND__@@AEBUtagRECT@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAUHWND__@@AEBUtagRECT@@$$QEA_N@Z @ 0x18015F708 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInterop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateRemoteAppRenderTarget(
        Windows::UI::Composition::InteropCompositor::Api *this,
        HWND a2,
        const struct tagRECT *a3,
        struct IDCompositionRemoteAppRenderTargetPartner **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v7; // ebx
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+30h] [rbp-18h] BYREF
  struct Windows::UI::Composition::Compositor *v11; // [rsp+38h] [rbp-10h] BYREF
  bool v12; // [rsp+50h] [rbp+8h] BYREF
  HWND v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1224);
  v11 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1224);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1224));
  if ( (v4->SpinCount & 2) != 0 )
  {
    if ( a4 )
    {
      *a4 = 0LL;
      v10 = 0LL;
      v12 = 0;
      v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropCompositor * &,HWND__ * &,tagRECT const &,bool>(
             &v10,
             &v11,
             &v13,
             a3,
             &v12);
      v7 = v8;
      if ( v8 < 0 )
      {
        DoStackCaptureDirect(v8, 0xCDu);
        if ( v10 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
      }
      else
      {
        *a4 = (struct IDCompositionRemoteAppRenderTargetPartner *)(((unsigned __int64)v10 + 136) & -(__int64)(v10 != 0LL));
        v7 = 0;
      }
    }
    else
    {
      v7 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xC3u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
