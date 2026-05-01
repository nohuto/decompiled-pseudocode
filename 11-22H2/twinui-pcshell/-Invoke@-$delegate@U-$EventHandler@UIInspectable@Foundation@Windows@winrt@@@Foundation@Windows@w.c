/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_7d98499c6cec3547b2371cefd2f8849f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1800464C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180046538 (-get@-$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,_lambda_7d98499c6cec3547b2371cefd2f8849f_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = a1 + 8;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::get(a1 + 8, &v5);
  try
  {
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(v3 + 8))(v5 + *(int *)(v3 + 16), &v6, &v7);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
