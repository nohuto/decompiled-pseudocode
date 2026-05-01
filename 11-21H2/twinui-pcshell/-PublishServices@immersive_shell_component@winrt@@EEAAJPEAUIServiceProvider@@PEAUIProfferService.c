/*
 * XREFs of ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180079610
 * Callers:
 *     <none>
 * Callees:
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x180077848 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 *     ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x180077884 (-unconditional_release_ref@-$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1800F84E0 (--$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA-AU-$com_ptr@UISer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1801379AC (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803B5624 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::immersive_shell_component::PublishServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  RTL_SRWLOCK *v5; // rdi
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  const char *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, const IID *, __int64 *); // rcx
  int v17; // eax
  RTL_SRWLOCK *v18; // rsi
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-50h]
  __int64 *v24; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+48h] [rbp-40h]
  __int128 v26; // [rsp+50h] [rbp-38h] BYREF
  PVOID Ptr; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  RTL_SRWLOCK *v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

  v5 = this - 2;
  (*((void (__fastcall **)(RTL_SRWLOCK *, struct IServiceProvider *))this[-2].Ptr + 9))(this - 2, a2);
  v29 = 0LL;
  v6 = 0LL;
  if ( v5 )
  {
    v29 = v5;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
    v6 = v5;
  }
  winrt::impl::as<IServiceProvider,winrt::immersive_shell_component,0>(&v22, v6);
  if ( v6 )
    winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref((__int64 *)&v29);
  v26 = 0LL;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 8);
  v29 = this + 8;
  v7 = this + 4;
  if ( &v26 != (__int128 *)&this[4] )
  {
    v8 = (void *)v26;
    *(RTL_SRWLOCK *)&v26 = (RTL_SRWLOCK)v7->Ptr;
    v7->Ptr = v8;
    v9 = (void *)*((_QWORD *)&v26 + 1);
    *((RTL_SRWLOCK *)&v26 + 1) = this[5];
    this[5].Ptr = v9;
    v10 = Ptr;
    Ptr = this[6].Ptr;
    this[6].Ptr = v10;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v29);
  v23 = v5;
  v24 = (__int64 *)&v26;
  v25 = 1;
  v13 = *((_QWORD *)&v26 + 1);
  v12 = v26;
  v14 = v22;
  while ( v12 != v13 )
  {
    v15 = v14;
    v29 = (RTL_SRWLOCK *)v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v16 = *(void (__fastcall ****)(_QWORD, const IID *, __int64 *))(v12 + 16);
    if ( v16 )
    {
      v30 = 0LL;
      (**v16)(v16, &winrt::impl::guid_v<IServiceProvider>, &v30);
      if ( v30 )
      {
        winrt::com_ptr<IUnknown>::operator=(&v29, &v30);
        if ( v30 )
          winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v30);
        v15 = (__int64)v29;
      }
    }
    if ( !v15 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x146,
        (unsigned int)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
        v11);
    v17 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
            a3,
            v12,
            v15,
            v12 + 24);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x148,
        (unsigned int)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
        (const char *)(unsigned int)v17,
        v21);
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v29);
    v12 += 32LL;
  }
  v18 = v23;
  v19 = (__int64)&v23[10];
  AcquireSRWLockExclusive(v23 + 10);
  v29 = (RTL_SRWLOCK *)v19;
  std::vector<winrt::immersive_shell_component::service_description>::swap((__int64 *)&v18[6], v24);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v29);
  std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v26);
  if ( v14 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v22);
  return 0LL;
}
