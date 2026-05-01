/*
 * XREFs of ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180638E78
 * Callers:
 *     ??_E?$heap_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180636A24 (--_E-$heap_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::~TabProxyWindowFactory(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        void *a2)
{
  volatile int *v3; // rdx
  __int64 v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx

  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>'};
  wil::details::SetEvent(*((wil::details **)this + 5), a2);
  if ( *((_QWORD *)this + 10) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 10);
  if ( *((_QWORD *)this + 9) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *)((char *)this + 72));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 7);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
      v4,
      v3);
  v5 = (wil::details *)*((_QWORD *)this + 5);
  if ( v5 )
    wil::details::CloseHandle(v5, (void *)v3);
  v6 = (wil::details *)*((_QWORD *)this + 4);
  if ( v6 )
    wil::details::CloseHandle(v6, (void *)v3);
  v7 = (wil::details *)*((_QWORD *)this + 3);
  if ( v7 )
    wil::details::CloseHandle(v7, (void *)v3);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 8);
}
