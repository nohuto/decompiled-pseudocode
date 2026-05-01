/*
 * XREFs of ?Invoke@?$delegate@UPointerEventHandler@Input@Xaml@UI@Windows@winrt@@V_lambda_9dad63d3803c46edb86fb890f93be47c_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B9850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1805BB874 (-get@-$weak_ref@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::UI::Xaml::Input::PointerEventHandler,_lambda_9dad63d3803c46edb86fb890f93be47c_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = a1 + 8;
  winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::get(a1 + 8, &v5);
  try
  {
    if ( v5 )
      (*(void (__fastcall **)(char *, __int64 *, __int64 *))(v3 + 8))(&v5[*(int *)(v3 + 16)], &v6, &v7);
    if ( v5 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile __int64 **)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
