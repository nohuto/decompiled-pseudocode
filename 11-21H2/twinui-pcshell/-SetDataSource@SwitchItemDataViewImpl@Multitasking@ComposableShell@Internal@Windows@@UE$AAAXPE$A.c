/*
 * XREFs of ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x180437F30
 * Callers:
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18007220C (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x1802DB774 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     ??$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@012@@Z @ 0x18042CD10 (--$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1804311E4 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1804322D4 (-ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 *     ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180433568 (-DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@.c)
 *     ?GetAt@?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@I@Z @ 0x180433D88 (-GetAt@-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collectio.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180437A18 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ?get@Size@?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@UE$AAAIXZ @ 0x18043F7F8 (-get@Size@-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collec.c)
 *     ?get@SwitchItems@ISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@6@XZ @ 0x18043F834 (-get@SwitchItems@ISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$A.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource(
        __int64 a1,
        __int64 a2)
{
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  int i; // ebx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r14
  int v21; // [rsp+20h] [rbp-40h]
  __int64 v22[3]; // [rsp+40h] [rbp-20h] BYREF
  char v23; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknown *v25; // [rsp+A8h] [rbp+48h] BYREF
  RTL_SRWLOCK *v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h]

  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(&v25, a2);
  if ( a2 && !IsAgile(v25) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x80070057LL,
      v21);
  wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)(a1 + 56));
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    v6 = __abi_winrt_ptr_ctor(v5);
    v27 = v6;
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(a1);
    v7 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItems::get(v6);
    v8 = __abi_winrt_ptr_ctor(v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    for ( i = Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::Size::get(v8);
          i >= 0;
          --i )
    {
      v10 = Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::GetAt(
              v8,
              (unsigned int)i);
      v11 = __abi_winrt_ptr_ctor(v10);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem((__int64 *)a1, v11);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( a2 )
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::ConnectToDataSource(a1, a2);
    v12 = __abi_winrt_ptr_ctor(a1);
    v13 = __abi_winrt_ptr_ctor(v12);
    v22[2] = v13;
    v23 = 1;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v14 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItems::get(a2);
    v27 = v14;
    v15 = __abi_winrt_ptr_ctor(v14);
    v27 = v15;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v16 = __abi_winrt_ptr_ctor(v15);
    v17 = 0LL;
    Windows::Foundation::Collections::end<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
      v22,
      v15);
    while ( v17 != v22[1] )
    {
      v18 = Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::GetAt(
              v16,
              (unsigned int)v17);
      v19 = __abi_winrt_ptr_ctor(v18);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v20 = __abi_winrt_ptr_ctor(v19);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem((__int64 *)a1, v20);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      ++v17;
    }
    if ( v22[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v26);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v25);
}
