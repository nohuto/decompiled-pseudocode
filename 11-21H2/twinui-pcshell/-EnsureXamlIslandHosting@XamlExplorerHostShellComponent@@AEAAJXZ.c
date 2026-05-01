/*
 * XREFs of ?EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x180062B18
 * Callers:
 *     ?s_XamlApplicationThreadProc@XamlExplorerHostShellComponent@@CAKPEAX@Z @ 0x1800625C0 (-s_XamlApplicationThreadProc@XamlExplorerHostShellComponent@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180062B98 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1800633AC (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::EnsureXamlIslandHosting(RTL_SRWLOCK *this)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( LODWORD(this[35].Ptr) == GetCurrentThreadId() )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)0x8001010ELL,
      v3);
    return 2147549454LL;
  }
  else
  {
    AcquireSRWLockShared(this + 32);
    v5 = this + 32;
    XamlExplorerHost::EnsureMetadataRegistered(this[31].Ptr);
    XamlExplorerHost::EnsureHostAppCreated(this[31].Ptr);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
    return 0LL;
  }
}
