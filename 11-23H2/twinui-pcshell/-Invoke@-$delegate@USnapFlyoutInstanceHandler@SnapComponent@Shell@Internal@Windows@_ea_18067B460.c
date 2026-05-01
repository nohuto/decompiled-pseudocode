/*
 * XREFs of ?Invoke@?$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_b00624e5fb0e02667b9366ca0e3bf890_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18067B460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,_lambda_b00624e5fb0e02667b9366ca0e3bf890_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  char *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1 + 8;
  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 8), &v4);
  try
  {
    if ( v4 )
      (*(void (__fastcall **)(char *, __int64 *))(v2 + 8))(&v4[*(int *)(v2 + 16)], &v5);
    if ( v4 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile signed __int64 **)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
