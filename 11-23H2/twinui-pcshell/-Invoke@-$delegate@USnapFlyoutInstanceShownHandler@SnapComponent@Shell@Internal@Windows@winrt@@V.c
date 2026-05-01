/*
 * XREFs of ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_4f6f4ae6f6ef7d80e35ad6540d1880aa_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x18067B510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler,_lambda_4f6f4ae6f6ef7d80e35ad6540d1880aa_>::Invoke(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 result; // rax
  char *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = a1 + 8;
  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 8), &v7);
  try
  {
    if ( v7 )
    {
      LOBYTE(v5) = a3;
      (*(void (__fastcall **)(char *, __int64 *, __int64))(v4 + 8))(&v7[*(int *)(v4 + 16)], &v8, v5);
    }
    if ( v7 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile signed __int64 **)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
