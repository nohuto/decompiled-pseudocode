/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_59a2c452c266c39cf2d30705a14a3598_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18027BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_59a2c452c266c39cf2d30705a14a3598_>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = a1 + 8;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1 + 8, &v5);
  try
  {
    if ( v5 )
      (*(void (__fastcall **)(char *, __int64 *, int *))(v3 + 8))(&v5[*(int *)(v3 + 16)], &v6, &v7);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref((volatile signed __int64 **)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
