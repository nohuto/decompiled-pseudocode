/*
 * XREFs of ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180142FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x180144DD8 (-UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180665EFC (-clear@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U-$e.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::UnsubscribeFromServices(CShellSnapComponent *this, struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 30);
  if ( v3 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 32LL))(
      v3,
      ((unsigned __int64)this + 96) & -(__int64)(this != (CShellSnapComponent *)48));
  if ( *((_QWORD *)this + 40) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31));
  v8 = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 25);
  if ( v4 )
  {
    v8 = 0LL;
    if ( (**v4)(v4, &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36, &v8) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
  if ( *((_QWORD *)this + 50) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 136LL))(*((_QWORD *)this + 31));
  if ( *((_DWORD *)this + 140) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 64LL))(*((_QWORD *)this + 69));
  SnapInteraction::InteractionTracker::UnsubscribeFromServices((CShellSnapComponent *)((char *)this + 568));
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 408));
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 736));
  if ( *((_QWORD *)this + 41) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 104LL))(*((_QWORD *)this + 31));
  if ( *((_DWORD *)this + 98) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47));
  if ( *((_DWORD *)this + 276) != -1 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 104LL))(*((_QWORD *)this + 22));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A5,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v5);
    *((_DWORD *)this + 276) = -1;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 184);
  if ( *((_QWORD *)this + 211) )
  {
    std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::clear((char *)this + 1488);
    CShellSnapComponent::UpdateLaunchSnappedBehavior((char *)this - 48);
  }
  if ( this != (CShellSnapComponent *)-1472LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 184);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return 0LL;
}
