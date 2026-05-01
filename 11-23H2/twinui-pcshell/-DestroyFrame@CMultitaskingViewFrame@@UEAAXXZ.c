/*
 * XREFs of ?DestroyFrame@CMultitaskingViewFrame@@UEAAXXZ @ 0x1802E1B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewFrame::DestroyFrame(CMultitaskingViewFrame *this)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  HWND v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-30h] BYREF

  v2 = (__int64 *)((char *)this + 2480);
  v7 = *((_QWORD *)this + 310);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v8, &v7, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  v3 = *((_QWORD *)this + 315);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 315) + 80LL))(*((_QWORD *)this + 315));
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 307);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 308);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 315);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 304);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 305);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 306);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 309);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 311);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 312);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 313);
  v4 = (HWND)*((_QWORD *)this + 6);
  if ( v4 )
  {
    RemovePropW(v4, L"NonRudeHWND");
    DestroyWindow(*((HWND *)this + 6));
  }
  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)v4,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1808668D5, 0LL, 0LL, 2u, &v9);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v8);
}
