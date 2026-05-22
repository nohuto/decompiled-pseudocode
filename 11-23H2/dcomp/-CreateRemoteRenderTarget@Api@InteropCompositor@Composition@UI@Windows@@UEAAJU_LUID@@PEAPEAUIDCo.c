/*
 * XREFs of ?CreateRemoteRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800916D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VInteropRemoteRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@@Z @ 0x180091764 (--$MakeAndInitialize2@VInteropRemoteRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateRemoteRenderTarget(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct _LUID a2,
        struct IDCompositionRenderTargetPartner **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v9; // [rsp+48h] [rbp+10h] BYREF
  char *v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1224);
  v10 = (char *)this - 1224;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1224));
  if ( (v3->SpinCount & 2) != 0 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v8 = 0LL;
      v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRemoteRenderTarget,Windows::UI::Composition::InteropRemoteRenderTarget,Windows::UI::Composition::InteropCompositor * &,_LUID &>(
             &v8,
             &v10,
             &v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        DoStackCaptureDirect(v5, 0xB2u);
        if ( v8 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
      }
      else
      {
        *a3 = (struct IDCompositionRenderTargetPartner *)(((unsigned __int64)v8 + 136) & -(__int64)(v8 != 0LL));
        v6 = 0;
      }
    }
    else
    {
      v6 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xAAu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
