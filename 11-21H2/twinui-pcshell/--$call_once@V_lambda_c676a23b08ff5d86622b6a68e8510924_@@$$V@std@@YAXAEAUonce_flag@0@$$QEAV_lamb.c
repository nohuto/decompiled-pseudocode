/*
 * XREFs of ??$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_c676a23b08ff5d86622b6a68e8510924_@@@Z @ 0x18003A3F0
 * Callers:
 *     ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x18003A360 (-PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ.c)
 *     ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18003A390 (-GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA-AV-$ComPtr@UIDesktopThumbnailDevice@Desktop@Mul.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ActivateInstance@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@1@@Z @ 0x18003A4C4 (--$ActivateInstance@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Found.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18006337C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::call_once<_lambda_c676a23b08ff5d86622b6a68e8510924_,>(union _RTL_RUN_ONCE *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  WINBOOL fPending; // [rsp+20h] [rbp-48h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v8 = a1;
    v9 = 4;
    v4 = *a2;
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.Multitasking.Desktop.DesktopThumbnailDevice",
      0x43u,
      0x42u);
    v5 = v11;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v4 + 48));
    v6 = Windows::Foundation::ActivateInstance<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>(
           v5,
           v4 + 48);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v6,
        fPending);
    v9 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v8);
  }
}
