/*
 * XREFs of ?Initialize@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180144ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?copy_ref@?$com_ptr@UIApplicationViewCollection@@@winrt@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801A8FD0 (-copy_ref@-$com_ptr@UIApplicationViewCollection@@@winrt@@AEAAXPEAUIApplicationViewCollection@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::Initialize(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  _QWORD *v5; // rsi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rbx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    &v17);
  if ( v17 )
  {
    QueryService = a2->lpVtbl->QueryService;
    v5 = (_QWORD *)((char *)this + 168);
    if ( *((_QWORD *)this + 21) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 21);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (char *)this + 168);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x144,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v7 = *((_QWORD *)this + 11);
    v8 = v17;
    if ( *(_QWORD *)(v7 + 8) != v17 )
    {
      if ( *(_QWORD *)(v7 + 8) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v7 + 8));
      *(_QWORD *)(v7 + 8) = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    winrt::com_ptr<IApplicationViewCollection>::copy_ref(v7 + 32, *v5);
    v9 = *((_QWORD *)this + 13);
    v10 = v17;
    if ( *(_QWORD *)(v9 + 8) != v17 )
    {
      if ( *(_QWORD *)(v9 + 8) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v9 + 8));
      *(_QWORD *)(v9 + 8) = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    winrt::com_ptr<IApplicationViewCollection>::copy_ref(v9 + 32, *v5);
    v11 = *((_QWORD *)this + 15);
    v12 = v17;
    if ( *(_QWORD *)(v11 + 8) != v17 )
    {
      if ( *(_QWORD *)(v11 + 8) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v11 + 8));
      *(_QWORD *)(v11 + 8) = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    winrt::com_ptr<IApplicationViewCollection>::copy_ref(v11 + 32, *v5);
    v13 = (__int64 *)((char *)this + 152);
    v14 = v17;
    if ( *((_QWORD *)this + 19) != v17 )
    {
      if ( *v13 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 19);
      *v13 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( v17 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v17);
}
