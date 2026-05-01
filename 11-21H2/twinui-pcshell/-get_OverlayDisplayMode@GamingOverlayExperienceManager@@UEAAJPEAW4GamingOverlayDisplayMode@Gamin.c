/*
 * XREFs of ?get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@@Z @ 0x18017B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x18017B61C (-DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA-AW4GamingOverlayDisplayMode@Ga.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::get_OverlayDisplayMode(
        GamingOverlayExperienceManager *this,
        enum Windows::Internal::GamingOverlay::GamingOverlayDisplayMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
    v7 = v4;
    *(_DWORD *)a2 = GamingOverlayExperienceManager::DetermineCurrentDisplayMode((char *)this - 136);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEFA,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
