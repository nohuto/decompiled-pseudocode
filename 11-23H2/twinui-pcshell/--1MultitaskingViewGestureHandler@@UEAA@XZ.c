/*
 * XREFs of ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x1801453DC
 * Callers:
 *     ??_EMultitaskingViewGestureHandler@@UEAAPEAXI@Z @ 0x180148360 (--_EMultitaskingViewGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1802D7364 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18054C7BC (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 */

void __fastcall MultitaskingViewGestureHandler::~MultitaskingViewGestureHandler(MultitaskingViewGestureHandler *this)
{
  void *v1; // rdi
  __int64 v3; // rcx

  v1 = (void *)*((_QWORD *)this + 31);
  if ( v1 )
  {
    MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(*((MinimizeAnimationSystemStateOverride **)this
                                                                                + 31));
    operator delete(v1, 4uLL);
  }
  if ( *((_QWORD *)this + 30) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((MultitaskingViewGestureHandler *)((char *)this + 240));
  if ( *((_QWORD *)this + 28) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((MultitaskingViewGestureHandler *)((char *)this + 224));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 15);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(v3);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
