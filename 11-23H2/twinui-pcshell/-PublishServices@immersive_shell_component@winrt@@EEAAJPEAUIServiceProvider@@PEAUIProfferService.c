/*
 * XREFs of ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800D8F80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1800D6694 (--$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA-AU-$com_ptr@UISer.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1800D9228 (-swap@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descr.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x180110988 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::immersive_shell_component::PublishServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  void (__fastcall ***v12)(_QWORD, const IID *, RTL_SRWLOCK **); // rcx
  int v13; // eax
  RTL_SRWLOCK *v14; // rdi
  RTL_SRWLOCK *v15; // rsi
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  RTL_SRWLOCK *v19; // [rsp+38h] [rbp-50h]
  __int128 *v20; // [rsp+40h] [rbp-48h]
  char v21; // [rsp+48h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  RTL_SRWLOCK *v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v5 = this - 2;
  (*((void (__fastcall **)(RTL_SRWLOCK *, struct IServiceProvider *))this[-2].Ptr + 9))(this - 2, a2);
  v25 = 0LL;
  v6 = 0LL;
  if ( v5 )
  {
    v25 = v5;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
    v6 = v5;
  }
  winrt::impl::as<IServiceProvider,winrt::immersive_shell_component,0>(&v18, v6);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v25);
  v22 = 0LL;
  v23 = 0LL;
  AcquireSRWLockExclusive(this + 8);
  std::vector<winrt::immersive_shell_component::service_description>::swap(&v22, &this[4]);
  if ( this != (RTL_SRWLOCK *)-64LL )
    ReleaseSRWLockExclusive(this + 8);
  v19 = v5;
  v20 = &v22;
  v21 = 1;
  v9 = *((_QWORD *)&v22 + 1);
  v8 = v22;
  v10 = v18;
  while ( v8 != v9 )
  {
    v11 = v10;
    v26 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = *(void (__fastcall ****)(_QWORD, const IID *, RTL_SRWLOCK **))(v8 + 16);
    if ( v12 )
    {
      v25 = 0LL;
      (**v12)(v12, &winrt::impl::guid_v<IServiceProvider>, &v25);
      if ( v25 )
      {
        winrt::com_ptr<ITouchSwipe>::operator=(&v26, &v25);
        v11 = v26;
        if ( v25 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v25);
      }
    }
    if ( !v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x146,
        (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
        v7);
    v13 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
            a3,
            v8,
            v11,
            v8 + 24);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x148,
        (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
        (const char *)(unsigned int)v13,
        v17);
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v26);
    v8 += 32LL;
  }
  v14 = v19;
  v15 = v19 + 10;
  AcquireSRWLockExclusive(v19 + 10);
  std::vector<winrt::immersive_shell_component::service_description>::swap(&v14[6], v20);
  if ( v15 )
    ReleaseSRWLockExclusive(v15);
  std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v22);
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
  return 0LL;
}
