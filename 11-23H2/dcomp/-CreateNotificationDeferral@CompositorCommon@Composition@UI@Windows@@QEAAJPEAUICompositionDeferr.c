/*
 * XREFs of ?CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferralHandlerPrivate@Private@234@IPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x1801261A4
 * Callers:
 *     ?CreateStateChangedDeferral@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNotificationDeferral@345@@Z @ 0x180112180 (-CreateStateChangedDeferral@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUICompositi.c)
 *     ?CreateNotificationDeferral@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionDeferralHandlerPrivate@Private@345@IPEAPEAUIInspectable@@@Z @ 0x180126200 (-CreateNotificationDeferral@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompos.c)
 *     ?CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x18015BE18 (-CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCompositionNotificationDeferral@Composition@UI@Windows@@UICompositionNotificationDeferral@234@AEAPEAUICompositionDeferralHandlerPrivate@Private@234@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUICompositionNotificationDeferral@Composition@UI@Windows@@AEAPEAUICompositionDeferralHandlerPrivate@Private@456@AEAI@Z @ 0x1801222EC (--$MakeAndInitialize@VCompositionNotificationDeferral@Composition@UI@Windows@@UICompositionNotif.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateNotificationDeferral(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate *a2,
        int a3,
        struct Windows::UI::Composition::ICompositionNotificationDeferral **a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate *v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositionNotificationDeferral,Windows::UI::Composition::ICompositionNotificationDeferral,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate * &,unsigned int &>(
         a4,
         &v8,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A70,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
