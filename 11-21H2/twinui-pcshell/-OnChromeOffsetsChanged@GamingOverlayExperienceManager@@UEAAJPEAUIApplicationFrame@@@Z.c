/*
 * XREFs of ?OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803350F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NPEAUIApplicationFrame@@@Z @ 0x18022BFB2 (-IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QE.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?OnChromeOffsetsChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180342630 (-OnChromeOffsetsChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@w.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnChromeOffsetsChanged(
        RTL_SRWLOCK *this,
        struct IApplicationFrame *a2)
{
  RTL_SRWLOCK *v2; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v4; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // rbp
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **i; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v8; // r8
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned int v12; // ebx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v16; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+48h] [rbp+10h] BYREF

  v2 = this + 153;
  v4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockShared(this + 153);
  Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[155].Ptr;
  v17 = v2;
  for ( i = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[154].Ptr;
        i != Ptr
     && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameAppFrame(*i, a2);
        ++i )
  {
    ;
  }
  if ( i != this[155].Ptr )
  {
    v8 = *i;
    if ( *i )
    {
      v9 = *((_QWORD *)v8 + 1);
      v16 = *i;
      while ( v9 >= 0 )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 1, v9 + 1, v9);
        v10 = v9 == v11;
        v9 = v11;
        if ( v10 )
          goto LABEL_12;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
LABEL_12:
      v4 = v16;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  if ( v4 )
  {
    v13 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnChromeOffsetsChanged(v4);
    v12 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE00,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v16);
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v12;
}
