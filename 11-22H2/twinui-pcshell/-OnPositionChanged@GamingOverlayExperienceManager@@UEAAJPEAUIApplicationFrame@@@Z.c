/*
 * XREFs of ?OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1804030B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NPEAUIApplicationFrame@@@Z @ 0x1802D3A02 (-IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QE.c)
 *     ?OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x1804105EC (-OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnPositionChanged(RTL_SRWLOCK *this, struct IApplicationFrame *a2)
{
  RTL_SRWLOCK *v2; // rsi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v4; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **Ptr; // r14
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **i; // rdi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v8; // r8
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned int v12; // ebx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 158;
  v4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockShared(this + 158);
  Ptr = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[160].Ptr;
  for ( i = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this[159].Ptr;
        i != Ptr
     && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameAppFrame(*i, a2);
        ++i )
  {
    ;
  }
  if ( i != this[160].Ptr )
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
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( v4 )
  {
    v13 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnPositionChanged(v4);
    v12 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE77,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v16);
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v12;
}
