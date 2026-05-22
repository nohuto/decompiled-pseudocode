/*
 * XREFs of ?CreateNotificationDeferral@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionDeferralHandlerPrivate@Private@345@IPEAPEAUIInspectable@@@Z @ 0x180126200
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferralHandlerPrivate@Private@234@IPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x1801261A4 (-CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferr.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::XUCPrivate::CreateNotificationDeferral(
        Windows::UI::Composition::CompositorCommon::XUCPrivate *this,
        struct Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate *a2,
        int a3,
        struct IInspectable **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v8; // ebx
  Windows::UI::Composition::CompositorCommon *v9; // rcx
  int v10; // eax
  struct IInspectable *v11; // rax
  struct Windows::UI::Composition::ICompositionNotificationDeferral *v13; // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 216));
  if ( (v4->SpinCount & 2) != 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    v10 = Windows::UI::Composition::CompositorCommon::CreateNotificationDeferral(v9, a2, a3, &v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      DoStackCaptureDirect(v10, 0x1A80u);
    }
    else
    {
      v11 = (struct IInspectable *)v13;
      v13 = 0LL;
      v8 = 0;
      *a4 = v11;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v8;
}
