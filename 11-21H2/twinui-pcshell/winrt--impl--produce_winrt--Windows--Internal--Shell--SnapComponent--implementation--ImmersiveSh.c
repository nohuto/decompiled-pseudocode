/*
 * XREFs of winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x1805B4710
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1805B3150 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void (__fastcall *v4)(__int64, _QWORD, __int128 *, __int64, __int64); // r11
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 72;
  if ( !a1 )
    v2 = 88LL;
  v3 = *(_QWORD *)v2;
  v13 = v3;
  try
  {
    winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
      &v12,
      (__int64 (__fastcall *)(_QWORD, GUID *, void *, __int64 *))IUnknown_QueryService,
      &v13);
    v4 = *(void (__fastcall **)(__int64, _QWORD, __int128 *, __int64, __int64))(*(_QWORD *)v12 + 48LL);
    v5 = a1 + 48;
    if ( !a1 )
      v5 = 64LL;
    v6 = *(_QWORD *)v5;
    v7 = (__int64)(*(_QWORD *)(v5 + 8) - *(_QWORD *)v5) >> 4;
    v8 = a1 + 24;
    if ( !a1 )
      v8 = 40LL;
    v9 = a1 + 32;
    if ( !a1 )
      v9 = 48LL;
    v11 = *(_OWORD *)v9;
    v4(v12, *(_QWORD *)v8, &v11, v7, v6);
    if ( v12 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
