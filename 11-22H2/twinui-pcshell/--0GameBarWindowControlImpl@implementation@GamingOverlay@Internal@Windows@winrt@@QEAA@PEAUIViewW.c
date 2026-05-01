/*
 * XREFs of ??0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@34@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18040F058
 * Callers:
 *     ??0?$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@9@@Z @ 0x1803F8D88 (--0-$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GameBarWindowControlImpl(
        __int64 a1,
        struct IUnknown *a2,
        __int64 *a3,
        __int64 *a4)
{
  void *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 105) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 153) = 0;
  *(_BYTE *)(a1 + 155) = 0;
  *(_BYTE *)(a1 + 157) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 184) = SHTaskPoolGetUniqueContext(1LL);
  winrt::copy_from_abi((winrt *)(a1 + 24), a2, v8);
  v9 = *a3;
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = *a3;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *a4;
  v12 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *a4;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a4);
  return a1;
}
