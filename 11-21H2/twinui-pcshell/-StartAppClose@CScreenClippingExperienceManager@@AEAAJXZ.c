/*
 * XREFs of ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803824E0
 * Callers:
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803812DC (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180381AA0 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18004C24C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::StartAppClose(CScreenClippingExperienceManager *this)
{
  _DWORD *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  HSTRING_HEADER v6; // [rsp+40h] [rbp-38h] BYREF
  HSTRING v7; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_1806A9B9C,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v6);
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v6, L"StartAppClose", 0xEu, 0xDu);
  v3 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *((ExperienceManagerUtils **)this + 10),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 46),
         *((HSTRING *)this + 8),
         *((HSTRING *)this + 9),
         v7,
         0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FB,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
