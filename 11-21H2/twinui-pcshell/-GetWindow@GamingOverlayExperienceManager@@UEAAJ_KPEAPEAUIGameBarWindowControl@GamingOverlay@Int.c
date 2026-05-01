/*
 * XREFs of ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180332920
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@@1@PEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@@Z @ 0x180329D80 (--$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implement.c)
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x180342430 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::GetWindow(
        RTL_SRWLOCK *this,
        int a2,
        struct Windows::Internal::GamingOverlay::IGameBarWindowControl **a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned int PropW; // eax
  unsigned int v8; // r15d
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v10; // rsi
  __int64 result; // rax
  struct Windows::Internal::GamingOverlay::IGameBarWindowControl *v13; // rbx
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::GamingOverlay::IGameBarWindowControl *v16; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+48h] [rbp+10h] BYREF

  v6 = this + 151;
  AcquireSRWLockShared(this + 151);
  v17 = v6;
  PropW = (unsigned int)GetPropW((HWND)~a2, L"Microsoft.Windows.WindowFactory.ViewId");
  v8 = PropW;
  Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[152].Ptr;
  v10 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[153].Ptr;
  while ( Ptr != v10 )
  {
    if ( winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
           *Ptr,
           v8) )
    {
      break;
    }
    ++Ptr;
  }
  if ( Ptr == this[153].Ptr )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    return 2147943568LL;
  }
  else
  {
    try
    {
      winrt::impl::as<Windows::Internal::GamingOverlay::IGameBarWindowControl,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,0>(
        &v16,
        (__int64)*Ptr);
      v13 = v16;
      if ( v16 )
        (*(void (__fastcall **)(struct Windows::Internal::GamingOverlay::IGameBarWindowControl *))(*(_QWORD *)v16 + 8LL))(v16);
      *a3 = v13;
      if ( v13 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v16);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xC9E,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                             v14);
    }
  }
  return result;
}
